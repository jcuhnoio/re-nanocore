/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40053000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40053548.
 * REA evidence: ev_f181fa2271b6b19f0417d4f5d370bf2a9abce0409500fadfb0ee930963a65d6b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40053548(int param_1,int param_2)

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
  iVar2 = FUN_ram_40049494(&iStack_144,&iStack_154,*(undefined4 *)(param_1 + 8));
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
       iVar6 < iVar10)) goto LAB_ram_40053646;
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
LAB_ram_40053646:
  puStack_134 = (undefined1 *)0x0;
  puStack_130 = (undefined1 *)0x0;
  uVar16 = (iVar11 - iVar5) * (iVar6 - iVar9) - (iVar10 - iVar9) * (iVar7 - iVar5);
  puStack_12c = (undefined1 *)0x0;
  uStack_128 = 0;
  FUN_ram_40051fe6(auStack_e8,iVar5,iVar9,iVar11,iVar10,uVar16 >> 0x1f);
  uVar16 = ~uVar16 >> 0x1f;
  FUN_ram_40051fe6(auStack_b0,iVar5,iVar9,iVar7,iVar6);
  if (iVar6 == iVar10) {
    uVar16 = 2;
    iVar10 = iVar6;
  }
  FUN_ram_40051fe6(auStack_78,iVar11,iVar10,iVar7,iVar6,uVar16);
  iVar5 = (iStack_13c - iStack_144) + 1;
  puStack_134 = auStack_e8;
  puStack_130 = auStack_b0;
  puStack_12c = auStack_78;
  iVar6 = FUN_ram_40059bae(iVar5);
  FUN_ram_4000305c(auStack_124,&iStack_144,0x10);
  iStack_118 = iStack_120;
  FUN_ram_4000305c(auStack_ff,param_2 + 0x1d,3);
  bStack_100 = *(byte *)(param_2 + 0x1c);
  puStack_114 = auStack_124;
  uVar16 = *(uint *)(param_2 + 0x28);
  uStack_ec = 0;
  iStack_110 = 0;
  iStack_fc = iVar6;
  puStack_f4 = puStack_114;
  piVar3 = (int *)FUN_ram_400508e2(param_2 + 0x20,(iStack_14c - iStack_154) + 1,
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
      FUN_ram_40059be4(iVar6);
      FUN_ram_40051f60(auStack_78);
      FUN_ram_40051f60(auStack_e8);
      FUN_ram_40051f60(auStack_b0);
      if (piVar3 != (int *)0x0) {
        thunk_FUN_ram_40059be4(piVar3);
      }
      return;
    }
    iStack_120 = iVar2;
    iStack_118 = iVar2;
    thunk_FUN_ram_4000505c(iVar6,0xff,iVar5);
    iVar4 = FUN_ram_40051f0c(&puStack_134,iVar6,iStack_144,iVar2,iVar5);
    bStack_f8 = (byte)iVar4;
    if (uVar13 == 1) {
      iVar4 = iVar2 - iStack_150;
      FUN_ram_4000305c(auStack_ff,*piVar3 + iVar4 * 3,3);
      bStack_100 = *(byte *)(piVar3[1] + iVar4);
      if (*(byte *)(param_2 + 0x1c) < 0xfd) {
        bStack_100 = (byte)((uint)bStack_100 * (uint)*(byte *)(param_2 + 0x1c) >> 8);
      }
LAB_ram_4005384c:
      FUN_ram_400538aa(param_1,&puStack_114);
    }
    else {
      if ((uVar13 != 2) || (iVar10 == 0)) goto LAB_ram_4005384c;
      if (iVar4 == 2) {
        for (iVar4 = 0; iStack_fc = iVar6, iVar4 < iVar5; iVar4 = iVar4 + 1) {
          if (*(byte *)(iVar10 + iVar4) < 0xfd) {
            *(char *)(iVar6 + iVar4) =
                 (char)((uint)*(byte *)(iVar6 + iVar4) * (uint)*(byte *)(iVar10 + iVar4) >> 8);
          }
        }
        goto LAB_ram_4005384c;
      }
      if (iVar4 == 1) {
        bStack_f8 = (byte)((uVar16 << 5) >> 0x1d);
        iStack_fc = iVar10;
        goto LAB_ram_4005384c;
      }
      if (iVar4 != 0) goto LAB_ram_4005384c;
    }
    iVar2 = iVar2 + 1;
  } while( true );
}


/* NanoCore 1.10, address 0x400538aa.
 * REA evidence: ev_0a84c694d17ea7db03d7813208c71efe936370cdea013f138706bee61e13a0d5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400538aa(int param_1,undefined4 *param_2)

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
  iVar3 = FUN_ram_40049494(&iStack_54,*param_2,*(undefined4 *)(param_1 + 8));
  if (iVar3 == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 4);
  uStack_38 = FUN_ram_4004ca7e((*(int *)(iVar2 + 0xc) - *(int *)(iVar2 + 4)) + 1,
                               *(undefined1 *)(iVar2 + 0x14));
  iVar6 = iStack_50;
  iVar3 = iStack_54;
  if (param_2[1] == 0) {
    iStack_40 = (iStack_4c - iStack_54) + 1;
    iStack_3c = (iStack_48 - iStack_50) + 1;
    uStack_2c = CONCAT13(*(undefined1 *)(param_2 + 5),(undefined3)uStack_2c);
    FUN_ram_4000305c(&uStack_2c,(int)param_2 + 0x15,3);
    iStack_34 = param_2[6];
    if ((iStack_34 == 0) || (*(char *)(param_2 + 7) == '\x01')) {
      iStack_34 = 0;
    }
    uStack_44 = FUN_ram_4004c9f4(iVar2,iVar3 - *(int *)(iVar2 + 4),iVar6 - *(int *)(iVar2 + 8));
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
        FUN_ram_40054be4(&uStack_44);
        return;
      }
      if (bVar1 != 0xf) {
        if (bVar1 != 0x10) {
          return;
        }
        FUN_ram_400540b4(&uStack_44);
        return;
      }
      uVar5 = 3;
    }
    FUN_ram_400556b8(&uStack_44,uVar5);
    return;
  }
  iVar3 = FUN_ram_40049494(&iStack_54,&iStack_54,param_2[4]);
  if (iVar3 == 0) {
    return;
  }
  if ((param_2[8] != 0) && (iVar3 = FUN_ram_40049494(&iStack_54), iVar3 == 0)) {
    return;
  }
  uStack_24 = *(undefined1 *)(param_2 + 3);
  iStack_40 = (iStack_4c - iStack_54) + 1;
  iVar6 = param_2[1];
  iStack_3c = (iStack_48 - iStack_50) + 1;
  uStack_23 = *(undefined1 *)(param_2 + 5);
  uStack_22 = *(undefined1 *)(param_2 + 10);
  iStack_28 = param_2[2];
  iVar3 = FUN_ram_40049d8e();
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
  uStack_44 = FUN_ram_4004c9f4(iVar2,iStack_54 - *(int *)(iVar2 + 4),iStack_50 - *(int *)(iVar2 + 8)
                              );
  switch(*(char *)(iVar2 + 0x14) + -0xf) {
  case '\0':
    uVar5 = 3;
    goto LAB_ram_40053aae;
  case '\x01':
    FUN_ram_400542c8(&uStack_44);
    break;
  case '\x02':
    uVar5 = 4;
LAB_ram_40053aae:
    FUN_ram_40055872(&uStack_44,uVar5);
    break;
  case '\x03':
  case '\x05':
    FUN_ram_40054e7c(&uStack_44);
  }
  return;
}


/* NanoCore 1.10, address 0x40053abc.
 * REA evidence: ev_48597bab3aba1ab0b92b79a5178f7b289be7033878eee8edb41f9f67deb7f69b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40053abc(uint param_1,uint param_2)

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


/* NanoCore 1.10, address 0x40053b60.
 * REA evidence: ev_c52b6c91973d27ee6210b6d3ab707ddb25f5576668f09c1d66fcff6f363e8bf1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40053b60(uint param_1,uint param_2,uint *param_3)

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
      uVar1 = FUN_ram_40053abc();
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
      FUN_ram_4000305c(param_3,&uStack_24,4);
      FUN_ram_4000305c(param_3 + 1,&uStack_28,4);
      uStack_24 = CONCAT13(*(undefined1 *)((int)param_3 + 0xd),(undefined3)uStack_24);
      uVar2 = FUN_ram_40053abc(uStack_24,uStack_28);
      *(char *)((int)param_3 + 9) = (char)((uint)uVar2 >> 8);
      *(char *)(param_3 + 2) = (char)uVar2;
      *(char *)((int)param_3 + 10) = (char)((uint)uVar2 >> 0x10);
      *(char *)((int)param_3 + 0xb) = (char)param_3[3];
    }
    FUN_ram_4000305c(auStack_14,param_3 + 2,4);
    uVar1 = auStack_14[0];
  }
  auStack_14[0] = uVar1;
  return auStack_14[0];
}


/* NanoCore 1.10, address 0x40053c9a.
 * REA evidence: ev_b9cafa130e19023d4919bb6ae3d4afd4523f589f50297f9cf4b4d4e52af64885
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40053c9a(byte *param_1,uint param_2,int param_3,undefined4 param_4)

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
  uVar1 = FUN_ram_40053b60(uStack_14,*(undefined4 *)param_1,param_4);
  *param_1 = (byte)uVar1;
  param_1[1] = (byte)((uint)uVar1 >> 8);
  param_1[2] = (byte)((uint)uVar1 >> 0x10);
  param_1[3] = (byte)((uint)uVar1 >> 0x18);
  return;
}


/* NanoCore 1.10, address 0x40053db0.
 * REA evidence: ev_21334bdcb07858f61916420171d705e0574730141c425679b9bbbed68c240477
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40053db0(int param_1)

{
  thunk_FUN_ram_4000505c(param_1,0,4);
  thunk_FUN_ram_4000505c(param_1 + 4,0,4);
  thunk_FUN_ram_4000505c(param_1 + 8,0,4);
  *(undefined1 *)(param_1 + 0xc) = 0xff;
  *(undefined1 *)(param_1 + 0xd) = 0xff;
  return;
}


/* NanoCore 1.10, address 0x40053dea.
 * REA evidence: ev_1cb953378c0218a17eb34c8ed02cd304ca7beab4a239eb962df1b7e8b8b89916
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40053dea(undefined4 *param_1,int param_2)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 *__dest;
  undefined3 *__src;
  undefined4 uVar4;
  int iVar5;
  byte bVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined3 *puVar15;
  uint uVar16;
  undefined4 uStack_54;
  undefined1 auStack_50 [28];
  
  iVar10 = param_1[1];
  iVar11 = param_1[2];
  bVar2 = *(byte *)((int)param_1 + 0x21);
  uVar16 = (uint)bVar2;
  __dest = (undefined1 *)*param_1;
  iVar12 = param_1[3];
  __src = (undefined3 *)param_1[6];
  iVar13 = param_1[7];
  iVar8 = param_1[4];
  iVar14 = param_1[5];
  FUN_ram_40053db0(auStack_50);
  if (*(char *)((int)param_1 + 0x22) == '\0') {
    if (iVar8 == 0) {
      if (uVar16 < 0xfd) {
        uStack_54 = (uint)bVar2 << 0x18;
        for (iVar8 = 0; iVar8 < iVar11; iVar8 = iVar8 + 1) {
          puVar15 = __src;
          for (iVar14 = 0; iVar14 < iVar10; iVar14 = iVar14 + 1) {
            puVar7 = (undefined1 *)((int)puVar15 + 2);
            puVar1 = (undefined1 *)((int)puVar15 + 1);
            uVar3 = *(undefined1 *)puVar15;
            puVar15 = (undefined3 *)((int)puVar15 + param_2);
            uStack_54 = CONCAT31(CONCAT21(CONCAT11(uStack_54._3_1_,*puVar7),*puVar1),uVar3);
            uVar4 = FUN_ram_40053b60(uStack_54,
                                     CONCAT13(__dest[iVar14 * 4 + 3],
                                              CONCAT12(__dest[iVar14 * 4 + 2],
                                                       CONCAT11(__dest[iVar14 * 4 + 1],
                                                                __dest[iVar14 * 4]))),auStack_50);
            __dest[iVar14 * 4] = (char)uVar4;
            __dest[iVar14 * 4 + 1] = (char)((uint)uVar4 >> 8);
            __dest[iVar14 * 4 + 2] = (char)((uint)uVar4 >> 0x10);
            __dest[iVar14 * 4 + 3] = (char)((uint)uVar4 >> 0x18);
          }
          __dest = __dest + iVar12;
          __src = (undefined3 *)((int)__src + iVar13);
        }
      }
      else {
        iVar8 = 0;
        if (param_2 == 4) {
          for (iVar8 = 0; iVar8 < iVar11; iVar8 = iVar8 + 1) {
            memcpy(__dest,__src,iVar10 << 2);
            __dest = __dest + iVar12;
            __src = (undefined3 *)((int)__src + iVar13);
          }
        }
        else {
          for (; iVar8 < iVar11; iVar8 = iVar8 + 1) {
            puVar15 = __src;
            puVar7 = __dest;
            for (iVar14 = 0; iVar14 < iVar10; iVar14 = iVar14 + 1) {
              puVar7[2] = *(undefined1 *)((int)puVar15 + 2);
              puVar7[1] = *(undefined1 *)((int)puVar15 + 1);
              uVar3 = *(undefined1 *)puVar15;
              puVar7[3] = 0xff;
              *puVar7 = uVar3;
              puVar15 = (undefined3 *)((int)puVar15 + 3);
              puVar7 = puVar7 + 4;
            }
            __dest = __dest + iVar12;
            __src = (undefined3 *)((int)__src + iVar13);
          }
        }
      }
    }
    else {
      iVar5 = 0;
      if (uVar16 < 0xfd) {
        for (; iVar5 < iVar11; iVar5 = iVar5 + 1) {
          puVar15 = __src;
          for (iVar9 = 0; iVar9 < iVar10; iVar9 = iVar9 + 1) {
            uVar4 = FUN_ram_40053b60(CONCAT31(CONCAT21(CONCAT11((char)(*(byte *)(iVar8 + iVar9) *
                                                                       uVar16 >> 8),
                                                                *(undefined1 *)((int)puVar15 + 2)),
                                                       *(undefined1 *)((int)puVar15 + 1)),
                                              *(undefined1 *)puVar15),
                                     CONCAT13(__dest[iVar9 * 4 + 3],
                                              CONCAT12(__dest[iVar9 * 4 + 2],
                                                       CONCAT11(__dest[iVar9 * 4 + 1],
                                                                __dest[iVar9 * 4]))),auStack_50);
            __dest[iVar9 * 4] = (char)uVar4;
            __dest[iVar9 * 4 + 1] = (char)((uint)uVar4 >> 8);
            __dest[iVar9 * 4 + 2] = (char)((uint)uVar4 >> 0x10);
            __dest[iVar9 * 4 + 3] = (char)((uint)uVar4 >> 0x18);
            puVar15 = (undefined3 *)((int)puVar15 + param_2);
          }
          __dest = __dest + iVar12;
          __src = (undefined3 *)((int)__src + iVar13);
          iVar8 = iVar8 + iVar14;
        }
      }
      else {
        for (iVar5 = 0; iVar5 < iVar11; iVar5 = iVar5 + 1) {
          puVar15 = __src;
          for (iVar9 = 0; iVar9 < iVar10; iVar9 = iVar9 + 1) {
            puVar7 = (undefined1 *)((int)puVar15 + 2);
            puVar1 = (undefined1 *)((int)puVar15 + 1);
            uVar3 = *(undefined1 *)puVar15;
            puVar15 = (undefined3 *)((int)puVar15 + param_2);
            uStack_54 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar8 + iVar9),*puVar7),*puVar1),
                                 uVar3);
            uVar4 = FUN_ram_40053b60(uStack_54,
                                     CONCAT13(__dest[iVar9 * 4 + 3],
                                              CONCAT12(__dest[iVar9 * 4 + 2],
                                                       CONCAT11(__dest[iVar9 * 4 + 1],
                                                                __dest[iVar9 * 4]))),auStack_50);
            __dest[iVar9 * 4] = (char)uVar4;
            __dest[iVar9 * 4 + 1] = (char)((uint)uVar4 >> 8);
            __dest[iVar9 * 4 + 2] = (char)((uint)uVar4 >> 0x10);
            __dest[iVar9 * 4 + 3] = (char)((uint)uVar4 >> 0x18);
          }
          __dest = __dest + iVar12;
          __src = (undefined3 *)((int)__src + iVar13);
          iVar8 = iVar8 + iVar14;
        }
      }
    }
  }
  else {
    for (iVar5 = 0; iVar5 < iVar11; iVar5 = iVar5 + 1) {
      puVar15 = __src;
      for (iVar9 = 0; iVar9 < iVar10; iVar9 = iVar9 + 1) {
        bVar6 = bVar2;
        if (iVar8 != 0) {
          bVar6 = (byte)(*(byte *)(iVar8 + iVar9) * uVar16 >> 8);
        }
        uStack_54 = CONCAT13(bVar6,*puVar15);
        FUN_ram_40053c9a(__dest + iVar9 * 4,uStack_54,*(undefined1 *)((int)param_1 + 0x22),
                         auStack_50);
        puVar15 = (undefined3 *)((int)puVar15 + param_2);
      }
      if (iVar8 != 0) {
        iVar8 = iVar8 + iVar14;
      }
      __dest = __dest + iVar12;
      __src = (undefined3 *)((int)__src + iVar13);
    }
  }
  return;
}


