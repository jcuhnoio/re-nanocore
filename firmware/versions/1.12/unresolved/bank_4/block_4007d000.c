/* NanoCore 1.12 analysis module: unresolved/bank_4/block_4007d000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4007d834.
 * REA evidence: ev_9b1e59ccc2d4cd2442119bdbed92c0472a8f91be3c1023fcab3bf232e575e745
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4007d834(ulonglong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if (param_2 != (ulonglong *)0x0) {
    puVar3 = param_2;
    do {
      iVar2 = memset(puVar3,0,0x80);
      fence();
      puVar3 = (ulonglong *)(iVar2 + 0x80);
    } while (param_2 + 0x82b0 != puVar3);
    memset(param_2 + 0x82b0,0,0x74);
    uVar1 = DAT_ram_400a0ef0;
    fence();
    uVar4 = (ulonglong)DAT_ram_400a0ef4;
    uVar5 = (ulonglong)DAT_ram_4009f9ec;
    uVar6 = (ulonglong)DAT_ram_4009f2fc;
    uVar7 = (ulonglong)DAT_ram_40096730;
    uVar8 = (ulonglong)DAT_ram_4009f9f0;
    uVar9 = (ulonglong)DAT_ram_4009672c;
    *(undefined1 *)((int)param_2 + 0x2c) = 0;
    *(undefined **)(param_2 + 6) = &sedeleg;
    *param_2 = param_1 & 0xffffffff;
    *(undefined4 *)((int)param_2 + 4) = uVar1;
    param_2[1] = uVar4;
    *(ulonglong *)((int)param_2 + 0xc) = uVar5;
    param_2[2] = uVar6;
    *(undefined4 *)((int)param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 3) = 0;
    *(ulonglong *)((int)param_2 + 0x1c) = uVar7;
    param_2[4] = uVar8;
    *(ulonglong *)((int)param_2 + 0x24) = uVar9;
    *(undefined4 *)(param_2 + 5) = 0;
    FUN_ram_4007c9ec(param_2);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4007d8f0.
 * REA evidence: ev_c9ad857e3a0976d730331d5ec78a1b5ec25fffbc8aeefff9a13becdf98618e80
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4007d8f0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    uVar10 = *param_2;
    uVar9 = param_2[1];
    uVar8 = param_2[2];
    uVar7 = param_2[3];
    uVar1 = param_2[4];
    uVar6 = param_2[5];
    uVar5 = param_2[6];
    uVar2 = param_2[7];
    uVar3 = param_2[8];
    uVar4 = param_2[9];
    *(undefined4 *)(param_1 + 0x2c) = param_2[10];
    *(undefined4 *)(param_1 + 4) = uVar10;
    *(undefined4 *)(param_1 + 8) = uVar9;
    *(undefined4 *)(param_1 + 0xc) = uVar8;
    *(undefined4 *)(param_1 + 0x10) = uVar7;
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    *(undefined4 *)(param_1 + 0x18) = uVar6;
    *(undefined4 *)(param_1 + 0x1c) = uVar5;
    *(undefined4 *)(param_1 + 0x20) = uVar2;
    *(undefined4 *)(param_1 + 0x24) = uVar3;
    *(undefined4 *)(param_1 + 0x28) = uVar4;
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  return;
}


/* NanoCore 1.12, address 0x4007d944.
 * REA evidence: ev_c1241d01855a42daed172d283d7a46204423b7d4c277fd7c84a6995f2c80af9f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4007d944(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  ushort *puVar8;
  uint uVar9;
  
  if (param_1 == 0) {
    return;
  }
  puVar8 = (ushort *)(param_1 + 0x3e);
  iVar6 = param_1 + 0x1a70;
  do {
    if (*puVar8 != 0) {
      uVar3 = (uint)*puVar8 * 4;
      iVar2 = iVar6;
      if (0x80 < uVar3) {
        uVar9 = uVar3 - 0x81 >> 7;
        iVar2 = (uVar9 + 1) * 0x80 + iVar6;
        iVar5 = iVar6;
        do {
          iVar5 = memset(iVar5,0,0x80);
          fence();
          iVar5 = iVar5 + 0x80;
        } while (iVar5 != iVar2);
        uVar3 = (uVar3 - 0x80) + uVar9 * -0x80;
      }
      memset(iVar2,0,uVar3);
      fence();
    }
    puVar8[4] = 0;
    iVar6 = iVar6 + 0x800;
    puVar8 = puVar8 + 1;
  } while (iVar6 != param_1 + 0x3a70);
  puVar8 = (ushort *)(param_1 + 0x32);
  iVar6 = param_1 + 0x270;
  do {
    if (*puVar8 != 0) {
      uVar3 = (uint)*puVar8 * 4;
      iVar2 = iVar6;
      if (0x80 < uVar3) {
        uVar9 = uVar3 - 0x81 >> 7;
        iVar2 = (uVar9 + 1) * 0x80 + iVar6;
        iVar5 = iVar6;
        do {
          iVar5 = memset(iVar5,0,0x80);
          fence();
          iVar5 = iVar5 + 0x80;
        } while (iVar5 != iVar2);
        uVar3 = (uVar3 - 0x80) + uVar9 * -0x80;
      }
      memset(iVar2,0,uVar3);
      fence();
    }
    puVar8[3] = 0;
    iVar6 = iVar6 + 0x800;
    puVar8 = puVar8 + 1;
  } while (iVar6 != param_1 + 0x1a70);
  psVar7 = (short *)(param_1 + 0x4e);
  puVar4 = (undefined4 *)(param_1 + 0xb0);
  iVar6 = param_1 + 0x6df0;
  do {
    while (*psVar7 == 0) {
      *puVar4 = 0;
      puVar4[0x10] = 0;
      puVar4 = puVar4 + 1;
      psVar7 = psVar7 + 1;
      iVar6 = iVar6 + 0x3390;
      if ((undefined4 *)(param_1 + 0xf0) == puVar4) goto LAB_ram_4007dac4;
    }
    iVar2 = iVar6 + -0x3380;
    do {
      iVar2 = memset(iVar2,0,0x80);
      fence();
      iVar2 = iVar2 + 0x80;
    } while (iVar2 != iVar6);
    memset(iVar6,0,0x10);
    fence();
    *puVar4 = 0;
    puVar4[0x10] = 0;
    puVar4 = puVar4 + 1;
    psVar7 = psVar7 + 1;
    iVar6 = iVar6 + 0x3390;
  } while ((undefined4 *)(param_1 + 0xf0) != puVar4);
LAB_ram_4007dac4:
  *(undefined2 *)(param_1 + 0x6e) = 0;
  iVar6 = param_1 + 0x37370;
  do {
    iVar6 = memset(iVar6,0,0x80);
    fence();
    iVar6 = iVar6 + 0x80;
  } while (param_1 + 0x37ff0 != iVar6);
  *(undefined1 *)(param_1 + 0x37ff0) = 0;
  *(undefined1 *)(param_1 + 0x37ff1) = 0;
  *(undefined1 *)(param_1 + 0x37ff2) = 0;
  *(undefined1 *)(param_1 + 0x37ff3) = 0;
  fence();
  *(undefined2 *)(param_1 + 0x130) = 0;
  iVar6 = param_1 + 0x37ff4;
  do {
    iVar6 = memset(iVar6,0,0x80);
    fence();
    iVar6 = iVar6 + 0x80;
  } while (iVar6 != param_1 + 0x41574);
  memset(param_1 + 0x41574,0,0x80);
  uVar1 = DAT_ram_4009672c;
  fence();
  *(undefined2 *)(param_1 + 0x136) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x268) = uVar1;
  return;
}


/* NanoCore 1.12, address 0x4007db8c.
 * REA evidence: ev_7aa68c1f54c711533f94fa207a42dd4bdda0b2ac65b1c7275227cbc0231afde0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4007db8c(int param_1,float *param_2,float *param_3,float *param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
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
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float in_register_00000100;
  float *pfVar54;
  ulonglong *puVar55;
  ulonglong *puVar56;
  undefined2 uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  uint uVar72;
  int iVar73;
  undefined8 *puVar74;
  ushort uVar75;
  float *pfVar76;
  uint uVar77;
  uint uVar78;
  float *pfVar79;
  float fVar80;
  ushort *puVar81;
  float fVar82;
  undefined8 *puVar83;
  float *pfVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  undefined8 uVar97;
  float fVar98;
  float fVar99;
  ulonglong uVar100;
  float fVar101;
  float fVar102;
  undefined8 unaff_fs11;
  float fVar103;
  float fVar104;
  float afStack_e0 [4];
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  if ((((param_1 != 0) && (param_2 != (float *)0x0)) && (param_3 != (float *)0x0)) &&
     (param_4 != (float *)0x0)) {
    uStack_a0 = (undefined4)unaff_fs11;
    uStack_9c = (undefined4)((ulonglong)unaff_fs11 >> 0x20);
    if (*(char *)(param_1 + 0x30) != '\0') {
      FUN_ram_4007c9ec();
    }
    fVar53 = DAT_ram_400a0ef8;
    fVar52 = DAT_ram_400a0a00;
    fVar51 = DAT_ram_4009f080;
    fVar50 = DAT_ram_4009672c;
    if (param_5 != 0) {
      pfVar76 = param_2 + param_5;
      do {
        while( true ) {
          uVar77 = (uint)*(ushort *)(param_1 + 0x138);
          fVar98 = *param_2;
          if (uVar77 != 0) {
            uVar65 = (uint)*(ushort *)(param_1 + 0x136);
            if (uVar65 < 0x2580) {
              uVar77 = uVar65 - uVar77;
              uVar57 = (undefined2)(uVar65 + 1);
              if ((int)uVar77 < 0) {
                uVar77 = uVar77 + 0x2580;
              }
              uVar97 = *(undefined8 *)(param_1 + ((uVar77 & 0xffff) + 0xdffc) * 4 + 4);
              *(ulonglong *)(param_1 + (uVar65 + 0xdffc) * 4 + 4) = (ulonglong)(uint)fVar98;
              fVar98 = (float)uVar97;
              if ((uVar65 + 1 & 0xffff) == 0x2580) {
                uVar57 = 0;
              }
            }
            else {
              uVar97 = *(undefined8 *)(param_1 + ((0x2580 - uVar77 & 0xffff) + 0xdffc) * 4 + 4);
              *(float *)(param_1 + 0x37ff4) = fVar98;
              fVar98 = (float)uVar97;
              uVar57 = 1;
            }
            *(undefined2 *)(param_1 + 0x136) = uVar57;
          }
          uVar75 = *(ushort *)(param_1 + 0x32);
          fVar96 = (fVar50 - *(float *)(param_1 + 0x140)) * fVar98 +
                   *(float *)(param_1 + 0x140) * *(float *)(param_1 + 0x13c);
          pfVar54 = (float *)(param_1 + 0x270 + (uint)*(ushort *)(param_1 + 0x38) * 4);
          uVar77 = *(ushort *)(param_1 + 0x38) + 1;
          *(float *)(param_1 + 0x13c) = fVar96;
          fVar96 = *(float *)(param_1 + 0x144) * (fVar98 - fVar96) + fVar96;
          uVar1 = *(ushort *)(param_1 + 0x3c);
          pfVar84 = (float *)(param_1 + 0xa70 + (uint)*(ushort *)(param_1 + 0x3a) * 4);
          fVar98 = fVar96 * fVar52 + *pfVar54;
          uVar2 = *(ushort *)(param_1 + 0x34);
          uVar3 = *(ushort *)(param_1 + 0x36);
          pfVar79 = (float *)(param_1 + 0x1270 + (uint)uVar1 * 4);
          uVar78 = *(ushort *)(param_1 + 0x3a) + 1;
          uVar4 = *(ushort *)(param_1 + 0x46);
          *pfVar54 = fVar98 * fVar51 + fVar96;
          fVar96 = fVar98 * fVar52 + *pfVar84;
          *(ushort *)(param_1 + 0x38) =
               (ushort)(uVar77 * 0x10000 >> 0x10) & -(ushort)((uVar77 & 0xffff) < (uint)uVar75);
          puVar55 = (ulonglong *)(param_1 + 0x1a70 + (uint)uVar4 * 4);
          uVar77 = uVar1 + 1;
          uVar75 = *(ushort *)(param_1 + 0x48);
          uVar1 = *(ushort *)(param_1 + 0x3e);
          puVar56 = (ulonglong *)(param_1 + 0x2270 + (uint)uVar75 * 4);
          uVar65 = uVar4 + 1;
          uVar4 = *(ushort *)(param_1 + 0x40);
          *pfVar84 = fVar96 * fVar51 + fVar98;
          fVar98 = *pfVar79;
          *(ushort *)(param_1 + 0x3a) =
               (ushort)(uVar78 * 0x10000 >> 0x10) & -(ushort)((uVar78 & 0xffff) < (uint)uVar2);
          uVar78 = uVar75 + 1;
          fVar98 = fVar96 * fVar52 + fVar98;
          uVar75 = *(ushort *)(param_1 + 0x42);
          *pfVar79 = fVar98 * fVar51 + fVar96;
          uVar100 = *puVar55;
          *(ushort *)(param_1 + 0x3c) =
               (ushort)(uVar77 * 0x10000 >> 0x10) & -(ushort)((uVar77 & 0xffff) < (uint)uVar3);
          fVar96 = -(*(float *)(param_1 + 0x250) * fVar98) + (float)uVar100;
          *puVar55 = (ulonglong)(uint)(*(float *)(param_1 + 0x250) * fVar96 + fVar98);
          uVar100 = *puVar56;
          *(ushort *)(param_1 + 0x46) =
               (ushort)(uVar65 * 0x10000 >> 0x10) & -(ushort)((uVar65 & 0xffff) < (uint)uVar1);
          uVar1 = *(ushort *)(param_1 + 0x4a);
          fVar98 = -(*(float *)(param_1 + 0x250) * fVar96) + (float)uVar100;
          uVar2 = *(ushort *)(param_1 + 0x44);
          *puVar56 = (ulonglong)(uint)(*(float *)(param_1 + 0x250) * fVar98 + fVar96);
          *(ushort *)(param_1 + 0x48) =
               (ushort)(uVar78 * 0x10000 >> 0x10) & -(ushort)((uVar78 & 0xffff) < (uint)uVar4);
          puVar55 = (ulonglong *)(param_1 + 0x2a70 + (uint)uVar1 * 4);
          fVar96 = -(*(float *)(param_1 + 0x250) * fVar98) + (float)*puVar55;
          uVar77 = uVar1 + 1;
          pfVar54 = (float *)(param_1 + 0x3270 + (uint)*(ushort *)(param_1 + 0x4c) * 4);
          uVar65 = *(ushort *)(param_1 + 0x4c) + 1;
          *puVar55 = (ulonglong)(uint)(*(float *)(param_1 + 0x250) * fVar96 + fVar98);
          fVar98 = *pfVar54;
          *(ushort *)(param_1 + 0x4a) =
               (ushort)(uVar77 * 0x10000 >> 0x10) & -(ushort)((uVar77 & 0xffff) < (uint)uVar75);
          fVar98 = -(*(float *)(param_1 + 0x250) * fVar96) + fVar98;
          *(ulonglong *)pfVar54 = (ulonglong)(uint)(*(float *)(param_1 + 0x250) * fVar98 + fVar96);
          *(ushort *)(param_1 + 0x4c) =
               (ushort)(uVar65 * 0x10000 >> 0x10) & -(ushort)((uVar65 & 0xffff) < (uint)uVar2);
          if (*(char *)(param_1 + 0x14c) == '\0') {
            uVar77 = (uint)*(ushort *)(param_1 + 0x6e);
            uVar65 = uVar77 - *(ushort *)(param_1 + 0x4e);
            if ((int)uVar65 < 0) {
              uVar65 = uVar65 + 0xce4;
            }
            uVar78 = uVar77 - *(ushort *)(param_1 + 0x50);
            if ((int)uVar78 < 0) {
              uVar78 = uVar78 + 0xce4;
            }
            uVar58 = uVar77 - *(ushort *)(param_1 + 0x52);
            if ((int)uVar58 < 0) {
              uVar58 = uVar58 + 0xce4;
            }
            uVar66 = uVar77 - *(ushort *)(param_1 + 0x54);
            if ((int)uVar66 < 0) {
              uVar66 = uVar66 + 0xce4;
            }
            uVar59 = uVar77 - *(ushort *)(param_1 + 0x56);
            if ((int)uVar59 < 0) {
              uVar59 = uVar59 + 0xce4;
            }
            uVar67 = uVar77 - *(ushort *)(param_1 + 0x58);
            if ((int)uVar67 < 0) {
              uVar67 = uVar67 + 0xce4;
            }
            uVar60 = uVar77 - *(ushort *)(param_1 + 0x5a);
            if ((int)uVar60 < 0) {
              uVar60 = uVar60 + 0xce4;
            }
            uVar68 = uVar77 - *(ushort *)(param_1 + 0x5c);
            if ((int)uVar68 < 0) {
              uVar68 = uVar68 + 0xce4;
            }
            uVar61 = uVar77 - *(ushort *)(param_1 + 0x5e);
            if ((int)uVar61 < 0) {
              uVar61 = uVar61 + 0xce4;
            }
            uVar69 = uVar77 - *(ushort *)(param_1 + 0x60);
            if ((int)uVar69 < 0) {
              uVar69 = uVar69 + 0xce4;
            }
            uVar62 = uVar77 - *(ushort *)(param_1 + 0x62);
            if ((int)uVar62 < 0) {
              uVar62 = uVar62 + 0xce4;
            }
            uVar70 = uVar77 - *(ushort *)(param_1 + 100);
            if ((int)uVar70 < 0) {
              uVar70 = uVar70 + 0xce4;
            }
            uVar63 = uVar77 - *(ushort *)(param_1 + 0x66);
            if ((int)uVar63 < 0) {
              uVar63 = uVar63 + 0xce4;
            }
            uVar71 = uVar77 - *(ushort *)(param_1 + 0x68);
            if ((int)uVar71 < 0) {
              uVar71 = uVar71 + 0xce4;
            }
            uVar64 = uVar77 - *(ushort *)(param_1 + 0x6a);
            if ((int)uVar64 < 0) {
              uVar64 = uVar64 + 0xce4;
            }
            uVar72 = uVar77 - *(ushort *)(param_1 + 0x6c);
            if ((int)uVar72 < 0) {
              uVar72 = uVar72 + 0xce4;
            }
            fVar96 = (float)*(undefined8 *)(param_1 + 0x3a70 + (uVar65 & 0xffff) * 4);
            fVar92 = (float)*(undefined8 *)(param_1 + 0x6e00 + (uVar78 & 0xffff) * 4);
            fVar86 = *(float *)(param_1 + 0xa190 + (uVar58 & 0xffff) * 4);
            fVar91 = *(float *)(param_1 + 0xd520 + (uVar66 & 0xffff) * 4);
            fVar93 = (float)*(undefined8 *)(param_1 + 0x108b0 + (uVar59 & 0xffff) * 4);
            fVar103 = *(float *)(param_1 + 0x13c40 + (uVar67 & 0xffff) * 4);
            fVar88 = *(float *)(param_1 + 0x16fd0 + (uVar60 & 0xffff) * 4);
            fVar90 = *(float *)(param_1 + 0x1a360 + (uVar68 & 0xffff) * 4);
            fVar95 = (float)*(undefined8 *)(param_1 + 0x1d6f0 + (uVar61 & 0xffff) * 4);
            fVar102 = *(float *)(param_1 + 0x20a80 + (uVar69 & 0xffff) * 4);
            fVar87 = *(float *)(param_1 + 0x23e10 + (uVar62 & 0xffff) * 4);
            fVar89 = *(float *)(param_1 + 0x271a0 + (uVar70 & 0xffff) * 4);
            fVar94 = (float)*(undefined8 *)(param_1 + 0x2a530 + (uVar63 & 0xffff) * 4);
            fVar104 = *(float *)(param_1 + 0x2d8c0 + (uVar71 & 0xffff) * 4);
            fVar85 = *(float *)(param_1 + 0x30c50 + (uVar64 & 0xffff) * 4);
            fVar101 = *(float *)(param_1 + 0x33fe0 + (uVar72 & 0xffff) * 4);
          }
          else {
            uVar75 = *(short *)(param_1 + 0x14e) + 1;
            if (0x3ff < uVar75) {
              *(undefined2 *)(param_1 + 0x14e) = 0;
            }
            else {
              *(ushort *)(param_1 + 0x14e) = uVar75;
            }
            pfVar79 = (float *)(param_1 + 0x150);
            puVar83 = (undefined8 *)(param_1 + 0x3a70);
            puVar81 = (ushort *)(param_1 + 0x4e);
            pfVar54 = afStack_e0;
            do {
              fVar96 = *pfVar79;
              fVar92 = *(float *)(param_1 + 0x148);
              fVar86 = fVar96 * pfVar79[0x30] + pfVar79[0x10] * pfVar79[0x20];
              fVar91 = pfVar79[0x10] * pfVar79[0x30] - fVar96 * pfVar79[0x20];
              if (0x3ff < uVar75) {
                fVar93 = fVar86 * fVar86 + fVar91 * fVar91;
                if (0.0 < fVar93 != 0) {
                  if ((0.0 < fVar93) < 0x100 && fVar93 < 0.0) {
                    fVar93 = (float)FUN_ram_40000e74();
                  }
                  else {
                    fVar93 = SQRT(fVar93);
                  }
                  fVar86 = fVar86 * (fVar50 / fVar93);
                  fVar91 = fVar91 * (fVar50 / fVar93);
                }
              }
              uVar1 = *puVar81;
              uVar77 = (uint)*(ushort *)(param_1 + 0x6e);
              *pfVar79 = fVar86;
              pfVar79[0x10] = fVar91;
              for (fVar96 = (float)uVar77 - ((float)uVar1 + fVar96 * fVar92); fVar96 < 0.0;
                  fVar96 = fVar96 + fVar53) {
              }
              for (; fVar53 <= fVar96; fVar96 = fVar96 - fVar53) {
              }
              uVar65 = (uint)fVar96;
              puVar74 = (undefined8 *)((int)puVar83 + (uVar65 + 1 & 0xffff) * 4);
              if (0xce3 < (int)(uVar65 + 1)) {
                puVar74 = puVar83;
              }
              fVar92 = (float)*(undefined8 *)((int)puVar83 + (uVar65 & 0xffff) * 4);
              pfVar79 = pfVar79 + 1;
              puVar83 = puVar83 + 0x672;
              puVar81 = puVar81 + 1;
              *pfVar54 = (fVar96 - (float)(int)uVar65) * ((float)*puVar74 - fVar92) + fVar92;
              pfVar54 = pfVar54 + 1;
              fVar96 = afStack_e0[0];
              fVar92 = afStack_e0[1];
              fVar86 = afStack_e0[2];
              fVar91 = afStack_e0[3];
              fVar93 = fStack_d0;
              fVar103 = fStack_cc;
              fVar88 = fStack_c8;
              fVar90 = fStack_c4;
              fVar95 = fStack_c0;
              fVar102 = fStack_bc;
              fVar87 = fStack_b8;
              fVar89 = fStack_b4;
              fVar94 = fStack_b0;
              fVar104 = fStack_ac;
              fVar85 = fStack_a8;
              fVar101 = fStack_a4;
            } while (pfVar79 != (float *)(param_1 + 400));
          }
          fVar38 = fVar96 - fVar92;
          fVar96 = fVar96 + fVar92;
          fVar92 = *(float *)(param_1 + 0x264);
          fVar99 = (((((((((((fVar96 - fVar86) - fVar91) + fVar93 + fVar103) - fVar88) - fVar90) +
                         fVar95 + fVar102) - fVar87) - fVar89) + fVar94 + fVar104) - fVar85) -
                   fVar101) * fVar92;
          uVar100 = (ulonglong)(uint)fVar99;
          if ((*(ushort *)(param_1 + 0x132) != 0) &&
             (uVar65 = (uint)*(ushort *)(param_1 + 0x134), uVar65 != 0)) {
            uVar78 = (uint)*(ushort *)(param_1 + 0x130);
            uVar58 = uVar78 - *(ushort *)(param_1 + 0x132);
            if ((int)uVar58 < 0) {
              uVar58 = uVar58 + uVar65;
            }
            fVar99 = *(float *)(param_1 + ((uVar58 & 0xffff) + 0xdcdc) * 4);
            *(ulonglong *)(param_1 + (uVar78 + 0xdcdc) * 4) = uVar100;
            *(ushort *)(param_1 + 0x130) =
                 (ushort)((uVar78 + 1) * 0x10000 >> 0x10) &
                 -(ushort)((uVar78 + 1 & 0xffff) < uVar65);
          }
          fVar5 = fVar95 + fVar102 + fVar87 + fVar89;
          fVar6 = fVar96 + fVar86 + fVar91;
          fVar7 = (fVar95 - fVar102) + (fVar87 - fVar89);
          fVar96 = fVar96 - (fVar86 + fVar91);
          fVar39 = (fVar95 + fVar102) - (fVar87 + fVar89);
          fVar8 = fVar93 + fVar103 + fVar88 + fVar90;
          fVar9 = fVar94 + fVar104 + fVar85 + fVar101;
          fVar40 = (fVar93 + fVar103) - (fVar88 + fVar90);
          fVar41 = (fVar94 + fVar104) - (fVar85 + fVar101);
          fVar42 = (fVar95 - fVar102) - (fVar87 - fVar89);
          fVar10 = (fVar94 - fVar104) + (fVar85 - fVar101);
          fVar43 = (fVar94 - fVar104) - (fVar85 - fVar101);
          fVar11 = fVar38 + (fVar86 - fVar91);
          fVar44 = fVar38 - (fVar86 - fVar91);
          fVar12 = (fVar93 - fVar103) + (fVar88 - fVar90);
          fVar45 = (fVar93 - fVar103) - (fVar88 - fVar90);
          fVar13 = fVar96 + fVar40;
          fVar98 = fVar92 * fVar98;
          fVar96 = fVar96 - fVar40;
          fVar40 = fVar42 + fVar43;
          fVar42 = fVar42 - fVar43;
          fVar15 = *(float *)(param_1 + 0x254);
          fVar43 = fVar11 + fVar12;
          fVar14 = fVar44 + fVar45;
          fVar11 = fVar11 - fVar12;
          fVar44 = fVar44 - fVar45;
          fVar12 = fVar5 + fVar9;
          fVar5 = fVar5 - fVar9;
          fVar9 = fVar7 + fVar10;
          fVar7 = fVar7 - fVar10;
          fVar10 = fVar39 + fVar41;
          fVar39 = fVar39 - fVar41;
          fVar45 = *(float *)(param_1 + 0x74);
          fVar41 = fVar6 + fVar8;
          fVar16 = *(float *)(param_1 + 0x8c);
          fVar6 = fVar6 - fVar8;
          fVar17 = *(float *)(param_1 + 0x78);
          fVar18 = *(float *)(param_1 + 0x7c);
          fVar19 = *(float *)(param_1 + 0x80);
          fVar20 = *(float *)(param_1 + 0x25c);
          fVar21 = *(float *)(param_1 + 0x90);
          fVar8 = fVar43 + fVar9;
          fVar43 = fVar43 - fVar9;
          fVar9 = fVar41 + fVar12;
          fVar46 = fVar14 - fVar40;
          fVar41 = fVar41 - fVar12;
          fVar14 = fVar14 + fVar40;
          fVar29 = fVar15 * *(float *)(param_1 + 0xb4);
          fVar40 = *(float *)(param_1 + 0x84);
          fVar22 = *(float *)(param_1 + 0x88);
          fVar47 = fVar13 - fVar10;
          fVar13 = fVar13 + fVar10;
          fVar30 = fVar15 * *(float *)(param_1 + 0xb8);
          fVar23 = *(float *)(param_1 + 0x94);
          fVar24 = *(float *)(param_1 + 0x98);
          fVar82 = *(float *)(param_1 + 0x9c);
          fVar80 = *(float *)(param_1 + 0xa0);
          fVar25 = *(float *)(param_1 + 0xa4);
          fVar26 = *(float *)(param_1 + 0xa8);
          fVar10 = fVar6 + fVar5;
          fVar12 = fVar11 + fVar7;
          fVar6 = fVar6 - fVar5;
          fVar11 = fVar11 - fVar7;
          fVar5 = fVar96 + fVar39;
          fVar96 = fVar96 - fVar39;
          fVar7 = fVar44 + fVar42;
          fVar44 = fVar44 - fVar42;
          fVar39 = fVar15 * *(float *)(param_1 + 0xbc);
          fVar48 = fVar50 - fVar15;
          fVar31 = fVar15 * *(float *)(param_1 + 0xc0);
          fVar32 = fVar15 * *(float *)(param_1 + 0xc4);
          fVar33 = fVar15 * *(float *)(param_1 + 200);
          fVar34 = fVar15 * *(float *)(param_1 + 0xcc);
          fVar35 = fVar15 * *(float *)(param_1 + 0xd0);
          fVar36 = fVar15 * *(float *)(param_1 + 0xd4);
          fVar37 = fVar15 * *(float *)(param_1 + 0xd8);
          fVar15 = fVar15 * *(float *)(param_1 + 0xec);
          fVar42 = *(float *)(param_1 + 0xac);
          if (fVar20 <= 0.0) {
            fVar29 = fVar48 * fVar8 + fVar29;
            fVar8 = fVar48 * fVar9 + in_register_00000100;
            fVar39 = fVar48 * fVar14 + fVar39;
            fVar30 = fVar48 * fVar13 + fVar30;
            iVar73 = param_1 + uVar77 * 4;
            *(float *)(param_1 + 0xb0) = fVar8;
            *(float *)(iVar73 + 0x3a70) = fVar8 * *(float *)(param_1 + 0x70) + fVar98;
            *(float *)(param_1 + 0xb4) = fVar29;
            fVar31 = fVar48 * fVar10 + fVar31;
            *(float *)(iVar73 + 0x6e00) = fVar29 * fVar45 + fVar98;
            fVar32 = fVar48 * fVar12 + fVar32;
            *(float *)(param_1 + 0xb8) = fVar30;
            *(float *)(iVar73 + 0xa190) = fVar30 * fVar17 + fVar98;
            fVar33 = fVar48 * fVar5 + fVar33;
            *(float *)(param_1 + 0xbc) = fVar39;
            *(float *)(iVar73 + 0xd520) = fVar39 * fVar18 + fVar98;
            fVar34 = fVar48 * fVar7 + fVar34;
            *(float *)(param_1 + 0xc0) = fVar31;
            *(float *)(iVar73 + 0x108b0) = fVar31 * fVar19 + fVar98;
            fVar35 = fVar48 * fVar41 + fVar35;
            *(float *)(param_1 + 0xc4) = fVar32;
            *(float *)(iVar73 + 0x13c40) = fVar32 * fVar40 + fVar98;
            fVar36 = fVar48 * fVar43 + fVar36;
            *(float *)(param_1 + 200) = fVar33;
            *(float *)(iVar73 + 0x16fd0) = fVar33 * fVar22 + fVar98;
            fVar37 = fVar48 * fVar47 + fVar37;
            *(float *)(param_1 + 0xcc) = fVar34;
            *(float *)(iVar73 + 0x1a360) = fVar34 * fVar16 + fVar98;
            *(float *)(param_1 + 0xd0) = fVar35;
            fVar5 = fVar48 * fVar46 + in_register_00000100;
            *(float *)(iVar73 + 0x1d6f0) = fVar35 * fVar21 + fVar98;
            *(float *)(param_1 + 0xd4) = fVar36;
            *(float *)(iVar73 + 0x20a80) = fVar36 * fVar23 + fVar98;
            fVar6 = fVar48 * fVar6 + in_register_00000100;
            fVar7 = fVar48 * fVar11 + in_register_00000100;
            fVar96 = fVar48 * fVar96 + in_register_00000100;
            *(float *)(param_1 + 0xd8) = fVar37;
            *(float *)(iVar73 + 0x23e10) = fVar37 * fVar24 + fVar98;
            fVar15 = fVar48 * fVar44 + fVar15;
            *(float *)(param_1 + 0xdc) = fVar5;
            *(float *)(iVar73 + 0x271a0) = fVar5 * fVar82 + fVar98;
            *(float *)(param_1 + 0xe0) = fVar6;
            *(float *)(iVar73 + 0x2a530) = fVar6 * fVar80 + fVar98;
            *(float *)(param_1 + 0xe4) = fVar7;
            *(float *)(iVar73 + 0x2d8c0) = fVar7 * fVar25 + fVar98;
            *(float *)(param_1 + 0xe8) = fVar96;
            *(float *)(iVar73 + 0x30c50) = fVar96 * fVar26 + fVar98;
            *(float *)(param_1 + 0xec) = fVar15;
            *(float *)(iVar73 + 0x33fe0) = fVar15 * fVar42 + fVar98;
          }
          else {
            fVar27 = *(float *)(param_1 + 600);
            fVar28 = *(float *)(param_1 + 0xf0);
            iVar73 = param_1 + uVar77 * 4;
            fVar49 = fVar50 - fVar27;
            *(float *)(param_1 + 0xf0) = in_register_00000100;
            fVar9 = fVar48 * (-(fVar20 * (fVar49 * fVar9 + fVar27 * fVar28)) + fVar9) +
                    in_register_00000100;
            *(float *)(param_1 + 0xb0) = fVar9;
            *(float *)(iVar73 + 0x3a70) = fVar9 * *(float *)(param_1 + 0x70) + fVar98;
            fVar9 = fVar49 * fVar8 + fVar27 * *(float *)(param_1 + 0xf4);
            *(float *)(param_1 + 0xf4) = fVar9;
            fVar29 = fVar48 * (-(fVar20 * fVar9) + fVar8) + fVar29;
            *(float *)(param_1 + 0xb4) = fVar29;
            *(float *)(iVar73 + 0x6e00) = fVar29 * fVar45 + fVar98;
            fVar8 = fVar49 * fVar13 + fVar27 * *(float *)(param_1 + 0xf8);
            *(float *)(param_1 + 0xf8) = fVar8;
            fVar30 = fVar48 * (-(fVar20 * fVar8) + fVar13) + fVar30;
            *(float *)(param_1 + 0xb8) = fVar30;
            *(float *)(iVar73 + 0xa190) = fVar30 * fVar17 + fVar98;
            fVar8 = fVar49 * fVar14 + fVar27 * *(float *)(param_1 + 0xfc);
            *(float *)(param_1 + 0xfc) = fVar8;
            fVar39 = fVar48 * (-(fVar20 * fVar8) + fVar14) + fVar39;
            *(float *)(param_1 + 0xbc) = fVar39;
            *(float *)(iVar73 + 0xd520) = fVar39 * fVar18 + fVar98;
            fVar8 = fVar49 * fVar10 + fVar27 * *(float *)(param_1 + 0x100);
            *(float *)(param_1 + 0x100) = fVar8;
            fVar31 = fVar48 * (-(fVar20 * fVar8) + fVar10) + fVar31;
            *(float *)(param_1 + 0xc0) = fVar31;
            *(float *)(iVar73 + 0x108b0) = fVar31 * fVar19 + fVar98;
            fVar8 = fVar49 * fVar12 + fVar27 * *(float *)(param_1 + 0x104);
            *(float *)(param_1 + 0x104) = fVar8;
            fVar32 = fVar48 * (-(fVar20 * fVar8) + fVar12) + fVar32;
            *(float *)(param_1 + 0xc4) = fVar32;
            *(float *)(iVar73 + 0x13c40) = fVar32 * fVar40 + fVar98;
            fVar8 = fVar49 * fVar5 + fVar27 * *(float *)(param_1 + 0x108);
            *(float *)(param_1 + 0x108) = fVar8;
            fVar33 = fVar48 * (-(fVar20 * fVar8) + fVar5) + fVar33;
            *(float *)(param_1 + 200) = fVar33;
            *(float *)(iVar73 + 0x16fd0) = fVar33 * fVar22 + fVar98;
            fVar5 = fVar49 * fVar7 + fVar27 * *(float *)(param_1 + 0x10c);
            *(float *)(param_1 + 0x10c) = fVar5;
            fVar34 = fVar48 * (-(fVar20 * fVar5) + fVar7) + fVar34;
            *(float *)(param_1 + 0xcc) = fVar34;
            *(float *)(iVar73 + 0x1a360) = fVar34 * fVar16 + fVar98;
            fVar5 = fVar49 * fVar41 + fVar27 * *(float *)(param_1 + 0x110);
            *(float *)(param_1 + 0x110) = fVar5;
            fVar35 = fVar48 * (-(fVar20 * fVar5) + fVar41) + fVar35;
            *(float *)(param_1 + 0xd0) = fVar35;
            *(float *)(iVar73 + 0x1d6f0) = fVar35 * fVar21 + fVar98;
            fVar5 = fVar49 * fVar43 + fVar27 * *(float *)(param_1 + 0x114);
            *(float *)(param_1 + 0x114) = fVar5;
            fVar36 = fVar48 * (-(fVar20 * fVar5) + fVar43) + fVar36;
            *(float *)(param_1 + 0xd4) = fVar36;
            *(float *)(iVar73 + 0x20a80) = fVar36 * fVar23 + fVar98;
            fVar5 = fVar49 * fVar47 + fVar27 * *(float *)(param_1 + 0x118);
            *(float *)(param_1 + 0x118) = fVar5;
            fVar37 = fVar48 * (-(fVar20 * fVar5) + fVar47) + fVar37;
            *(float *)(param_1 + 0xd8) = fVar37;
            *(float *)(iVar73 + 0x23e10) = fVar37 * fVar24 + fVar98;
            fVar5 = fVar49 * fVar46 + fVar27 * *(float *)(param_1 + 0x11c);
            *(float *)(param_1 + 0x11c) = fVar5;
            fVar5 = fVar48 * (-(fVar20 * fVar5) + fVar46) + in_register_00000100;
            *(float *)(param_1 + 0xdc) = fVar5;
            *(float *)(iVar73 + 0x271a0) = fVar5 * fVar82 + fVar98;
            fVar5 = fVar49 * fVar6 + fVar27 * *(float *)(param_1 + 0x120);
            *(float *)(param_1 + 0x120) = fVar5;
            fVar5 = fVar48 * (-(fVar20 * fVar5) + fVar6) + in_register_00000100;
            *(float *)(param_1 + 0xe0) = fVar5;
            *(float *)(iVar73 + 0x2a530) = fVar5 * fVar80 + fVar98;
            fVar5 = fVar49 * fVar11 + fVar27 * *(float *)(param_1 + 0x124);
            *(float *)(param_1 + 0x124) = fVar5;
            fVar5 = fVar48 * (-(fVar20 * fVar5) + fVar11) + in_register_00000100;
            *(float *)(param_1 + 0xe4) = fVar5;
            *(float *)(iVar73 + 0x2d8c0) = fVar5 * fVar25 + fVar98;
            fVar5 = fVar49 * fVar96 + fVar27 * *(float *)(param_1 + 0x128);
            *(float *)(param_1 + 0x128) = fVar5;
            fVar96 = fVar48 * (-(fVar20 * fVar5) + fVar96) + in_register_00000100;
            *(float *)(param_1 + 0xe8) = fVar96;
            *(float *)(iVar73 + 0x30c50) = fVar96 * fVar26 + fVar98;
            fVar96 = fVar49 * fVar44 + fVar27 * *(float *)(param_1 + 300);
            *(float *)(param_1 + 300) = fVar96;
            fVar15 = fVar48 * (-(fVar20 * fVar96) + fVar44) + fVar15;
            *(float *)(param_1 + 0xec) = fVar15;
            *(float *)(iVar73 + 0x33fe0) = fVar15 * fVar42 + fVar98;
          }
          fVar99 = *(float *)(param_1 + 0x260) * fVar99;
          fVar96 = ((((((((((((((fVar38 + fVar86) - fVar91) + fVar93) - fVar103) + fVar88) - fVar90)
                          + fVar95) - fVar102) + fVar87) - fVar89) + fVar94) - fVar104) + fVar85) -
                   fVar101) * fVar92 * *(float *)(param_1 + 0x260);
          *(ushort *)(param_1 + 0x6e) = (ushort)(uVar77 + 1) & (0xce3 < (uVar77 + 1 & 0xffff)) - 1;
          fVar92 = (float)FUN_ram_40000844(ABS(fVar96),ABS(fVar99));
          fVar98 = fVar50;
          if ((float)DAT_ram_400a0efc < fVar92) {
            fVar98 = (float)DAT_ram_400a0efc / fVar92;
          }
          if (fVar98 < *(float *)(param_1 + 0x268)) break;
          param_2 = param_2 + 1;
          fVar98 = *(float *)(param_1 + 0x268) * *(float *)(param_1 + 0x26c) +
                   (fVar50 - *(float *)(param_1 + 0x26c)) * fVar98;
          *(float *)(param_1 + 0x268) = fVar98;
          *param_3 = fVar96 * fVar98;
          *param_4 = fVar99 * fVar98;
          param_4 = param_4 + 1;
          param_3 = param_3 + 1;
          if (param_2 == pfVar76) {
            return;
          }
        }
        *(float *)(param_1 + 0x268) = fVar98;
        param_2 = param_2 + 1;
        *param_3 = fVar96 * fVar98;
        *param_4 = fVar99 * fVar98;
        param_3 = param_3 + 1;
        param_4 = param_4 + 1;
      } while (pfVar76 != param_2);
    }
    return;
  }
  return;
}


