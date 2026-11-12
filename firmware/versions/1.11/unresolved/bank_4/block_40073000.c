/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40073000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40073532.
 * REA evidence: ev_7ccea0090407a836ed5a37002b6e876aa411d7fcb083a6e65ed9de1c119715c4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined8 FUN_ram_40073532(int param_1,int param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float local_24;
  
  if (param_2 == 0) {
    fStack_34 = 0.0;
    local_24 = 0.0;
    local_38 = DAT_ram_4009a8c0;
    fVar1 = DAT_ram_4009a8bc;
    fStack_30 = DAT_ram_4009601c;
    fStack_2c = DAT_ram_40094ee0;
    fStack_28 = DAT_ram_40094ee8;
    if ((7 < param_3) ||
       (local_38 = DAT_ram_4009a8c4, fVar1 = DAT_ram_40094ee8, fStack_30 = DAT_ram_4009a8c8,
       fStack_2c = DAT_ram_40099fb8, fStack_28 = DAT_ram_4009a1b4, param_3 == 4))
    goto LAB_ram_4007354e;
    if (param_3 == 6) {
      fStack_34 = DAT_ram_4009558c;
      fStack_30 = DAT_ram_40099fb8;
      fStack_2c = DAT_ram_4009a8cc;
      fStack_28 = DAT_ram_40094634;
      local_38 = DAT_ram_4009a110;
    }
    else if (param_3 == 5) {
      fStack_2c = DAT_ram_4009558c;
      fStack_28 = DAT_ram_40094634;
      local_38 = DAT_ram_4009a8d0;
    }
    else {
      if (param_3 != 7) {
        fVar1 = DAT_ram_40094ee8;
        if (param_3 < 4) {
          iVar7 = param_3 * 4;
          local_38 = ((float)*(undefined8 *)(&DAT_ram_4009a8d8 + iVar7) - DAT_ram_40094634) /
                     DAT_ram_40096064;
          fStack_30 = (float)*(undefined8 *)(&DAT_ram_4009a8f8 + iVar7);
          fStack_2c = (float)*(undefined8 *)(&DAT_ram_4009a908 + iVar7);
          fStack_28 = (float)*(undefined8 *)(&DAT_ram_4009a918 + iVar7);
          fVar1 = (float)*(undefined8 *)(&DAT_ram_4009a8e8 + iVar7) / DAT_ram_400952d4;
        }
        goto LAB_ram_4007354e;
      }
      fStack_34 = DAT_ram_40094eec;
      fStack_30 = DAT_ram_4009a8d4;
      fStack_2c = DAT_ram_40094eec;
      fStack_28 = DAT_ram_40094634;
      local_38 = DAT_ram_4009a540;
    }
LAB_ram_4007356c:
    if (0.0 <= fStack_34) goto LAB_ram_4007357c;
LAB_ram_4007379a:
    fStack_34 = 0.0;
LAB_ram_4007358c:
    if (0.0 <= fStack_30) goto LAB_ram_4007359c;
LAB_ram_40073780:
    fStack_30 = 0.0;
LAB_ram_400735ac:
    if (0.0 <= fStack_2c) goto LAB_ram_400735bc;
LAB_ram_40073766:
    fStack_2c = 0.0;
LAB_ram_400735cc:
    if (0.0 <= fStack_28) goto LAB_ram_400735dc;
LAB_ram_4007374c:
    fStack_28 = 0.0;
LAB_ram_400735ec:
    if (0.0 <= local_24) goto LAB_ram_400735fc;
LAB_ram_40073732:
    local_24 = 0.0;
  }
  else {
    FUN_ram_4000304c(&local_38,param_2,0x18);
    fVar1 = fStack_34;
LAB_ram_4007354e:
    fStack_34 = fVar1;
    if (local_38 < 0.0) {
      local_38 = 0.0;
      goto LAB_ram_4007356c;
    }
    if (local_38 <= DAT_ram_40094604) goto LAB_ram_4007356c;
    local_38 = DAT_ram_40094604;
    if (fStack_34 < 0.0) goto LAB_ram_4007379a;
LAB_ram_4007357c:
    if (fStack_34 <= DAT_ram_40094604) goto LAB_ram_4007358c;
    fStack_34 = DAT_ram_40094604;
    if (fStack_30 < 0.0) goto LAB_ram_40073780;
LAB_ram_4007359c:
    if (fStack_30 <= DAT_ram_40094604) goto LAB_ram_400735ac;
    fStack_30 = DAT_ram_40094604;
    if (fStack_2c < 0.0) goto LAB_ram_40073766;
LAB_ram_400735bc:
    if (fStack_2c <= DAT_ram_40094604) goto LAB_ram_400735cc;
    fStack_2c = DAT_ram_40094604;
    if (fStack_28 < 0.0) goto LAB_ram_4007374c;
LAB_ram_400735dc:
    if (fStack_28 <= DAT_ram_40094604) goto LAB_ram_400735ec;
    fStack_28 = DAT_ram_40094604;
    if (local_24 < 0.0) goto LAB_ram_40073732;
LAB_ram_400735fc:
    if (DAT_ram_40094604 < local_24) {
      local_24 = DAT_ram_40094604;
      goto joined_r0x400736fa;
    }
  }
joined_r0x400736fa:
  pfVar6 = &local_38;
  if (param_3 == 7) {
    if (*(char *)(param_1 + 0x38) == '\0') {
      pfVar6 = (float *)FUN_ram_4000304c(param_1 + 0x20,&local_38,0x18);
      *(undefined1 *)(param_1 + 0x38) = 1;
    }
    else {
      pfVar6 = (float *)(param_1 + 0x20);
      fVar1 = (fStack_34 - *(float *)(param_1 + 0x24)) * DAT_ram_4009a1cc;
      fVar2 = (fStack_30 - *(float *)(param_1 + 0x28)) * DAT_ram_4009a1cc;
      fVar3 = (fStack_2c - *(float *)(param_1 + 0x2c)) * DAT_ram_4009a1cc;
      fVar4 = (fStack_28 - *(float *)(param_1 + 0x30)) * DAT_ram_4009a1cc;
      fVar5 = (local_24 - *(float *)(param_1 + 0x34)) * DAT_ram_4009a1cc;
      *(ulonglong *)(param_1 + 0x20) =
           (ulonglong)
           (uint)((local_38 - *(float *)(param_1 + 0x20)) * DAT_ram_4009a1cc +
                 *(float *)(param_1 + 0x20));
      *(ulonglong *)(param_1 + 0x24) = (ulonglong)(uint)(fVar1 + *(float *)(param_1 + 0x24));
      *(ulonglong *)(param_1 + 0x28) = (ulonglong)(uint)(fVar2 + *(float *)(param_1 + 0x28));
      *(ulonglong *)(param_1 + 0x2c) = (ulonglong)(uint)(fVar3 + *(float *)(param_1 + 0x2c));
      *(ulonglong *)(param_1 + 0x30) = (ulonglong)(uint)(fVar4 + *(float *)(param_1 + 0x30));
      *(ulonglong *)(param_1 + 0x34) = (ulonglong)(uint)(fVar5 + *(float *)(param_1 + 0x34));
    }
  }
  if (((DAT_ram_40094620 <
        ABS((float)*(undefined8 *)(pfVar6 + 4) - (float)*(undefined8 *)(param_1 + 0x18))) ||
      (DAT_ram_40094620 <
       ABS((float)*(undefined8 *)(pfVar6 + 5) - (float)*(undefined8 *)(param_1 + 0x1c)))) ||
     (DAT_ram_40094620 < ABS((float)*(undefined8 *)(pfVar6 + 3) - *(float *)(param_1 + 0x14)) ||
      (DAT_ram_40094620 < ABS((float)*(undefined8 *)(pfVar6 + 2) - *(float *)(param_1 + 0x10)) ||
      (DAT_ram_40094620 < ABS((float)*(undefined8 *)(pfVar6 + 1) - *(float *)(param_1 + 0xc)) ||
      DAT_ram_40094620 < ABS((float)*(undefined8 *)pfVar6 - *(float *)(param_1 + 8)))))) {
    FUN_ram_40072df0(param_1,param_3,pfVar6);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)pfVar6;
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(pfVar6 + 1);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(pfVar6 + 2);
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(pfVar6 + 3);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(pfVar6 + 4);
    *(ulonglong *)(param_1 + 0x1c) = (ulonglong)(uint)pfVar6[5];
  }
  if (param_3 != 7) {
    return CONCAT44(local_24,fStack_28);
  }
  return *(undefined8 *)(pfVar6 + 4);
}


/* NanoCore 1.11, address 0x40073984.
 * REA evidence: ev_3aec8fbc24ed7c94d13e0bd9b2c5d2678d91dce704eca97b73919ad82c87832f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40073984(float param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  
  if (param_2 != (ulonglong *)0x0) {
    memset(param_2,0,0x74c60);
    if (param_1 <= DAT_ram_40094e80) {
      param_1 = DAT_ram_40094664;
    }
    uVar1 = (ulonglong)DAT_ram_40094600;
    *param_2 = (ulonglong)(uint)param_1;
    *(undefined1 *)((int)param_2 + 4) = 0xff;
    param_2[1] = uVar1;
    *(ulonglong *)((int)param_2 + 0xc) = uVar1;
    param_2[2] = uVar1;
    *(ulonglong *)((int)param_2 + 0x14) = uVar1;
    param_2[3] = uVar1;
    *(ulonglong *)((int)param_2 + 0x1c) = uVar1;
    memset(param_2 + 4,0,0x18);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x400739ec.
 * REA evidence: ev_cd49556f770d9f74f54a027d5ad248698bed4613e6a7040b2516ad5ecee4e099
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400739ec(ulonglong *param_1,uint param_2)

{
  float fVar1;
  ulonglong uVar2;
  undefined4 uStack_10;
  
  if (param_1 == (ulonglong *)0x0) {
    return;
  }
  uVar2 = *param_1;
  fVar1 = (float)uVar2;
  if (7 < param_2) {
    if (fVar1 <= DAT_ram_40094e80) {
      uVar2 = (ulonglong)DAT_ram_40094664;
    }
switchD_ram_40073a36_caseD_0:
    param_2 = 0;
    FUN_ram_40081558(uVar2);
    goto LAB_ram_40073a56;
  }
  if (param_2 == 4) {
    if (fVar1 <= DAT_ram_40094e80) {
      uVar2 = (ulonglong)DAT_ram_40094664;
    }
switchD_ram_40073a36_caseD_2:
    param_2 = 2;
    FUN_ram_4007cb36(uVar2);
  }
  else {
    if (fVar1 <= DAT_ram_40094e80) {
      uVar2 = (ulonglong)DAT_ram_40094664;
    }
    switch(param_2) {
    case 0:
      goto switchD_ram_40073a36_caseD_0;
    case 1:
      FUN_ram_4007f088();
      break;
    case 2:
      goto switchD_ram_40073a36_caseD_2;
    case 3:
      FUN_ram_4007a836();
      break;
    default:
      FUN_ram_4005de84();
      FUN_ram_4005dee4(CONCAT44(uStack_10,(int)uVar2),(int)param_1 + 0x43c);
      break;
    case 5:
      FUN_ram_4008305a();
      break;
    case 7:
      FUN_ram_40083b0e();
    }
  }
LAB_ram_40073a56:
  uVar2 = (ulonglong)DAT_ram_40094600;
  *(char *)((int)param_1 + 4) = (char)param_2;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[1] = uVar2;
  *(ulonglong *)((int)param_1 + 0xc) = uVar2;
  param_1[2] = uVar2;
  *(ulonglong *)((int)param_1 + 0x14) = uVar2;
  param_1[3] = uVar2;
  *(ulonglong *)((int)param_1 + 0x1c) = uVar2;
  memset(param_1 + 4,0,0x18);
  return;
}


/* NanoCore 1.11, address 0x40073ad0.
 * REA evidence: ev_23428e227d1490afa276f3676a4b7ee892525fda3869ca97f1acc797b96bd495
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40073ad0(int param_1)

{
  if (param_1 != 0) {
    return *(undefined1 *)(param_1 + 4);
  }
  return 0xff;
}


/* NanoCore 1.11, address 0x40073ade.
 * REA evidence: ev_ea227b2df3a1e2731d822b86e88e401625bb2e53af5035ff20d4867a9fc6ef63
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40073ade(int param_1)

{
  ulonglong uVar1;
  
  if (param_1 != 0) {
    switch(*(undefined1 *)(param_1 + 4)) {
    case 0:
      FUN_ram_40081628(param_1 + 0x43c);
      break;
    case 1:
      FUN_ram_4007f134(param_1 + 0x43c);
      break;
    case 2:
      FUN_ram_4007cc0a(param_1 + 0x43c);
      break;
    case 3:
      FUN_ram_4007a8e4(param_1 + 0x43c);
      break;
    case 5:
      FUN_ram_4008316c(param_1 + 0x43c);
      break;
    case 6:
      FUN_ram_4005df28(param_1 + 0x43c);
      break;
    case 7:
      FUN_ram_40083d42(param_1 + 0x43c);
    }
    uVar1 = (ulonglong)DAT_ram_40094600;
    *(ulonglong *)(param_1 + 8) = uVar1;
    *(ulonglong *)(param_1 + 0xc) = uVar1;
    *(ulonglong *)(param_1 + 0x10) = uVar1;
    *(ulonglong *)(param_1 + 0x14) = uVar1;
    *(ulonglong *)(param_1 + 0x18) = uVar1;
    *(ulonglong *)(param_1 + 0x1c) = uVar1;
    memset(param_1 + 0x20,0,0x18);
    *(undefined1 *)(param_1 + 0x38) = 0;
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40073b74.
 * REA evidence: ev_f14db4fff53746a567a48bdf9f5c9625876c92c22f914a1c5ddff27abaf6dbd3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40073b74(float *param_1,uint param_2,uint param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((param_1 == (float *)0x0) || (param_2 == 0)) {
    return;
  }
  memset(param_1,0,param_2 << 2);
  fVar5 = DAT_ram_4009a8c0;
  fVar6 = DAT_ram_40094ed4;
  fVar2 = DAT_ram_4009601c;
  fVar3 = DAT_ram_40094ee0;
  fVar4 = DAT_ram_40094ee8;
  if ((param_3 < 8) &&
     (fVar5 = DAT_ram_4009a8c4, fVar6 = DAT_ram_400952cc, fVar2 = DAT_ram_4009a8c8,
     fVar3 = DAT_ram_40099fb8, fVar4 = DAT_ram_4009a1b4, param_3 != 4)) {
    if (param_3 == 6) {
      *param_1 = DAT_ram_4009a110;
      if (param_2 != 1) {
        param_1[1] = DAT_ram_4009558c;
        if (param_2 != 2) {
          param_1[2] = DAT_ram_40099fb8;
        }
        if (3 < param_2) {
          param_1[3] = DAT_ram_4009a8cc;
        }
      }
    }
    else if (param_3 == 5) {
      *param_1 = DAT_ram_4009a8d0;
      if (param_2 != 1) {
        param_1[1] = 0.0;
        if (param_2 != 2) {
          param_1[2] = DAT_ram_4009a8c8;
        }
        if (3 < param_2) {
          param_1[3] = DAT_ram_4009558c;
        }
      }
    }
    else {
      if (param_3 != 7) {
        if (param_3 < 4) {
          iVar1 = param_3 * 4;
          fVar5 = ((float)*(undefined8 *)(&DAT_ram_4009a8d8 + iVar1) - DAT_ram_40094634) /
                  DAT_ram_40096064;
          fVar6 = (float)*(undefined8 *)(&DAT_ram_4009a8e8 + iVar1);
          fVar2 = (float)*(undefined8 *)(&DAT_ram_4009a8f8 + iVar1);
          fVar3 = (float)*(undefined8 *)(&DAT_ram_4009a908 + iVar1);
          fVar4 = (float)*(undefined8 *)(&DAT_ram_4009a918 + iVar1);
        }
        goto LAB_ram_40073c2c;
      }
      *param_1 = DAT_ram_4009a540;
      if (param_2 != 1) {
        param_1[1] = (float)_DAT_ram_40094eec;
        if (param_2 != 2) {
          param_1[2] = DAT_ram_4009a8d4;
        }
        if (3 < param_2) {
          param_1[3] = (float)_DAT_ram_40094eec;
        }
      }
    }
    if (4 < param_2) {
      param_1[4] = DAT_ram_40094634;
      return;
    }
  }
  else {
LAB_ram_40073c2c:
    *param_1 = fVar5;
    if (param_2 != 1) {
      param_1[1] = fVar6 / DAT_ram_400952d4;
      if (param_2 != 2) {
        param_1[2] = fVar2;
      }
      if (3 < param_2) {
        param_1[3] = fVar3;
      }
    }
    if (4 < param_2) {
      param_1[4] = fVar4;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x40073d80.
 * REA evidence: ev_309b05aab2809ea46dae6a9e7cb38ea6146313ada0d6accb6a0cd73cc48686ae
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40073d80(void)

{
  return 5;
}


/* NanoCore 1.11, address 0x40073d84.
 * REA evidence: ev_f6fcb8d18e665716c12c1355ad5893e87887e98f43bad972e862798692d38333
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40073d84(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    FUN_ram_4005c19e(param_1 + 2);
    uVar1 = DAT_ram_40094604;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = uVar1;
    param_1[0x21] = uVar1;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40073dce.
 * REA evidence: ev_90da851c512205330b9179938fc7a297ed2d4395d6fa4a0cc5dc83927f168231
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40073dce(ulonglong *param_1,uint param_2)

{
  ulonglong uVar1;
  
  if ((param_1 != (ulonglong *)0x0) && (param_2 != 0)) {
    memset(param_1,0,param_2 << 2);
    *param_1 = (ulonglong)DAT_ram_40094634;
    uVar1 = _DAT_ram_40099f88;
    if (param_2 != 1) {
      *(ulonglong *)((int)param_1 + 4) = _DAT_ram_40099f88;
      if (param_2 != 2) {
        param_1[1] = uVar1;
      }
      if (3 < param_2) {
        *(ulonglong *)((int)param_1 + 0xc) = _DAT_ram_40099f88;
      }
    }
    if (4 < param_2) {
      param_1[2] = (ulonglong)_DAT_ram_40094638;
    }
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40073e32.
 * REA evidence: ev_1b8589cd8260ce665194e1d312796e68aa033f280fa9541606b1ba2f0a383155
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40073e32(ulonglong *param_1,uint param_2)

{
  ulonglong uVar1;
  
  if ((param_1 != (ulonglong *)0x0) && (param_2 != 0)) {
    memset(param_1,0,param_2 << 2);
    *param_1 = (ulonglong)DAT_ram_40094604;
    if (param_2 != 1) {
      uVar1 = CONCAT44(_DAT_ram_40094638,DAT_ram_40094634);
      *(ulonglong *)((int)param_1 + 4) = uVar1;
      if (param_2 != 2) {
        param_1[1] = uVar1;
      }
      if (3 < param_2) {
        *(ulonglong *)((int)param_1 + 0xc) = CONCAT44(_DAT_ram_40094638,DAT_ram_40094634);
      }
    }
    if (4 < param_2) {
      param_1[2] = (ulonglong)_DAT_ram_40094638;
    }
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40073e96.
 * REA evidence: ev_1f31ae0ed5656b307bb73c80bd9a60a30498306b58ba8f0468c55a6218e83b2c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40073e96(ulonglong *param_1,int param_2)

{
  ulonglong uVar1;
  
  if ((param_1 != (ulonglong *)0x0) && (param_2 != 0)) {
    memset(param_1,0,param_2 << 2);
    uVar1 = (ulonglong)DAT_ram_40094634;
    *param_1 = uVar1;
    if ((param_2 != 1) && (*(ulonglong *)((int)param_1 + 4) = uVar1, param_2 != 2)) {
      param_1[1] = (ulonglong)_DAT_ram_40094638;
    }
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40073ede.
 * REA evidence: ev_ec426ae622b39be717094f091d81a5e879979fcc65c36d49ef2581e440fd99eb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40073ede(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 5;
  if (param_1 == 1) {
    uVar1 = 3;
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x40073eec.
 * REA evidence: ev_aa00965e605e83514aefe793f7a3ac2f60e5ce3c43e61e31c4bb31bb420b1a3f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40073eec(int *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                     uint param_6,float *param_7,int param_8,char param_9,int param_10)

{
  bool bVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  float *pfVar7;
  int *piVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if (param_2 == (float *)0x0) {
    return;
  }
  if (param_4 == (float *)0x0) {
    return;
  }
  if (param_6 == 0) {
    return;
  }
  if (param_10 != 0) {
    *(bool *)param_10 = param_9 != '\0';
  }
  if (param_1 == (int *)0x0) {
LAB_ram_400742ee:
    if (param_2 != param_4) {
      FUN_ram_4000304c(param_4,param_2,param_6 << 2);
    }
    if ((((param_9 != '\0') && (param_3 != (float *)0x0)) && (param_5 != (float *)0x0)) &&
       (param_3 != param_5)) {
      FUN_ram_4000304c(param_5,param_3,param_6 << 2);
      return;
    }
    return;
  }
  pfVar2 = param_3;
  if ((0x80 < param_6) || ((param_1[0x23] == 0 && (DAT_ram_4009a004 <= (float)param_1[0x21])))) {
    bVar1 = false;
    pfVar7 = param_2;
  }
  else {
    pfVar7 = (float *)(param_1 + 0x24);
    FUN_ram_4000304c(pfVar7,param_2,param_6 << 2);
    if (param_9 == '\0') {
      bVar1 = true;
    }
    else if (param_3 == (float *)0x0) {
      bVar1 = true;
      pfVar2 = (float *)0x0;
    }
    else {
      FUN_ram_4000304c(param_1 + 0xa4,param_3,param_6 << 2);
      bVar1 = true;
      pfVar2 = (float *)(param_1 + 0xa4);
    }
  }
  if (*param_1 == 0) goto LAB_ram_400742ee;
  if ((((char *)param_1[1] == (char *)0x0) || (*(char *)param_1[1] == '\0')) ||
     (iVar3 = FUN_ram_40089d70(), fVar10 = DAT_ram_40094634, iVar3 == 0)) {
    if (param_2 != param_4) {
      FUN_ram_4000304c(param_4,param_2,param_6 << 2);
    }
    if (param_9 == '\0') {
      iVar3 = param_1[0x23];
      fVar10 = (float)param_1[0x21];
      if ((iVar3 == 0) && (ABS(fVar10 - DAT_ram_40094604) <= DAT_ram_40094620)) {
        return;
      }
      fVar11 = (float)param_1[0x22];
      pfVar2 = param_4;
      do {
        if (iVar3 != 0) {
          iVar3 = iVar3 + -1;
          if (iVar3 == 0) {
            bVar1 = 0.0 <= fVar11;
            fVar11 = 0.0;
            fVar10 = fVar11;
            if (bVar1) {
              fVar10 = DAT_ram_40094604;
            }
          }
          else {
            fVar10 = fVar10 + fVar11;
          }
        }
        fVar18 = *pfVar7;
        pfVar4 = pfVar2 + 1;
        pfVar7 = pfVar7 + 1;
        *pfVar2 = ((float)*(undefined8 *)pfVar2 - fVar18) * fVar10 + fVar18;
        pfVar2 = pfVar4;
      } while (param_4 + param_6 != pfVar4);
    }
    else {
      if (((param_3 != (float *)0x0) && (param_5 != (float *)0x0)) && (param_3 != param_5)) {
        FUN_ram_4000304c(param_5,param_3,param_6 << 2);
      }
      iVar3 = param_1[0x23];
      fVar10 = (float)param_1[0x21];
      if ((iVar3 == 0) && (ABS(fVar10 - DAT_ram_40094604) <= DAT_ram_40094620)) {
        return;
      }
      fVar11 = (float)param_1[0x22];
      if (pfVar2 == (float *)0x0) {
        pfVar2 = param_4;
        do {
          if (iVar3 != 0) {
            iVar3 = iVar3 + -1;
            if (iVar3 == 0) {
              bVar1 = 0.0 <= fVar11;
              fVar11 = 0.0;
              fVar10 = fVar11;
              if (bVar1) {
                fVar10 = DAT_ram_40094604;
              }
            }
            else {
              fVar10 = fVar10 + fVar11;
            }
          }
          fVar18 = *pfVar7;
          pfVar4 = pfVar2 + 1;
          pfVar7 = pfVar7 + 1;
          *pfVar2 = ((float)*(undefined8 *)pfVar2 - fVar18) * fVar10 + fVar18;
          pfVar2 = pfVar4;
        } while (param_4 + param_6 != pfVar4);
      }
      else if (param_5 == (float *)0x0) {
        pfVar2 = param_4;
        do {
          if (iVar3 != 0) {
            iVar3 = iVar3 + -1;
            if (iVar3 == 0) {
              bVar1 = 0.0 <= fVar11;
              fVar11 = 0.0;
              fVar10 = fVar11;
              if (bVar1) {
                fVar10 = DAT_ram_40094604;
              }
            }
            else {
              fVar10 = fVar10 + fVar11;
            }
          }
          fVar18 = *pfVar7;
          pfVar4 = pfVar2 + 1;
          pfVar7 = pfVar7 + 1;
          *pfVar2 = ((float)*(undefined8 *)pfVar2 - fVar18) * fVar10 + fVar18;
          pfVar2 = pfVar4;
        } while (param_4 + param_6 != pfVar4);
      }
      else {
        pfVar4 = pfVar7 + param_6;
        do {
          if (iVar3 != 0) {
            iVar3 = iVar3 + -1;
            if (iVar3 == 0) {
              bVar1 = 0.0 <= fVar11;
              fVar11 = 0.0;
              fVar10 = fVar11;
              if (bVar1) {
                fVar10 = DAT_ram_40094604;
              }
            }
            else {
              fVar10 = fVar10 + fVar11;
            }
          }
          fVar18 = *pfVar7;
          pfVar7 = pfVar7 + 1;
          *param_4 = ((float)*(undefined8 *)param_4 - fVar18) * fVar10 + fVar18;
          *param_5 = fVar10 * (*param_5 - *pfVar2) + *pfVar2;
          param_4 = param_4 + 1;
          param_5 = param_5 + 1;
          pfVar2 = pfVar2 + 1;
        } while (pfVar4 != pfVar7);
      }
    }
    param_1[0x21] = (int)fVar10;
    param_1[0x22] = (int)fVar11;
    param_1[0x23] = iVar3;
    return;
  }
  if ((param_9 == '\0') || (param_3 == (float *)0x0)) {
    if (param_2 != param_4) {
      FUN_ram_4000304c(param_4,param_2,param_6 << 2);
    }
  }
  else {
    pfVar5 = param_2 + param_6;
    pfVar4 = param_4;
    do {
      uVar15 = *(undefined8 *)param_2;
      uVar12 = *(undefined8 *)param_3;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      *pfVar4 = ((float)uVar15 + (float)uVar12) * fVar10;
      pfVar4 = pfVar4 + 1;
    } while (param_2 != pfVar5);
  }
  fVar11 = DAT_ram_40094620;
  fVar10 = DAT_ram_40094604;
  if (param_8 == 1) {
    if (param_7 == (float *)0x0) {
      uVar13 = 0;
      uVar9 = (ulonglong)(uint)DAT_ram_40094634;
LAB_ram_4007448a:
      if (DAT_ram_40094604 < fVar10) {
        fVar10 = DAT_ram_40094604;
      }
    }
    else {
      fVar18 = *param_7;
      fVar16 = param_7[1];
      uVar9 = (ulonglong)(uint)fVar16;
      fVar10 = param_7[2];
      if (0.0 <= fVar18) {
        uVar13 = (ulonglong)(uint)DAT_ram_40094604;
        if (fVar18 <= DAT_ram_40094604) {
          uVar13 = (ulonglong)(uint)(fVar18 * (float)PTR_entry_ram_40094618 + DAT_ram_40094600);
        }
      }
      else {
        uVar13 = (ulonglong)(uint)DAT_ram_40094600;
      }
      if (fVar16 < 0.0) {
        uVar9 = 0;
      }
      else if (DAT_ram_40094604 < fVar16) {
        uVar9 = (ulonglong)(uint)DAT_ram_40094604;
      }
      if (0.0 <= fVar10) goto LAB_ram_4007448a;
      fVar10 = 0.0;
    }
    iVar3 = *param_1;
    if (DAT_ram_40094620 < ABS((float)uVar13 - (float)*(undefined8 *)(param_1 + 0x1b))) {
      *(ulonglong *)(iVar3 + 8) = uVar13;
      *(ulonglong *)(param_1 + 0x1b) = uVar13;
    }
    if (fVar11 < ABS((float)uVar9 - (float)*(undefined8 *)(param_1 + 0x1f))) {
      *(ulonglong *)(iVar3 + 0x20) = uVar9;
      *(ulonglong *)(param_1 + 0x1f) = uVar9;
    }
    fVar18 = (float)param_1[0x20];
    if (fVar11 < ABS(fVar10 - (float)param_1[0x20])) {
      param_1[0x20] = (int)fVar10;
      fVar18 = fVar10;
    }
    FUN_ram_30046e24(fVar18,iVar3,param_4,param_6);
    goto LAB_ram_400741ba;
  }
  if (param_7 == (float *)0x0) {
    uVar13 = 0;
    fVar18 = DAT_ram_40094634;
    fVar16 = DAT_ram_40094634;
    fVar19 = DAT_ram_40094604;
    fVar14 = DAT_ram_40094634;
LAB_ram_400743c0:
    fVar17 = fVar18 * DAT_ram_40094ea8 + DAT_ram_400952a4;
  }
  else {
    fVar17 = *param_7;
    fVar18 = param_7[1];
    fVar16 = param_7[2];
    fVar19 = param_7[4];
    fVar14 = param_7[3];
    if (0.0 <= fVar17) {
      uVar13 = (ulonglong)(uint)DAT_ram_40094604;
      if (fVar17 <= DAT_ram_40094604) {
        uVar13 = (ulonglong)(uint)(fVar17 * (float)PTR_entry_ram_40094618 + DAT_ram_40094600);
      }
    }
    else {
      uVar13 = (ulonglong)(uint)DAT_ram_40094600;
    }
    fVar17 = DAT_ram_400952a4;
    if ((0.0 <= fVar18) && (fVar17 = DAT_ram_40094e90, fVar18 <= DAT_ram_40094604))
    goto LAB_ram_400743c0;
  }
  fVar18 = DAT_ram_400952a4;
  if ((0.0 <= fVar16) && (fVar18 = DAT_ram_40094e90, fVar16 <= DAT_ram_40094604)) {
    fVar18 = fVar16 * DAT_ram_40094ea8 + DAT_ram_400952a4;
  }
  if (fVar14 < 0.0) {
    uVar9 = (ulonglong)(uint)DAT_ram_400952a4;
  }
  else if (fVar14 <= DAT_ram_40094604) {
    uVar9 = (ulonglong)(uint)(fVar14 * DAT_ram_40094ea8 + DAT_ram_400952a4);
  }
  else {
    uVar9 = (ulonglong)(uint)DAT_ram_40094e90;
  }
  if (fVar19 < 0.0) {
    fVar19 = 0.0;
  }
  else if (DAT_ram_40094604 < fVar19) {
    fVar19 = DAT_ram_40094604;
  }
  if (DAT_ram_40094620 < ABS((float)uVar13 - (float)*(undefined8 *)(param_1 + 0x1b))) {
    *(ulonglong *)(*param_1 + 8) = uVar13;
    *(ulonglong *)(param_1 + 0x1b) = uVar13;
  }
  fVar16 = DAT_ram_40094628;
  piVar8 = param_1 + 2;
  if (DAT_ram_40094628 < ABS(fVar17 - (float)*(undefined8 *)(param_1 + 0x1c))) {
    FUN_ram_4005c476(fVar17,piVar8);
    param_1[0x1c] = (int)fVar17;
  }
  if (fVar16 < ABS(fVar18 - (float)*(undefined8 *)(param_1 + 0x1d))) {
    FUN_ram_4005c598(fVar18,piVar8);
    param_1[0x1d] = (int)fVar18;
  }
  if (fVar16 < ABS((float)uVar9 - (float)*(undefined8 *)(param_1 + 0x1e))) {
    FUN_ram_4005c67a(uVar9,piVar8);
    *(ulonglong *)(param_1 + 0x1e) = uVar9;
  }
  if (fVar11 < ABS(fVar19 - (float)param_1[0x20])) {
    param_1[0x20] = (int)fVar19;
  }
  FUN_ram_30046e24(fVar10,*param_1,param_4,param_6);
  uVar6 = 0;
  pfVar4 = param_4;
  do {
    fVar10 = (float)FUN_ram_4005c79a(*pfVar4,piVar8);
    uVar6 = uVar6 + 1;
    *pfVar4 = (float)param_1[0x20] * fVar10;
    pfVar4 = pfVar4 + 1;
  } while (param_6 != uVar6);
LAB_ram_400741ba:
  if ((param_9 != '\0') && (param_5 != (float *)0x0)) {
    pfVar4 = param_5;
    pfVar5 = param_4;
    do {
      uVar12 = *(undefined8 *)pfVar5;
      pfVar5 = pfVar5 + 1;
      *pfVar4 = (float)uVar12;
      pfVar4 = pfVar4 + 1;
    } while (pfVar5 != param_4 + param_6);
  }
  if (!bVar1) {
    return;
  }
  iVar3 = param_1[0x23];
  fVar10 = (float)param_1[0x21];
  fVar18 = (float)param_1[0x22];
  if ((iVar3 == 0) && (ABS(fVar10 - DAT_ram_40094604) <= fVar11)) {
    return;
  }
  if (param_9 == '\0') {
    pfVar2 = param_4;
    do {
      if (iVar3 != 0) {
        iVar3 = iVar3 + -1;
        if (iVar3 == 0) {
          bVar1 = 0.0 <= fVar18;
          fVar18 = 0.0;
          fVar10 = fVar18;
          if (bVar1) {
            fVar10 = DAT_ram_40094604;
          }
        }
        else {
          fVar10 = fVar10 + fVar18;
        }
      }
      fVar11 = *pfVar7;
      pfVar4 = pfVar2 + 1;
      pfVar7 = pfVar7 + 1;
      *pfVar2 = ((float)*(undefined8 *)pfVar2 - fVar11) * fVar10 + fVar11;
      pfVar2 = pfVar4;
    } while (pfVar4 != param_4 + param_6);
  }
  else {
    uVar6 = 0;
    if (pfVar2 == (float *)0x0) {
      do {
        if (iVar3 != 0) {
          iVar3 = iVar3 + -1;
          if (iVar3 == 0) {
            bVar1 = 0.0 <= fVar18;
            fVar18 = 0.0;
            fVar10 = fVar18;
            if (bVar1) {
              fVar10 = DAT_ram_40094604;
            }
          }
          else {
            fVar10 = fVar10 + fVar18;
          }
        }
        fVar11 = *pfVar7;
        uVar6 = uVar6 + 1;
        pfVar7 = pfVar7 + 1;
        *param_4 = fVar10 * ((float)*(undefined8 *)param_4 - fVar11) + fVar11;
        param_4 = param_4 + 1;
      } while (uVar6 < param_6);
    }
    else if (param_5 == (float *)0x0) {
      do {
        if (iVar3 != 0) {
          iVar3 = iVar3 + -1;
          if (iVar3 == 0) {
            bVar1 = 0.0 <= fVar18;
            fVar18 = 0.0;
            fVar10 = fVar18;
            if (bVar1) {
              fVar10 = DAT_ram_40094604;
            }
          }
          else {
            fVar10 = fVar10 + fVar18;
          }
        }
        fVar11 = *pfVar7;
        uVar6 = uVar6 + 1;
        pfVar7 = pfVar7 + 1;
        *param_4 = ((float)*(undefined8 *)param_4 - fVar11) * fVar10 + fVar11;
        param_4 = param_4 + 1;
      } while (uVar6 < param_6);
    }
    else {
      do {
        if (iVar3 != 0) {
          iVar3 = iVar3 + -1;
          if (iVar3 == 0) {
            bVar1 = 0.0 <= fVar18;
            fVar18 = 0.0;
            fVar10 = fVar18;
            if (bVar1) {
              fVar10 = DAT_ram_40094604;
            }
          }
          else {
            fVar10 = fVar10 + fVar18;
          }
        }
        fVar11 = *pfVar7;
        uVar6 = uVar6 + 1;
        pfVar7 = pfVar7 + 1;
        *param_4 = ((float)*(undefined8 *)param_4 - fVar11) * fVar10 + fVar11;
        *param_5 = fVar10 * (*param_5 - *pfVar2) + *pfVar2;
        param_4 = param_4 + 1;
        param_5 = param_5 + 1;
        pfVar2 = pfVar2 + 1;
      } while (uVar6 < param_6);
    }
  }
  param_1[0x21] = (int)fVar10;
  param_1[0x22] = (int)fVar18;
  param_1[0x23] = iVar3;
  return;
}


