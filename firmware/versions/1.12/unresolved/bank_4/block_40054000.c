/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40054000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x400542ec.
 * REA evidence: ev_37e1e74161ff8160b2361c040a481968930415f445eea3c83d250264d00d2def
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400542ec(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  int iStack_138;
  undefined1 *puStack_134;
  undefined1 *puStack_130;
  undefined1 *puStack_12c;
  undefined4 uStack_128;
  undefined1 auStack_124 [4];
  int iStack_120;
  int iStack_118;
  undefined1 *puStack_114;
  int iStack_110;
  undefined1 uStack_108;
  undefined1 *puStack_104;
  byte bStack_100;
  undefined1 auStack_ff [3];
  int iStack_fc;
  byte bStack_f8;
  undefined1 *puStack_f4;
  undefined1 uStack_ec;
  undefined1 auStack_e8 [56];
  undefined1 auStack_b0 [56];
  undefined1 auStack_78 [68];
  
  iStack_14c = *(int *)(param_2 + 0x3c);
  iVar2 = *(int *)(param_2 + 0x34);
  iVar5 = *(int *)(param_2 + 0x2c);
  iStack_154 = iVar2;
  if (iStack_14c <= iVar2) {
    iStack_154 = iStack_14c;
  }
  if (iVar5 < iStack_154) {
    iStack_154 = iVar5;
  }
  iVar6 = *(int *)(param_2 + 0x38);
  iStack_148 = *(int *)(param_2 + 0x40);
  iVar10 = *(int *)(param_2 + 0x30);
  iStack_150 = iVar6;
  if (iStack_148 <= iVar6) {
    iStack_150 = iStack_148;
  }
  if (iVar10 < iStack_150) {
    iStack_150 = iVar10;
  }
  if (iStack_14c < iVar2) {
    iStack_14c = iVar2;
  }
  if (iStack_14c < iVar5) {
    iStack_14c = iVar5;
  }
  if (iStack_148 < iVar6) {
    iStack_148 = iVar6;
  }
  if (iStack_148 < iVar10) {
    iStack_148 = iVar10;
  }
  iVar2 = FUN_ram_4004a4fe(&iStack_144,&iStack_154,*(undefined4 *)(param_1 + 8));
  if (iVar2 == 0) {
    return;
  }
  iVar14 = *(int *)(param_2 + 0x2c);
  iVar5 = *(int *)(param_2 + 0x34);
  iVar11 = *(int *)(param_2 + 0x3c);
  iVar10 = *(int *)(param_2 + 0x40);
  iVar7 = *(int *)(param_2 + 0x38);
  iVar6 = *(int *)(param_2 + 0x30);
  iVar4 = iVar6;
  iVar1 = iVar10;
  iVar2 = iVar5;
  iVar8 = iVar7;
  iVar12 = iVar5;
  iVar15 = iVar11;
  if (((iVar14 != iVar5) &&
      (iVar1 = iVar7, iVar2 = iVar11, iVar8 = iVar10, iVar12 = iVar11, iVar15 = iVar5,
      iVar14 != iVar11)) &&
     (iVar4 = iVar7, iVar1 = iVar6, iVar2 = iVar5, iVar15 = iVar14, iVar5 != iVar11)) {
    iVar2 = iVar14;
    iVar9 = iVar7;
    if (iVar6 <= iVar7) {
      iVar2 = iVar5;
      iVar5 = iVar14;
      iVar9 = iVar6;
      iVar6 = iVar7;
    }
    iVar4 = iVar10;
    iVar1 = iVar9;
    iVar8 = iVar6;
    iVar15 = iVar5;
    if ((iVar9 <= iVar10) &&
       (iVar4 = iVar9, iVar1 = iVar10, iVar12 = iVar5, iVar7 = iVar2, iVar15 = iVar11,
       iVar6 < iVar10)) goto LAB_ram_400543ea;
  }
  iVar6 = iVar1;
  iVar10 = iVar4;
  iVar5 = iVar2;
  iVar9 = iVar8;
  iVar11 = iVar12;
  iVar7 = iVar15;
  if (iVar4 <= iVar8) {
    iVar10 = iVar8;
    iVar5 = iVar12;
    iVar9 = iVar4;
    iVar11 = iVar2;
  }
LAB_ram_400543ea:
  puStack_134 = (undefined1 *)0x0;
  puStack_130 = (undefined1 *)0x0;
  uVar16 = (iVar11 - iVar5) * (iVar6 - iVar9) - (iVar10 - iVar9) * (iVar7 - iVar5);
  puStack_12c = (undefined1 *)0x0;
  uStack_128 = 0;
  FUN_ram_40052d8a(auStack_e8,iVar5,iVar9,iVar11,iVar10,uVar16 >> 0x1f);
  uVar16 = ~uVar16 >> 0x1f;
  FUN_ram_40052d8a(auStack_b0,iVar5,iVar9,iVar7,iVar6);
  if (iVar6 == iVar10) {
    uVar16 = 2;
    iVar10 = iVar6;
  }
  FUN_ram_40052d8a(auStack_78,iVar11,iVar10,iVar7,iVar6,uVar16);
  iVar5 = (iStack_13c - iStack_144) + 1;
  puStack_134 = auStack_e8;
  puStack_130 = auStack_b0;
  puStack_12c = auStack_78;
  iVar6 = FUN_ram_4005a952(iVar5);
  FUN_ram_4000303c(auStack_124,&iStack_144,0x10);
  iStack_118 = iStack_120;
  FUN_ram_4000303c(auStack_ff,param_2 + 0x1d,3);
  bStack_100 = *(byte *)(param_2 + 0x1c);
  puStack_114 = auStack_124;
  uVar16 = *(uint *)(param_2 + 0x28);
  uStack_ec = 0;
  iStack_110 = 0;
  iStack_fc = iVar6;
  puStack_f4 = puStack_114;
  piVar3 = (int *)FUN_ram_40051686(param_2 + 0x20,(iStack_14c - iStack_154) + 1,
                                   (iStack_148 - iStack_150) + 1);
  uVar13 = (uVar16 & 0x7ffffff) >> 0x18;
  iVar10 = 0;
  iVar2 = iStack_140;
  if ((piVar3 != (int *)0x0) && (uVar13 == 2)) {
    iStack_110 = *piVar3 + (iStack_144 - iStack_154) * 3;
    puStack_104 = auStack_124;
    iVar10 = piVar3[1] + (iStack_144 - iStack_154);
    uStack_108 = 0xf;
  }
  do {
    if (iStack_138 < iVar2) {
      FUN_ram_4005a988(iVar6);
      FUN_ram_40052d04(auStack_78);
      FUN_ram_40052d04(auStack_e8);
      FUN_ram_40052d04(auStack_b0);
      if (piVar3 != (int *)0x0) {
        thunk_FUN_ram_4005a988(piVar3);
      }
      return;
    }
    iStack_120 = iVar2;
    iStack_118 = iVar2;
    thunk_FUN_ram_40004f92(iVar6,0xff,iVar5);
    iVar4 = FUN_ram_40052cb0(&puStack_134,iVar6,iStack_144,iVar2,iVar5);
    bStack_f8 = (byte)iVar4;
    if (uVar13 == 1) {
      iVar4 = iVar2 - iStack_150;
      FUN_ram_4000303c(auStack_ff,*piVar3 + iVar4 * 3,3);
      bStack_100 = *(byte *)(piVar3[1] + iVar4);
      if (*(byte *)(param_2 + 0x1c) < 0xfd) {
        bStack_100 = (byte)((uint)bStack_100 * (uint)*(byte *)(param_2 + 0x1c) >> 8);
      }
LAB_ram_400545f0:
      FUN_ram_4005464e(param_1,&puStack_114);
    }
    else {
      if ((uVar13 != 2) || (iVar10 == 0)) goto LAB_ram_400545f0;
      if (iVar4 == 2) {
        for (iVar4 = 0; iStack_fc = iVar6, iVar4 < iVar5; iVar4 = iVar4 + 1) {
          if (*(byte *)(iVar10 + iVar4) < 0xfd) {
            *(char *)(iVar6 + iVar4) =
                 (char)((uint)*(byte *)(iVar6 + iVar4) * (uint)*(byte *)(iVar10 + iVar4) >> 8);
          }
        }
        goto LAB_ram_400545f0;
      }
      if (iVar4 == 1) {
        bStack_f8 = (byte)((uVar16 << 5) >> 0x1d);
        iStack_fc = iVar10;
        goto LAB_ram_400545f0;
      }
      if (iVar4 != 0) goto LAB_ram_400545f0;
    }
    iVar2 = iVar2 + 1;
  } while( true );
}


/* NanoCore 1.12, address 0x4005464e.
 * REA evidence: ev_c57286352d485fe340efe42670e5fa45ec990c448b14a97e2471f8c7180c8bed
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005464e(int param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined1 uStack_24;
  undefined1 uStack_23;
  undefined1 uStack_22;
  
  if ((*(byte *)(param_2 + 5) < 3) || ((param_2[6] != 0 && (*(char *)(param_2 + 7) == '\0')))) {
    return;
  }
  iVar3 = FUN_ram_4004a4fe(&iStack_54,*param_2,*(undefined4 *)(param_1 + 8));
  if (iVar3 == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 4);
  uStack_38 = FUN_ram_4004dace((*(int *)(iVar2 + 0xc) - *(int *)(iVar2 + 4)) + 1,
                               *(undefined1 *)(iVar2 + 0x14));
  iVar6 = iStack_50;
  iVar3 = iStack_54;
  if (param_2[1] == 0) {
    iStack_40 = (iStack_4c - iStack_54) + 1;
    iStack_3c = (iStack_48 - iStack_50) + 1;
    uStack_2c = CONCAT13(*(undefined1 *)(param_2 + 5),(undefined3)uStack_2c);
    FUN_ram_4000303c(&uStack_2c,(int)param_2 + 0x15,3);
    iStack_34 = param_2[6];
    if ((iStack_34 == 0) || (*(char *)(param_2 + 7) == '\x01')) {
      iStack_34 = 0;
    }
    uStack_44 = FUN_ram_4004da44(iVar2,iVar3 - *(int *)(iVar2 + 4),iVar6 - *(int *)(iVar2 + 8));
    if (iStack_34 != 0) {
      piVar4 = (int *)param_2[8];
      iStack_30 = param_2[9];
      if (iStack_30 == 0) {
        iStack_30 = (piVar4[2] - *piVar4) + 1;
      }
      iStack_34 = (iStack_54 - *piVar4) + (iStack_50 - piVar4[1]) * iStack_30 + iStack_34;
    }
    bVar1 = *(byte *)(iVar2 + 0x14);
    if (bVar1 == 0x11) {
      uVar5 = 4;
    }
    else {
      if (0x11 < bVar1) {
        if (bVar1 != 0x12) {
          return;
        }
        FUN_ram_40055988(&uStack_44);
        return;
      }
      if (bVar1 != 0xf) {
        if (bVar1 != 0x10) {
          return;
        }
        FUN_ram_40054e58(&uStack_44);
        return;
      }
      uVar5 = 3;
    }
    FUN_ram_4005645c(&uStack_44,uVar5);
    return;
  }
  iVar3 = FUN_ram_4004a4fe(&iStack_54,&iStack_54,param_2[4]);
  if (iVar3 == 0) {
    return;
  }
  if ((param_2[8] != 0) && (iVar3 = FUN_ram_4004a4fe(&iStack_54), iVar3 == 0)) {
    return;
  }
  uStack_24 = *(undefined1 *)(param_2 + 3);
  iStack_40 = (iStack_4c - iStack_54) + 1;
  iVar6 = param_2[1];
  iStack_3c = (iStack_48 - iStack_50) + 1;
  uStack_23 = *(undefined1 *)(param_2 + 5);
  uStack_22 = *(undefined1 *)(param_2 + 10);
  iStack_28 = param_2[2];
  iVar3 = FUN_ram_4004adf8();
  uStack_2c = (iStack_50 - ((int *)param_2[4])[1]) * iStack_28 +
              (iStack_54 - *(int *)param_2[4]) * (iVar3 + 7 >> 3) + iVar6;
  if ((param_2[6] == 0) || (*(char *)(param_2 + 7) == '\x01')) {
    iStack_34 = 0;
  }
  else {
    piVar4 = (int *)param_2[8];
    iStack_30 = param_2[9];
    if (iStack_30 == 0) {
      iStack_30 = (piVar4[2] - *piVar4) + 1;
    }
    iStack_34 = (iStack_54 - *piVar4) + (iStack_50 - piVar4[1]) * iStack_30 + param_2[6];
  }
  uStack_44 = FUN_ram_4004da44(iVar2,iStack_54 - *(int *)(iVar2 + 4),iStack_50 - *(int *)(iVar2 + 8)
                              );
  switch(*(char *)(iVar2 + 0x14) + -0xf) {
  case '\0':
    uVar5 = 3;
    goto LAB_ram_40054852;
  case '\x01':
    FUN_ram_4005506c(&uStack_44);
    break;
  case '\x02':
    uVar5 = 4;
LAB_ram_40054852:
    FUN_ram_40056616(&uStack_44,uVar5);
    break;
  case '\x03':
  case '\x05':
    FUN_ram_40055c20(&uStack_44);
  }
  return;
}


/* NanoCore 1.12, address 0x40054860.
 * REA evidence: ev_51780c39e44591bb2c37f878d69bbebe1372fb4f639e6813b165e06b8306461d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40054860(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_4;
  undefined1 uStack_3;
  undefined1 uStack_2;
  
  uVar1 = param_1 >> 0x18;
  if (uVar1 < 0xfd) {
    uStack_18 = (undefined1)param_2;
    uStack_17 = (byte)(param_2 >> 8);
    uStack_16 = (byte)(param_2 >> 0x10);
    if (uVar1 < 3) {
      uStack_4 = uStack_18;
      uStack_3 = uStack_17;
      uStack_2 = uStack_16;
    }
    else {
      iVar2 = 0xff - uVar1;
      uStack_4 = (undefined1)((param_2 & 0xff) * iVar2 + (param_1 & 0xff) * uVar1 >> 8);
      uStack_3 = (byte)((uint)uStack_17 * iVar2 + ((param_1 & 0xffff) >> 8) * uVar1 >> 8);
      uStack_2 = (byte)((uint)uStack_16 * iVar2 + ((param_1 & 0xffffff) >> 0x10) * uVar1 >> 8);
    }
  }
  else {
    uStack_4 = (undefined1)param_1;
    uStack_3 = (byte)(param_1 >> 8);
    uStack_2 = (byte)(param_1 >> 0x10);
  }
  return (uint)CONCAT12(uStack_2,CONCAT11(uStack_3,uStack_4)) | param_2 & 0xff000000;
}


/* NanoCore 1.12, address 0x40054904.
 * REA evidence: ev_b657d435cacd2b169c52f81919cf4d8b16391723b379e32fa25885d6ed1ab233
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40054904(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uStack_28;
  undefined4 uStack_24;
  uint auStack_14 [3];
  
  uVar5 = param_1 >> 0x18;
  uVar1 = param_1;
  if (((uVar5 < 0xfd) && (uVar3 = param_2 >> 0x18, uVar1 = param_1, 2 < uVar3)) &&
     (uVar1 = param_2, 2 < uVar5)) {
    uStack_28 = param_2;
    uStack_24 = param_1;
    if (uVar3 == 0xff) {
      uVar1 = FUN_ram_40054860();
      return uVar1;
    }
    if ((*(byte *)((int)param_3 + 7) != uVar3) || (*(byte *)((int)param_3 + 3) != uVar5)) {
      uVar1 = (0xff - uVar5) * (0xff - uVar3) ^ 0xff00;
      uVar3 = (uVar1 & 0xffff) >> 8;
      *(char *)(param_3 + 3) = (char)(uVar1 >> 8);
      if (uVar3 == 0) {
        uVar4 = 0xff;
      }
      else {
        uVar4 = (undefined1)((uVar5 * 0xff) / uVar3);
      }
      *(undefined1 *)((int)param_3 + 0xd) = uVar4;
    }
    if ((param_2 != param_3[1]) || (*param_3 != param_1)) {
      FUN_ram_4000303c(param_3,&uStack_24,4);
      FUN_ram_4000303c(param_3 + 1,&uStack_28,4);
      uStack_24 = CONCAT13(*(undefined1 *)((int)param_3 + 0xd),(undefined3)uStack_24);
      uVar2 = FUN_ram_40054860(uStack_24,uStack_28);
      *(char *)((int)param_3 + 9) = (char)((uint)uVar2 >> 8);
      *(char *)(param_3 + 2) = (char)uVar2;
      *(char *)((int)param_3 + 10) = (char)((uint)uVar2 >> 0x10);
      *(char *)((int)param_3 + 0xb) = (char)param_3[3];
    }
    FUN_ram_4000303c(auStack_14,param_3 + 2,4);
    uVar1 = auStack_14[0];
  }
  auStack_14[0] = uVar1;
  return auStack_14[0];
}


/* NanoCore 1.12, address 0x40054a3e.
 * REA evidence: ev_19f4fd10d25c3eed4407ac0ffef2519000e3b51e079d353bd8a9bcbe909527af
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40054a3e(byte *param_1,uint param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uStack_14;
  
  uVar2 = param_2 & 0xff;
  uVar7 = (param_2 & 0xffff) >> 8;
  uVar4 = (param_2 & 0xffffff) >> 0x10;
  if (param_3 == 2) {
    iVar5 = param_1[2] - uVar4;
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    iVar6 = param_1[1] - uVar7;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    uStack_14._1_3_ = CONCAT21((short)iVar5,(char)iVar6) & 0xffff;
    uVar2 = *param_1 - uVar2;
    if ((int)uVar2 < 0) {
      uVar2 = 0;
    }
  }
  else if (param_3 == 3) {
    uStack_14._1_3_ = CONCAT21((short)(param_1[2] * uVar4 >> 8),(char)(param_1[1] * uVar7 >> 8));
    uVar2 = (int)(*param_1 * uVar2) >> 8;
  }
  else {
    if (param_3 != 1) {
      return;
    }
    uVar3 = (undefined2)(uVar4 + param_1[2]);
    if (0xff < uVar4 + param_1[2]) {
      uVar3 = 0xff;
    }
    uVar7 = param_1[1] + uVar7;
    if (0xff < uVar7) {
      uVar7 = 0xff;
    }
    uStack_14._1_3_ = CONCAT21(uVar3,(char)uVar7) & 0xffff;
    uVar2 = *param_1 + uVar2;
    if (0xff < uVar2) {
      uVar2 = 0xff;
    }
  }
  uStack_14 = CONCAT31(uStack_14._1_3_,(char)uVar2);
  uVar1 = FUN_ram_40054904(uStack_14,*(undefined4 *)param_1,param_4);
  *param_1 = (byte)uVar1;
  param_1[1] = (byte)((uint)uVar1 >> 8);
  param_1[2] = (byte)((uint)uVar1 >> 0x10);
  param_1[3] = (byte)((uint)uVar1 >> 0x18);
  return;
}


/* NanoCore 1.12, address 0x40054b54.
 * REA evidence: ev_d7e5933c8184269cc1504c8fc363d1d49a2a5e7894adf47897576ed672c8a6d8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40054b54(int param_1)

{
  thunk_FUN_ram_40004f92(param_1,0,4);
  thunk_FUN_ram_40004f92(param_1 + 4,0,4);
  thunk_FUN_ram_40004f92(param_1 + 8,0,4);
  *(undefined1 *)(param_1 + 0xc) = 0xff;
  *(undefined1 *)(param_1 + 0xd) = 0xff;
  return;
}


/* NanoCore 1.12, address 0x40054b8e.
 * REA evidence: ev_f6d9e6c07680737341e61cb6f96df7b6233715b8c0fefb5c377aa42bcc780dac
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40054b8e(undefined4 *param_1,int param_2)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined3 *puVar5;
  undefined4 uVar6;
  int iVar7;
  byte bVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined3 *puVar17;
  uint uVar18;
  undefined4 uStack_54;
  undefined1 auStack_50 [28];
  
  iVar12 = param_1[1];
  iVar13 = param_1[2];
  bVar2 = *(byte *)((int)param_1 + 0x21);
  uVar18 = (uint)bVar2;
  puVar4 = (undefined1 *)*param_1;
  iVar14 = param_1[3];
  puVar5 = (undefined3 *)param_1[6];
  iVar15 = param_1[7];
  iVar10 = param_1[4];
  iVar16 = param_1[5];
  FUN_ram_40054b54(auStack_50);
  if (*(char *)((int)param_1 + 0x22) == '\0') {
    if (iVar10 == 0) {
      if (uVar18 < 0xfd) {
        uStack_54 = (uint)bVar2 << 0x18;
        for (iVar10 = 0; iVar10 < iVar13; iVar10 = iVar10 + 1) {
          puVar17 = puVar5;
          for (iVar16 = 0; iVar16 < iVar12; iVar16 = iVar16 + 1) {
            puVar9 = (undefined1 *)((int)puVar17 + 2);
            puVar1 = (undefined1 *)((int)puVar17 + 1);
            uVar3 = *(undefined1 *)puVar17;
            puVar17 = (undefined3 *)((int)puVar17 + param_2);
            uStack_54 = CONCAT31(CONCAT21(CONCAT11(uStack_54._3_1_,*puVar9),*puVar1),uVar3);
            uVar6 = FUN_ram_40054904(uStack_54,
                                     CONCAT13(puVar4[iVar16 * 4 + 3],
                                              CONCAT12(puVar4[iVar16 * 4 + 2],
                                                       CONCAT11(puVar4[iVar16 * 4 + 1],
                                                                puVar4[iVar16 * 4]))),auStack_50);
            puVar4[iVar16 * 4] = (char)uVar6;
            puVar4[iVar16 * 4 + 1] = (char)((uint)uVar6 >> 8);
            puVar4[iVar16 * 4 + 2] = (char)((uint)uVar6 >> 0x10);
            puVar4[iVar16 * 4 + 3] = (char)((uint)uVar6 >> 0x18);
          }
          puVar4 = puVar4 + iVar14;
          puVar5 = (undefined3 *)((int)puVar5 + iVar15);
        }
      }
      else {
        iVar10 = 0;
        if (param_2 == 4) {
          for (iVar10 = 0; iVar10 < iVar13; iVar10 = iVar10 + 1) {
            thunk_FUN_ram_4000500c(puVar4,puVar5,iVar12 << 2);
            puVar4 = puVar4 + iVar14;
            puVar5 = (undefined3 *)((int)puVar5 + iVar15);
          }
        }
        else {
          for (; iVar10 < iVar13; iVar10 = iVar10 + 1) {
            puVar17 = puVar5;
            puVar9 = puVar4;
            for (iVar16 = 0; iVar16 < iVar12; iVar16 = iVar16 + 1) {
              puVar9[2] = *(undefined1 *)((int)puVar17 + 2);
              puVar9[1] = *(undefined1 *)((int)puVar17 + 1);
              uVar3 = *(undefined1 *)puVar17;
              puVar9[3] = 0xff;
              *puVar9 = uVar3;
              puVar17 = (undefined3 *)((int)puVar17 + 3);
              puVar9 = puVar9 + 4;
            }
            puVar4 = puVar4 + iVar14;
            puVar5 = (undefined3 *)((int)puVar5 + iVar15);
          }
        }
      }
    }
    else {
      iVar7 = 0;
      if (uVar18 < 0xfd) {
        for (; iVar7 < iVar13; iVar7 = iVar7 + 1) {
          puVar17 = puVar5;
          for (iVar11 = 0; iVar11 < iVar12; iVar11 = iVar11 + 1) {
            uVar6 = FUN_ram_40054904(CONCAT31(CONCAT21(CONCAT11((char)(*(byte *)(iVar10 + iVar11) *
                                                                       uVar18 >> 8),
                                                                *(undefined1 *)((int)puVar17 + 2)),
                                                       *(undefined1 *)((int)puVar17 + 1)),
                                              *(undefined1 *)puVar17),
                                     CONCAT13(puVar4[iVar11 * 4 + 3],
                                              CONCAT12(puVar4[iVar11 * 4 + 2],
                                                       CONCAT11(puVar4[iVar11 * 4 + 1],
                                                                puVar4[iVar11 * 4]))),auStack_50);
            puVar4[iVar11 * 4] = (char)uVar6;
            puVar4[iVar11 * 4 + 1] = (char)((uint)uVar6 >> 8);
            puVar4[iVar11 * 4 + 2] = (char)((uint)uVar6 >> 0x10);
            puVar4[iVar11 * 4 + 3] = (char)((uint)uVar6 >> 0x18);
            puVar17 = (undefined3 *)((int)puVar17 + param_2);
          }
          puVar4 = puVar4 + iVar14;
          puVar5 = (undefined3 *)((int)puVar5 + iVar15);
          iVar10 = iVar10 + iVar16;
        }
      }
      else {
        for (iVar7 = 0; iVar7 < iVar13; iVar7 = iVar7 + 1) {
          puVar17 = puVar5;
          for (iVar11 = 0; iVar11 < iVar12; iVar11 = iVar11 + 1) {
            puVar9 = (undefined1 *)((int)puVar17 + 2);
            puVar1 = (undefined1 *)((int)puVar17 + 1);
            uVar3 = *(undefined1 *)puVar17;
            puVar17 = (undefined3 *)((int)puVar17 + param_2);
            uStack_54 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar10 + iVar11),*puVar9),*puVar1
                                         ),uVar3);
            uVar6 = FUN_ram_40054904(uStack_54,
                                     CONCAT13(puVar4[iVar11 * 4 + 3],
                                              CONCAT12(puVar4[iVar11 * 4 + 2],
                                                       CONCAT11(puVar4[iVar11 * 4 + 1],
                                                                puVar4[iVar11 * 4]))),auStack_50);
            puVar4[iVar11 * 4] = (char)uVar6;
            puVar4[iVar11 * 4 + 1] = (char)((uint)uVar6 >> 8);
            puVar4[iVar11 * 4 + 2] = (char)((uint)uVar6 >> 0x10);
            puVar4[iVar11 * 4 + 3] = (char)((uint)uVar6 >> 0x18);
          }
          puVar4 = puVar4 + iVar14;
          puVar5 = (undefined3 *)((int)puVar5 + iVar15);
          iVar10 = iVar10 + iVar16;
        }
      }
    }
  }
  else {
    for (iVar7 = 0; iVar7 < iVar13; iVar7 = iVar7 + 1) {
      puVar17 = puVar5;
      for (iVar11 = 0; iVar11 < iVar12; iVar11 = iVar11 + 1) {
        bVar8 = bVar2;
        if (iVar10 != 0) {
          bVar8 = (byte)(*(byte *)(iVar10 + iVar11) * uVar18 >> 8);
        }
        uStack_54 = CONCAT13(bVar8,*puVar17);
        FUN_ram_40054a3e(puVar4 + iVar11 * 4,uStack_54,*(undefined1 *)((int)param_1 + 0x22),
                         auStack_50);
        puVar17 = (undefined3 *)((int)puVar17 + param_2);
      }
      if (iVar10 != 0) {
        iVar10 = iVar10 + iVar16;
      }
      puVar4 = puVar4 + iVar14;
      puVar5 = (undefined3 *)((int)puVar5 + iVar15);
    }
  }
  return;
}


/* NanoCore 1.12, address 0x40054e58.
 * REA evidence: ev_059c01cd252b9a0c1c1cc64695434ece180832a992aff0b55875e1d98cb36278
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40054e58(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined4 uStack_44;
  undefined1 auStack_40 [20];
  
  iVar3 = param_1[4];
  iVar10 = param_1[1];
  iVar12 = param_1[2];
  uVar15 = (uint)*(byte *)((int)param_1 + 0x1b);
  iVar14 = param_1[5];
  iVar13 = param_1[3];
  FUN_ram_40054b54(auStack_40);
  if (iVar3 == 0) {
    if (uVar15 < 0xfd) {
      uVar5 = FUN_ram_4004ae36(param_1[6],uVar15);
      iVar3 = *param_1;
      for (iVar14 = 0; iVar14 < iVar12; iVar14 = iVar14 + 1) {
        for (iVar1 = 0; iVar1 < iVar10; iVar1 = iVar1 + 1) {
          iVar4 = iVar3 + iVar1 * 4;
          uVar6 = FUN_ram_40054904(uVar5,CONCAT13(*(undefined1 *)(iVar4 + 3),
                                                  CONCAT12(*(undefined1 *)(iVar4 + 2),
                                                           CONCAT11(*(undefined1 *)(iVar4 + 1),
                                                                    *(undefined1 *)
                                                                     (iVar3 + iVar1 * 4)))),
                                   auStack_40);
          *(char *)(iVar3 + iVar1 * 4) = (char)uVar6;
          *(char *)(iVar4 + 1) = (char)((uint)uVar6 >> 8);
          *(char *)(iVar4 + 2) = (char)((uint)uVar6 >> 0x10);
          *(char *)(iVar4 + 3) = (char)((uint)uVar6 >> 0x18);
        }
        iVar3 = iVar3 + iVar13;
      }
    }
    else {
      uVar5 = FUN_ram_4004ae7c(param_1[6]);
      puVar7 = (undefined4 *)*param_1;
      uVar15 = 0;
      if (0 < iVar10) {
        uVar15 = iVar10 - 1U & 0xfffffff0;
      }
      for (iVar3 = 0; iVar3 < iVar12; iVar3 = iVar3 + 1) {
        puVar8 = puVar7;
        for (iVar14 = 0; uVar9 = uVar15, iVar14 < iVar10 + -0x10; iVar14 = iVar14 + 0x10) {
          *puVar8 = uVar5;
          puVar8[1] = uVar5;
          puVar8[2] = uVar5;
          puVar8[3] = uVar5;
          puVar8[4] = uVar5;
          puVar8[5] = uVar5;
          puVar8[6] = uVar5;
          puVar8[7] = uVar5;
          puVar8[8] = uVar5;
          puVar8[9] = uVar5;
          puVar8[10] = uVar5;
          puVar8[0xb] = uVar5;
          puVar8[0xc] = uVar5;
          puVar8[0xd] = uVar5;
          puVar8[0xe] = uVar5;
          puVar8[0xf] = uVar5;
          puVar8 = puVar8 + 0x10;
        }
        for (; (int)uVar9 < iVar10; uVar9 = uVar9 + 1) {
          puVar7[uVar9] = uVar5;
        }
        puVar7 = (undefined4 *)((int)puVar7 + iVar13);
      }
    }
  }
  else if (uVar15 < 0xfd) {
    uStack_44 = FUN_ram_4004ae36(param_1[6],uVar15);
    iVar1 = *param_1;
    for (iVar4 = 0; iVar4 < iVar12; iVar4 = iVar4 + 1) {
      for (iVar2 = 0; iVar2 < iVar10; iVar2 = iVar2 + 1) {
        iVar11 = iVar1 + iVar2 * 4;
        uStack_44 = CONCAT13((char)(*(byte *)(iVar3 + iVar2) * uVar15 >> 8),(undefined3)uStack_44);
        uVar5 = FUN_ram_40054904(uStack_44,
                                 CONCAT13(*(undefined1 *)(iVar11 + 3),
                                          CONCAT12(*(undefined1 *)(iVar11 + 2),
                                                   CONCAT11(*(undefined1 *)(iVar11 + 1),
                                                            *(undefined1 *)(iVar1 + iVar2 * 4)))),
                                 auStack_40);
        *(char *)(iVar1 + iVar2 * 4) = (char)uVar5;
        *(char *)(iVar11 + 1) = (char)((uint)uVar5 >> 8);
        *(char *)(iVar11 + 2) = (char)((uint)uVar5 >> 0x10);
        *(char *)(iVar11 + 3) = (char)((uint)uVar5 >> 0x18);
      }
      iVar1 = iVar1 + iVar13;
      iVar3 = iVar3 + iVar14;
    }
  }
  else {
    uStack_44 = FUN_ram_4004ae36(param_1[6],0xff);
    iVar1 = *param_1;
    for (iVar4 = 0; iVar4 < iVar12; iVar4 = iVar4 + 1) {
      for (iVar2 = 0; iVar2 < iVar10; iVar2 = iVar2 + 1) {
        iVar11 = iVar1 + iVar2 * 4;
        uStack_44 = CONCAT13(*(undefined1 *)(iVar3 + iVar2),(undefined3)uStack_44);
        uVar5 = FUN_ram_40054904(uStack_44,
                                 CONCAT13(*(undefined1 *)(iVar11 + 3),
                                          CONCAT12(*(undefined1 *)(iVar11 + 2),
                                                   CONCAT11(*(undefined1 *)(iVar11 + 1),
                                                            *(undefined1 *)(iVar1 + iVar2 * 4)))),
                                 auStack_40);
        *(char *)(iVar1 + iVar2 * 4) = (char)uVar5;
        *(char *)(iVar11 + 1) = (char)((uint)uVar5 >> 8);
        *(char *)(iVar11 + 2) = (char)((uint)uVar5 >> 0x10);
        *(char *)(iVar11 + 3) = (char)((uint)uVar5 >> 0x18);
      }
      iVar1 = iVar1 + iVar13;
      iVar3 = iVar3 + iVar14;
    }
  }
  return;
}


