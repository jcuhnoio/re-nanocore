/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40071000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x400717b4.
 * REA evidence: ev_a9e8a56a569d1116195545279b6e1ad166c6ec46f76f37fedb25611da4808684
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400717b4(ulonglong *param_1,uint param_2,uint param_3)

{
  if ((param_1 == (ulonglong *)0x0) || (param_2 == 0)) {
    return;
  }
  memset(param_1,0,param_2 << 2);
  if (param_3 < 5) {
    if (param_3 == 1) {
      *param_1 = (ulonglong)DAT_ram_4009a5e4;
      if (param_2 == 1) {
        return;
      }
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009a5e0;
      if (param_2 == 2) {
        return;
      }
      param_1[1] = (ulonglong)DAT_ram_40099fb8;
      return;
    }
    if (param_3 == 2) {
      *param_1 = (ulonglong)DAT_ram_4009a5e4;
      if (param_2 == 1) {
        return;
      }
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009a5ec;
      if (param_2 == 2) {
        return;
      }
      param_1[1] = (ulonglong)DAT_ram_40095454;
      return;
    }
    if (param_3 != 3) {
      if (param_3 != 4) {
        *param_1 = (ulonglong)DAT_ram_4009a610;
        if (param_2 == 1) {
          return;
        }
        *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_40094604;
        return;
      }
      *param_1 = (ulonglong)DAT_ram_4009a600;
      if (param_2 == 1) {
        return;
      }
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_40094e8c;
      if (param_2 != 2) {
        *(undefined4 *)(param_1 + 1) = 0;
      }
      if (param_2 < 4) {
        return;
      }
      *(ulonglong *)((int)param_1 + 0xc) = (ulonglong)_DAT_ram_40094638;
      return;
    }
    *param_1 = (ulonglong)DAT_ram_4009a5fc;
    if (param_2 != 1) {
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_40099f88;
      if (param_2 != 2) {
        *(undefined4 *)(param_1 + 1) = 0;
      }
      if (3 < param_2) {
        *(undefined4 *)((int)param_1 + 0xc) = 0;
      }
    }
  }
  else {
    if (param_3 != 8) {
      if (param_3 == 9) {
        FUN_ram_40071b20(param_1,param_2);
        return;
      }
      if (param_3 != 10) {
        if (param_3 != 0xb) {
          if (param_3 == 0xc) {
            *param_1 = CONCAT44(_DAT_ram_40094638,DAT_ram_40094634);
            if (param_2 != 1) {
              *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009605c;
              if (param_2 != 2) {
                param_1[1] = (ulonglong)DAT_ram_4009a110;
              }
              if (3 < param_2) {
                *(ulonglong *)((int)param_1 + 0xc) = CONCAT44(_DAT_ram_40094638,DAT_ram_40094634);
              }
            }
            if (param_2 < 5) {
              return;
            }
            param_1[2] = (ulonglong)DAT_ram_4009601c;
            return;
          }
          if (param_3 != 0x11) {
            return;
          }
        }
        FUN_ram_4007231e(param_1,param_2,param_3);
        return;
      }
      FUN_ram_40074776(param_1,param_2);
      return;
    }
    *param_1 = (ulonglong)DAT_ram_4009a6d8;
    if (param_2 != 1) {
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_40094634;
      if (param_2 != 2) {
        param_1[1] = (ulonglong)DAT_ram_40094604;
      }
      if (3 < param_2) {
        *(ulonglong *)((int)param_1 + 0xc) = (ulonglong)DAT_ram_40094604;
      }
    }
  }
  if (4 < param_2) {
    param_1[2] = (ulonglong)DAT_ram_40094604;
  }
  return;
}


/* NanoCore 1.11, address 0x400719b6.
 * REA evidence: ev_a6f1b73a1524292e33fddb2438903421f70f1c4c262dc97ece60ec702df3099f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400719b6(ulonglong *param_1,int param_2)

{
  if ((param_1 != (ulonglong *)0x0) && (param_2 != 0)) {
    memset(param_1,0,param_2 << 2);
    *param_1 = (ulonglong)DAT_ram_4009a610;
    if (param_2 != 1) {
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_40094604;
    }
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x400719f6.
 * REA evidence: ev_91db76bbe15e97d07ec5fa5425db95a7da3c9036dbc72635e3420ca035fac6d8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_400719f6(uint param_1)

{
  if (param_1 < 0x12) {
    return (&DAT_ram_4009a764)[param_1];
  }
  return 0;
}


/* NanoCore 1.11, address 0x40071a48.
 * REA evidence: ev_48cfa353bef6c770cb4adeaaa7dabe654227f7b913ef65567f88b168e12bfd75
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40071a48(int param_1)

{
  ulonglong uVar1;
  
  if (param_1 != 0) {
    uVar1 = (ulonglong)DAT_ram_4009a110;
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


/* NanoCore 1.11, address 0x40071a9a.
 * REA evidence: ev_d8766be7ecfdf11e1ab1d413e51e385e31872391911dba7e00deb102eca99bf3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40071a9a(float param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  
  if (param_2 != (ulonglong *)0x0) {
    memset((int)param_2 + 4,0,0x18);
    if (param_1 <= 0.0) {
      param_1 = DAT_ram_40094664;
    }
    uVar1 = (ulonglong)DAT_ram_4009a110;
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


/* NanoCore 1.11, address 0x40071b20.
 * REA evidence: ev_0180da3b8da87514f780482223611897f9f80387cebe8d03eaa34b83df97e0f9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40071b20(ulonglong *param_1,uint param_2)

{
  if ((param_1 != (ulonglong *)0x0) && (param_2 != 0)) {
    memset(param_1,0,param_2 << 2);
    *param_1 = (ulonglong)DAT_ram_4009a788;
    if (param_2 != 1) {
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_40094634;
      if (param_2 != 2) {
        *(undefined4 *)(param_1 + 1) = 0;
      }
      if (3 < param_2) {
        *(ulonglong *)((int)param_1 + 0xc) = (ulonglong)DAT_ram_4009a110;
      }
    }
    if (4 < param_2) {
      param_1[2] = (ulonglong)DAT_ram_40094604;
    }
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40071b26.
 * REA evidence: ev_829fe7689a6cabe47293122e2277b2e6ac5c2fb4635a4892e1d38143093d702b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40071b26(ulonglong *param_1,uint param_2)

{
  memset(param_1,0,param_2 << 2);
  *param_1 = (ulonglong)DAT_ram_4009a788;
  if (param_2 != 1) {
    *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_40094634;
    if (param_2 != 2) {
      *(undefined4 *)(param_1 + 1) = 0;
    }
    if (3 < param_2) {
      *(ulonglong *)((int)param_1 + 0xc) = (ulonglong)DAT_ram_4009a110;
    }
  }
  if (4 < param_2) {
    param_1[2] = (ulonglong)DAT_ram_40094604;
  }
  return;
}


/* NanoCore 1.11, address 0x40071b8c.
 * REA evidence: ev_2c42f776b6b41b9473da2c791719194bf100d988fb2309edd4c07b9414d71925
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40071b8c(float *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
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
  
  puVar3 = DAT_ram_40094604;
  if (param_7 == (float *)0x0) {
    puStack_a8 = DAT_ram_4009a110;
    puVar30 = (undefined *)0x0;
    puVar28 = DAT_ram_4009a788;
    puVar33 = DAT_ram_40094634;
    puVar29 = DAT_ram_40094604;
  }
  else {
    puVar28 = (undefined *)*param_7;
    if ((float)puVar28 < 0.0) {
      puVar28 = (undefined *)0x0;
LAB_ram_40072032:
      puVar33 = (undefined *)param_7[1];
      if ((float)puVar33 < 0.0) goto LAB_ram_40071c06;
LAB_ram_40072042:
      if ((float)puVar33 <= (float)DAT_ram_40094604) goto LAB_ram_40071c0a;
      puStack_a8 = (undefined *)param_7[3];
      puVar33 = DAT_ram_40094604;
      if ((float)puStack_a8 < 0.0) goto LAB_ram_40072064;
LAB_ram_40071c20:
      if ((float)DAT_ram_40094604 < (float)puStack_a8) {
        puStack_a8 = DAT_ram_40094604;
      }
      puVar29 = (undefined *)param_7[4];
    }
    else {
      if ((float)puVar28 <= (float)DAT_ram_40094604) goto LAB_ram_40072032;
      puVar33 = (undefined *)param_7[1];
      puVar28 = DAT_ram_40094604;
      if (0.0 <= (float)puVar33) goto LAB_ram_40072042;
LAB_ram_40071c06:
      puVar33 = (undefined *)0x0;
LAB_ram_40071c0a:
      puStack_a8 = (undefined *)param_7[3];
      if (0.0 <= (float)puStack_a8) goto LAB_ram_40071c20;
LAB_ram_40072064:
      puVar29 = (undefined *)param_7[4];
      puStack_a8 = (undefined *)0x0;
    }
    if ((float)puVar29 < 0.0) {
      puVar29 = (undefined *)0x0;
      puVar30 = DAT_ram_40094604;
    }
    else if ((float)DAT_ram_40094604 < (float)puVar29) {
      puVar29 = DAT_ram_40094604;
      puVar30 = (undefined *)0x0;
    }
    else {
      puVar30 = (undefined *)((float)DAT_ram_40094604 - (float)puVar29);
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
     (fVar31 = DAT_ram_40094e9c, (float)puVar28 <= (float)DAT_ram_40094604)) {
    fVar31 = (float)puVar28 * DAT_ram_40094e9c + 0.0;
  }
  fVar32 = param_1[2];
  uVar18 = *(ulonglong *)(param_1 + 1);
  bVar2 = param_8 != 0 && param_5 != 0;
  fVar26 = DAT_ram_4009a480;
  if ((float)puVar33 < 0.0) {
    if (fVar16 <= 0.0) {
      fVar34 = 0.0;
      fVar19 = DAT_ram_40095290;
    }
    else {
      fVar34 = 0.0;
      fVar26 = fVar16 * DAT_ram_4009605c;
LAB_ram_40072138:
      fVar19 = fVar34 * DAT_ram_40094658 + DAT_ram_40095290;
LAB_ram_4007214c:
      if (fVar34 < 0.0) {
        fStack_ac = DAT_ram_40095298;
        goto LAB_ram_40071d04;
      }
      if ((float)DAT_ram_40094604 < fVar34) goto LAB_ram_4007215e;
    }
    fStack_ac = fVar34 * DAT_ram_400952dc + DAT_ram_40095298;
LAB_ram_40072198:
    if (DAT_ram_400952d4 <= fStack_ac) goto LAB_ram_40071d04;
    fStack_ac = DAT_ram_40094ec8;
    puVar28 = PTR_entry_ram_40094618;
    if (fVar19 < DAT_ram_40094ec8) goto LAB_ram_40071d6a;
    fStack_ac = DAT_ram_400952d4;
    if (DAT_ram_4009a484 < fVar19) {
      fStack_ac = DAT_ram_4009a484;
      fVar26 = fStack_ac;
      fVar34 = DAT_ram_400952d4;
      goto LAB_ram_40071d4c;
    }
LAB_ram_40071d2e:
    fVar34 = fStack_ac;
    if (fStack_ac < fVar19) {
LAB_ram_40071d38:
      fVar19 = fStack_ac;
      fVar34 = fStack_ac;
    }
    fStack_ac = fVar19;
    fVar19 = DAT_ram_40094620;
    fVar26 = fStack_ac;
    if (DAT_ram_40094620 <= fStack_ac) goto LAB_ram_40071d4c;
  }
  else {
    fVar19 = DAT_ram_4009529c;
    if ((float)DAT_ram_40094604 < (float)puVar33) {
      puVar28 = DAT_ram_40094604;
      if (0.0 < fVar16) {
        fVar26 = fVar16 * DAT_ram_4009605c;
LAB_ram_400720da:
        fStack_ac = (float)puVar28 * DAT_ram_40094e80 + DAT_ram_40095294;
        goto LAB_ram_40072198;
      }
LAB_ram_40072210:
      fVar19 = (float)puVar28 * DAT_ram_40094658 + DAT_ram_4009528c;
LAB_ram_40072224:
      if ((float)puVar28 < 0.0) {
LAB_ram_4007215e:
        fStack_ac = DAT_ram_40095294;
      }
      else {
        if ((float)puVar28 <= (float)DAT_ram_40094604) goto LAB_ram_400720da;
        fStack_ac = DAT_ram_400952a0;
      }
    }
    else {
      if (0.0 < fVar16) {
        fVar26 = fVar16 * DAT_ram_4009605c;
      }
      if ((float)puVar33 <= (float)DAT_ram_40094634) {
        fVar34 = (float)puVar33 + (float)puVar33;
        if (0.0 <= fVar34) {
          fVar19 = DAT_ram_4009528c;
          if (fVar34 <= (float)DAT_ram_40094604) goto LAB_ram_40072138;
          goto LAB_ram_4007214c;
        }
        fStack_ac = DAT_ram_40095298;
        fVar19 = DAT_ram_40095290;
      }
      else {
        puVar28 = (undefined *)
                  (((float)puVar33 - (float)DAT_ram_40094634) +
                  ((float)puVar33 - (float)DAT_ram_40094634));
        if (0.0 <= (float)puVar28) {
          if ((float)puVar28 <= (float)DAT_ram_40094604) goto LAB_ram_40072210;
          goto LAB_ram_40072224;
        }
        fStack_ac = DAT_ram_40095294;
        fVar19 = DAT_ram_4009528c;
      }
    }
LAB_ram_40071d04:
    if (fVar26 < fStack_ac) {
      fStack_ac = fVar26;
    }
    if (DAT_ram_40094ec8 <= fVar19) {
      if (fStack_ac - (float)DAT_ram_40094604 < fVar19) {
        fVar19 = fStack_ac - (float)DAT_ram_40094604;
      }
      goto LAB_ram_40071d2e;
    }
    fVar26 = DAT_ram_40094ec8;
    fVar34 = fStack_ac;
    if (fStack_ac < DAT_ram_40094ec8) goto LAB_ram_40071d38;
LAB_ram_40071d4c:
    fStack_ac = fVar26;
    fVar19 = fVar34;
    if (fStack_ac <= fVar34) {
      fVar19 = fStack_ac;
    }
  }
  puVar28 = (undefined *)(fVar34 / fVar19);
  if (fVar34 / fVar19 < (float)DAT_ram_40094604) {
    puVar28 = DAT_ram_40094604;
  }
LAB_ram_40071d6a:
  fVar20 = (float)FUN_ram_40000c5e(puVar28);
  fVar11 = DAT_ram_4009a39c;
  fVar19 = DAT_ram_4009a204._4_4_;
  fVar34 = DAT_ram_4009a1e8;
  fVar26 = DAT_ram_4009a1ac;
  puVar28 = PTR_entry_ram_40094618;
  uVar14 = 0;
  do {
    uVar15 = param_6 - uVar14;
    if (8 < uVar15) {
      uVar15 = 8;
    }
    fVar21 = (float)FUN_ram_40000bd8(((float)(int)uVar15 * DAT_ram_4009461c * fVar11 *
                                     (float)DAT_ram_40096074) / fVar16);
    puVar33 = (undefined *)((float)puVar3 - fVar21);
    if ((float)puVar33 < 0.0) {
      puVar33 = (undefined *)0x0;
    }
    else if ((float)puVar3 < (float)puVar33) {
      puVar33 = puVar3;
    }
    fVar21 = (float)FUN_ram_400009d2((float)uVar18 * (float)_DAT_ram_40099f94);
    puVar22 = (undefined *)(fVar21 * (float)_DAT_ram_40094eec + (float)puStack_a8);
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
    if (ABS(fVar21) < (float)_DAT_ram_40095454) {
      fVar21 = fVar21 * fVar21 * fVar21 * fVar26 + fVar21;
    }
    else {
      fVar21 = (float)FUN_ram_40000a4e();
    }
    fVar10 = DAT_ram_4009a20c;
    fVar9 = DAT_ram_4009a204._4_4_;
    fVar8 = DAT_ram_4009a1ec;
    fVar7 = DAT_ram_4009a1e8;
    fVar6 = DAT_ram_40099fa8;
    fVar5 = (float)DAT_ram_40099f5c;
    fVar4 = DAT_ram_40094614;
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
                     (fVar25 * fVar25 * DAT_ram_4009a20c + fVar19);
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


