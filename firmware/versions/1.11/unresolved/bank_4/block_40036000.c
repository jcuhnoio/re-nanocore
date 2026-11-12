/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40036000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x400361c8.
 * REA evidence: ev_4d96da3c359ca9e5353df5c4cdf254b042cd82ede7a2198d9e012e4b86a609de
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400361c8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                    undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_ram_40005656(0x74);
  iVar1 = 5;
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x69) = param_4;
    *(undefined4 *)(iVar2 + 0x6c) = param_5;
    *(undefined4 *)(iVar2 + 0x70) = param_6;
    iVar1 = FUN_ram_40042838(iVar2,param_2,param_1,0);
    if (iVar1 != 0) {
      FUN_ram_400056b4(iVar2);
    }
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x4003621c.
 * REA evidence: ev_b86e82eca5f702108e284fd3ba9ac6b16e2c59c394fb426a639b2298649ff8b9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003621c(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint auStack_14 [2];
  
  FUN_ram_40006c3a();
  iVar2 = FUN_ram_40006f3e(auStack_14);
  if (iVar2 != 0) {
    iVar2 = iVar2 + 4;
    for (uVar1 = 0; uVar1 < auStack_14[0]; uVar1 = uVar1 + 1) {
      iVar3 = FUN_ram_400071b0(iVar2);
      if (iVar3 == 0) {
        return 0xffffffff;
      }
      iVar3 = FUN_ram_40007110(iVar2);
      iVar2 = iVar2 + 0x40;
      if (iVar3 == 0) {
        return 0xffffffff;
      }
    }
  }
  return 0;
}


/* NanoCore 1.11, address 0x40036264.
 * REA evidence: ev_a9d9592c3519e43419300da710585ee19cc3dca618de4dac59c15642222cd86b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40036264(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_28 = 0x804;
  uStack_24 = 50000000;
  iVar1 = FUN_ram_400361c8(s_qspi0_ram_40097868,s_qspi01_ram_40097888,0,1,0,0);
  uVar2 = 0;
  if (-1 < iVar1) {
    uStack_18 = 0x800000;
    uStack_14 = 0x100;
    uStack_20 = 0x804;
    uStack_1c = 50000000;
    iVar1 = FUN_ram_40042d9c(s_norflash0_ram_400940e4,s_qspi01_ram_40097888,&uStack_28,&uStack_20);
    uVar2 = (uint)(iVar1 != 0);
  }
  return 1 - uVar2;
}


/* NanoCore 1.11, address 0x400362da.
 * REA evidence: ev_e0d54a8b87488bfdb305f1a49bb98b9c3e46fde7856d48e5dbe5ac6d795de303
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400362da(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4003e0c2();
  return -(uint)(iVar1 != 0);
}


/* NanoCore 1.11, address 0x400362f0.
 * REA evidence: ev_6f609e86a5be937ad249a6bb07a3c71562ef2ee60c82f69bf2a1853e1ead204b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40036302) */

int FUN_ram_400362f0(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 + (param_1 & 0x1f);
  if ((uVar2 & 0x1f) != 0) {
    uVar2 = uVar2 + (0x20 - (int)uVar2 % 0x20);
  }
  fence();
  custom0();
  iVar1 = (param_1 & 0xffffffe0) + uVar2;
  for (; 0 < (int)uVar2; uVar2 = uVar2 - 0x20) {
    custom0();
  }
  fence();
  custom0();
  return iVar1;
}


/* NanoCore 1.11, address 0x4003632e.
 * REA evidence: ev_6b66cae5e3c8e9b67db22f6ced37663397ba9380919605358296146fe2bad28b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4003632e(int param_1,int *param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(uint *)(param_1 + 0x54) & 0x3ffffff) >> 10;
  if (uVar2 <= param_5) {
    param_5 = uVar2;
  }
  uVar1 = uVar2 - param_3;
  if (param_5 < uVar2 - param_3) {
    uVar1 = param_5;
  }
  FUN_ram_4000304c(*param_2 + param_3,param_4,uVar1);
  if (uVar1 < param_5) {
    FUN_ram_4000304c(*param_2,param_4 + uVar1,param_5 - uVar1);
  }
  param_5 = param_3 + param_5;
  if (uVar2 != 0) {
    param_5 = param_5 % uVar2;
  }
  return param_5;
}


/* NanoCore 1.11, address 0x4003639a.
 * REA evidence: ev_4412f5df6ebc4cfcd4cf51ad2020e3b2173a3c3e51f12fc36eb7af2b7c64c612
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4003639a(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = param_1 * 0x38;
  if (*(char *)(iVar9 + 0x3007f714) == '\0') {
    return 0;
  }
  iVar1 = *(int *)(param_1 * 0x70 + 0x3007f3a8);
  if (iVar1 == 0) {
    return 0;
  }
  uVar5 = *(uint *)(iVar9 + 0x3007f6e8);
  if (uVar5 != 0) {
    param_2 = param_2 % uVar5;
  }
  uVar2 = *(uint *)(iVar9 + 0x3007f6e4);
  if (param_2 == uVar2) {
    return 0;
  }
  uVar7 = param_2 - uVar2;
  if (param_2 <= uVar2) {
    uVar7 = uVar7 + uVar5;
  }
  iVar8 = param_1 * 0x70 + 0x3007f340;
  iVar9 = *(int *)(param_1 * 0x10 + 0x3007f2c4);
  uVar3 = (uint)*(ushort *)(iVar1 + 4);
  iVar4 = iVar9 + uVar2;
  if (uVar2 < param_2) {
    FUN_ram_400362f0(iVar4,uVar7);
    iVar9 = iVar4;
    uVar5 = uVar7;
  }
  else {
    FUN_ram_400362f0(iVar4,uVar5 - uVar2);
    uVar3 = FUN_ram_4003632e(iVar8,iVar1,uVar3,iVar4,uVar5 - uVar2);
    if (param_2 == 0) goto LAB_ram_4003643c;
    FUN_ram_400362f0(iVar9,param_2);
    uVar5 = param_2;
  }
  uVar3 = FUN_ram_4003632e(iVar8,iVar1,uVar3,iVar9,uVar5);
LAB_ram_4003643c:
  uVar2 = (*(uint *)(&DAT_ram_3007f394 + param_1 * 0x70) & 0x3ffffff) >> 10;
  uVar5 = uVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    uVar5 = (uint)*(ushort *)(iVar1 + 4);
    uVar6 = (uint)*(ushort *)(iVar1 + 6);
    if (uVar5 < uVar6) {
      uVar5 = uVar2 - (uVar6 - uVar5);
    }
    else {
      uVar5 = uVar5 - uVar6;
    }
  }
  *(short *)(iVar1 + 4) = (short)uVar3;
  if (uVar7 < uVar2 - uVar5) {
    *(undefined4 *)(iVar1 + 8) = 0;
    uVar2 = uVar7 + uVar5;
  }
  else {
    *(short *)(iVar1 + 6) = (short)uVar3;
    *(undefined4 *)(iVar1 + 8) = 1;
  }
  *(uint *)(param_1 * 0x38 + 0x3007f6e4) = param_2;
  return uVar2;
}


/* NanoCore 1.11, address 0x400364e8.
 * REA evidence: ev_4a7f33b6acd4b315df90cdf0de454610cdd3d867e1c6efa171001cb5cae370ce
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400364e8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;
  
  iVar1 = param_1 * 0x38;
  if ((*(char *)(iVar1 + 0x3007f714) != '\0') && (*(int *)(iVar1 + 0x3007f6e0) != 0)) {
    iVar3 = *(int *)(param_1 * 0x10 + 0x3007f2c4);
    if (iVar3 != 0) {
      uVar2 = FUN_ram_400002f4();
      fence();
      iVar1 = FUN_ram_4003639a(param_1,*(int *)(*(int *)(*(int *)(iVar1 + 0x3007f6e0) + 8) + 0x14) -
                                       iVar3);
      FUN_ram_400002fa(uVar2);
      if (iVar1 != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(param_1 * 0x70 + 0x3007f368);
        if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4003657a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
      }
    }
  }
  return;
}


/* NanoCore 1.11, address 0x400365d6.
 * REA evidence: ev_70ad3c23b4cffe5acdf18213d67105118ac23d0734b4c1846ccc1da6bfa86536
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400365d6(void)

{
  int in_a5;
  
  *(int *)(in_a5 * 4 + 0x3007f8c0) = *(int *)(in_a5 * 4 + 0x3007f8c0) + 1;
  FUN_ram_4003e3c8();
  return;
}


/* NanoCore 1.11, address 0x40036600.
 * REA evidence: ev_0a11b0e6ac30733cd66be55b14d74353a3e3c59257d767202315f7c0adf089b1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40036600(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  
  iVar4 = param_1 * 0x38;
  uVar3 = 0;
  if ((*(char *)(iVar4 + 0x3007f714) == '\0') &&
     (uVar3 = 0xffffffff, *(char *)(iVar4 + 0x3007f715) == '\0')) {
    iStack_48 = *(int *)(param_1 * 0x10 + 0x3007f2c4);
    if (iStack_48 != 0) {
      iStack_34 = param_1 + 0x10;
      local_50 = 2;
      uStack_4c = *param_2;
      uStack_40 = 0;
      uStack_3c = 1;
      uStack_38 = 1;
      uStack_44 = 1;
      FUN_ram_4003e79e(param_2);
      iVar1 = FUN_ram_40039960();
      *(int *)(iVar4 + 0x3007f6e0) = iVar1;
      if (iVar1 == 0) {
        *(undefined1 *)(iVar4 + 0x3007f715) = 1;
      }
      else {
        FUN_ram_40039908(iVar1,&local_50);
        FUN_ram_400398f8(*(undefined4 *)(iVar4 + 0x3007f6e0),&LAB_ram_4003674c,param_1);
        uVar2 = *(uint *)(param_1 * 4 + 0x3007f8a0);
        if (uVar2 < 0x800) {
          uVar2 = 0x800;
        }
        iVar1 = param_1 * 0x38;
        *(uint *)(iVar4 + 0x3007f6e8) = uVar2;
        uVar3 = *(undefined4 *)(param_1 * 0x10 + 0x3007f2c4);
        *(undefined4 *)(iVar1 + 0x3007f6ec) = 0x200;
        iVar4 = FUN_ram_40039b64(*(undefined4 *)(iVar1 + 0x3007f6e0),uVar3,
                                 *(undefined4 *)(iVar1 + 0x3007f6e8),0x200,2);
        if (iVar4 == 0) {
          *(undefined4 *)(iVar1 + 0x3007f6e4) = 0;
          *(undefined4 *)(iVar1 + 0x3007f6f0) = 0;
          *(undefined4 *)(iVar1 + 0x3007f6f4) = 0;
          *(undefined4 *)(iVar1 + 0x3007f6f8) = 0;
          *(undefined4 *)(iVar1 + 0x3007f6fc) = 0;
          *(undefined4 *)(iVar1 + 0x3007f700) = 0;
          *(undefined4 *)(iVar1 + 0x3007f704) = 0;
          *(undefined4 *)(iVar1 + 0x3007f708) = 0;
          *(undefined1 *)(iVar1 + 0x3007f716) = 0;
          *(undefined1 *)(iVar1 + 0x3007f714) = 1;
          FUN_ram_4003e74e(param_2);
          FUN_ram_40039c7e(*(undefined4 *)(iVar1 + 0x3007f6e0));
          return 0;
        }
        FUN_ram_4003992c(*(undefined4 *)(iVar1 + 0x3007f6e0));
        *(undefined4 *)(iVar1 + 0x3007f6e0) = 0;
        *(undefined4 *)(iVar1 + 0x3007f6ec) = 0;
        *(undefined1 *)(iVar1 + 0x3007f715) = 1;
      }
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}


/* NanoCore 1.11, address 0x400367fe.
 * REA evidence: ev_b7da9be75975e59bf238dac365c8a5a4a93b67919479c31aab47bdbffb08bdfc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400367fe(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  
  if (param_2 == 0) {
    piVar6 = *(int **)(*(int *)(param_1 + 0x34) * 0x70 + 0x3007f3a8);
    FUN_ram_400362f0(*(undefined4 *)(*(int *)(param_1 + 0x34) * 0x10 + 0x3007f2c4),0x800);
    uVar5 = (uint)*(ushort *)(piVar6 + 1);
    iVar3 = *(int *)(param_1 + 0x34) * 0x10;
    iVar2 = *(int *)(iVar3 + 0x3007f2c8);
    iVar3 = *(int *)(iVar3 + 0x3007f2c4);
    uVar4 = (*(uint *)(&DAT_ram_3007f394 + *(int *)(param_1 + 0x34) * 0x70) & 0x3ffffff) >> 10;
    if (uVar5 + iVar2 < uVar4) {
      iVar1 = *piVar6 + uVar5;
    }
    else {
      FUN_ram_4000304c(*piVar6 + uVar5,iVar3,uVar4 - uVar5);
      iVar1 = *piVar6;
      iVar3 = *(int *)(param_1 + 0x34) * 0x10;
      uVar4 = (*(uint *)(&DAT_ram_3007f394 + *(int *)(param_1 + 0x34) * 0x70) & 0x3ffffff) >> 10;
      iVar2 = (*(ushort *)(piVar6 + 1) - uVar4) + *(int *)(iVar3 + 0x3007f2c8);
      iVar3 = (uVar4 - *(ushort *)(piVar6 + 1)) + *(int *)(iVar3 + 0x3007f2c4);
    }
    FUN_ram_4000304c(iVar1,iVar3,iVar2);
    FUN_ram_4003e58a(param_1,1,1);
    FUN_ram_40042472(*(int *)(param_1 + 0x34) * 0x70 + 0x3007f340,
                     *(int *)(*(int *)(param_1 + 0x34) * 0x10 + 0x3007f2c8) << 8 | 3);
    return;
  }
  if (param_2 == 1) {
    FUN_ram_40042472(*(int *)(param_1 + 0x34) * 0x70 + 0x3007f340,4);
    FUN_ram_400048c4(*(undefined4 *)(*(int *)(param_1 + 0x34) * 0x10 + 0x3007f2cc));
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4003692a.
 * REA evidence: ev_0ee0f33971d1440b44581325132a258b51b52b83ead818c008dc0cfbdb7499ee
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003692a(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (param_4 == 2) {
    uVar6 = *(undefined4 *)(param_1 + 0x48);
    iVar1 = (uint)*(byte *)(param_1 + 0x60) * 0x10;
    uVar2 = FUN_ram_4000304c(*(undefined4 *)(iVar1 + 0x3007f2c0));
    uVar4 = (uVar2 & 0x1f) + 0x800;
    uVar3 = uVar2 & 0xffffffe0;
    if ((uVar2 & 0x1f) != 0) {
      uVar4 = (uVar4 & 0xffffffe0) + 0x20;
    }
    fence();
    custom0();
    iVar5 = uVar4 + uVar3;
    do {
      custom0();
      uVar3 = uVar3 + 0x20;
    } while (0 < (int)(iVar5 - uVar3));
    fence();
    custom0();
    iVar5 = FUN_ram_4003e85e(uVar6,*(undefined4 *)(iVar1 + 0x3007f2c0),param_3);
    if (iVar5 == 0) {
      FUN_ram_40004822(*(undefined4 *)(iVar1 + 0x3007f2cc),0xffffffff);
      return param_3;
    }
  }
  return 0;
}


/* NanoCore 1.11, address 0x400369c6.
 * REA evidence: ev_fe5a0ec0114c1bec05cff9ede9a7826329be7ac6d4ca8470d896fe0caa985e31
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400369c6(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  int iVar10;
  undefined1 auStack_70 [76];
  
  iVar10 = param_1 * 0x70 + 0x3007f340;
  iVar2 = *(int *)(param_1 * 0x70 + 0x3007f3a8);
  if (iVar2 != 0) {
    uVar4 = FUN_ram_400002f4();
    uVar1 = 0;
    do {
      iVar5 = FUN_ram_4003e342(param_2);
      if (iVar5 < 0) {
        uVar7 = 0;
        if (uVar1 == 0) goto LAB_ram_40036a6a;
        break;
      }
      auStack_70[uVar1] = (char)iVar5;
      uVar1 = uVar1 + 1;
    } while (uVar1 != 0x40);
    uVar3 = FUN_ram_4003632e(iVar10,iVar2,*(undefined2 *)(iVar2 + 4),auStack_70,uVar1);
    uVar7 = (*(uint *)(&DAT_ram_3007f394 + param_1 * 0x70) & 0x3ffffff) >> 10;
    uVar6 = uVar7;
    if (*(int *)(iVar2 + 8) == 0) {
      uVar6 = (uint)*(ushort *)(iVar2 + 4);
      uVar8 = (uint)*(ushort *)(iVar2 + 6);
      if (uVar6 < uVar8) {
        uVar6 = uVar7 - (uVar8 - uVar6);
      }
      else {
        uVar6 = uVar6 - uVar8;
      }
    }
    *(undefined2 *)(iVar2 + 4) = uVar3;
    if (uVar1 < uVar7 - uVar6) {
      *(undefined4 *)(iVar2 + 8) = 0;
      uVar7 = uVar1 + uVar6;
    }
    else {
      *(undefined2 *)(iVar2 + 6) = uVar3;
      *(undefined4 *)(iVar2 + 8) = 1;
    }
LAB_ram_40036a6a:
    FUN_ram_400002fa(uVar4);
    if ((uVar7 != 0) && (pcVar9 = *(code **)(param_1 * 0x70 + 0x3007f368), pcVar9 != (code *)0x0)) {
      (*pcVar9)(iVar10,uVar7);
    }
  }
  return;
}


/* NanoCore 1.11, address 0x40036aac.
 * REA evidence: ev_5718d5d669e8dcdaea79d8b4b51c2f42a2d6284e53b163c2df078b01f0a6655a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40036aac(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = param_1 - 0x4c;
  if (7 < uVar1) {
    return;
  }
  iVar4 = uVar1 * 0x70;
  iVar5 = iVar4 + 0x3007f340;
  uVar2 = *(undefined4 *)(&DAT_ram_3007f388 + iVar4);
  uVar3 = FUN_ram_4003e510(uVar1);
  if ((*(ushort *)(iVar4 + 0x3007f362) & 0x200) == 0) {
    if (uVar3 != 6) {
      if ((uVar3 & 0xf7) != 4) {
        return;
      }
      FUN_ram_40042472(iVar5,1);
      return;
    }
    FUN_ram_4003e58a(uVar2,1,0);
  }
  else if (uVar3 != 6) {
    if ((uVar3 & 0xf7) == 4) {
      if ((*(char *)(uVar1 * 0x38 + 0x3007f714) != '\0') ||
         (iVar4 = FUN_ram_40036600(uVar1 & 0xff,uVar2), iVar4 == 0)) {
        if (uVar3 != 0xc) {
          return;
        }
        FUN_ram_400364e8();
        FUN_ram_400369c6(uVar1 & 0xff,uVar2);
        return;
      }
      FUN_ram_4003e58a(uVar2,1,0);
      uVar3 = FUN_ram_4003e78a(uVar2);
      iVar4 = uVar1 * 0x10;
      *(uint *)(iVar4 + 0x3007f2c8) = uVar3;
      if (uVar3 != 0) {
        if (0x800 < uVar3) {
          *(undefined4 *)(iVar4 + 0x3007f2c8) = 0x800;
        }
        iVar4 = FUN_ram_4003e7b8(uVar2,*(undefined4 *)(iVar4 + 0x3007f2c4),
                                 *(undefined4 *)(iVar4 + 0x3007f2c8));
        if (iVar4 == 0) {
          return;
        }
        iVar5 = uVar1 * 0x70 + 0x3007f340;
      }
      FUN_ram_40042472(iVar5,1);
    }
    goto LAB_ram_40036b70;
  }
  FUN_ram_4003e4b2(uVar1,*(undefined4 *)(&DAT_ram_3007f388 + iVar4));
LAB_ram_40036b70:
  FUN_ram_4003e58a(uVar2,1,1);
  return;
}


/* NanoCore 1.11, address 0x40036bfc.
 * REA evidence: ev_3ca82a82be4bb8b23753a620c80fd05d74c91288d2a55680eec037919f4bca19
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40036bfc(uint param_1)

{
  int iVar1;
  
  if (param_1 < 8) {
    iVar1 = *(int *)(&DAT_ram_3007f388 + param_1 * 0x70);
    if (iVar1 != 0) {
      FUN_ram_4003e58a(iVar1,1,0);
      FUN_ram_4003e76c(iVar1);
    }
    iVar1 = param_1 * 0x38;
    if ((*(char *)(iVar1 + 0x3007f714) != '\0') && (*(int *)(iVar1 + 0x3007f6e0) != 0)) {
      FUN_ram_40039886();
      FUN_ram_4003992c(*(undefined4 *)(iVar1 + 0x3007f6e0));
    }
    iVar1 = param_1 * 0x38;
    *(undefined4 *)(iVar1 + 0x3007f6e0) = 0;
    *(undefined4 *)(iVar1 + 0x3007f6e4) = 0;
    *(undefined4 *)(iVar1 + 0x3007f6e8) = 0;
    *(undefined4 *)(iVar1 + 0x3007f6ec) = 0;
    *(undefined4 *)(iVar1 + 0x3007f6f0) = 0;
    *(undefined4 *)(iVar1 + 0x3007f6f4) = 0;
    *(undefined4 *)(iVar1 + 0x3007f6f8) = 0;
    *(undefined4 *)(iVar1 + 0x3007f6fc) = 0;
    *(undefined4 *)(iVar1 + 0x3007f708) = 0;
    *(undefined2 *)(iVar1 + 0x3007f714) = 0;
    *(undefined1 *)(iVar1 + 0x3007f716) = 0;
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40036ca4.
 * REA evidence: ev_a362bf6ca382125bc0a78312bba75891e870097fef658b93b78a7fcb0571011b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40036ca4(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  if (7 < param_1) {
    return;
  }
  if ((*(ushort *)(param_1 * 0x70 + 0x3007f362) & 0x200) == 0) {
    return;
  }
  iVar6 = param_1 * 0x38;
  if (*(char *)(iVar6 + 0x3007f714) == '\0') {
    return;
  }
  if (*(int *)(iVar6 + 0x3007f6e0) == 0) {
    return;
  }
  iVar7 = *(int *)(param_1 * 0x10 + 0x3007f2c4);
  if (iVar7 == 0) {
    return;
  }
  uVar2 = FUN_ram_400002f4();
  fence();
  uVar5 = *(int *)(*(int *)(*(int *)(iVar6 + 0x3007f6e0) + 8) + 0x14) - iVar7;
  iVar7 = *(int *)(iVar6 + 0x3007f6f0);
  if (*(uint *)(iVar6 + 0x3007f6e8) != 0) {
    uVar5 = uVar5 % *(uint *)(iVar6 + 0x3007f6e8);
  }
  iVar3 = FUN_ram_400042ea();
  uVar4 = FUN_ram_40004352(4);
  if ((*(char *)(iVar6 + 0x3007f716) != '\0') && (*(uint *)(iVar6 + 0x3007f6f8) == uVar5)) {
    if (*(int *)(iVar6 + 0x3007f6fc) == iVar7) {
      if (uVar4 == 0) {
        uVar4 = 1;
      }
      if (uVar4 <= (uint)(iVar3 - *(int *)(param_1 * 0x38 + 0x3007f708))) {
        iVar6 = FUN_ram_4003639a(param_1 & 0xff,uVar5);
        *(undefined1 *)(param_1 * 0x38 + 0x3007f716) = 0;
        goto LAB_ram_40036d8c;
      }
    }
    iVar6 = 0;
    if (*(int *)(param_1 * 0x38 + 0x3007f6fc) == iVar7) goto LAB_ram_40036d8c;
  }
  iVar1 = param_1 * 0x38;
  iVar6 = 0;
  *(uint *)(iVar1 + 0x3007f6f8) = uVar5;
  *(int *)(iVar1 + 0x3007f6fc) = iVar7;
  *(int *)(iVar1 + 0x3007f708) = iVar3;
  *(undefined1 *)(iVar1 + 0x3007f716) = 1;
LAB_ram_40036d8c:
  FUN_ram_400002fa(uVar2);
  if ((iVar6 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(param_1 * 0x70 + 0x3007f368),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x40036dba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40036e04.
 * REA evidence: ev_e0cbb6647e081dcebed4ab8733dbb90f78d0d8bef291fdd3fb9398fc70db5b15
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40036e04(uint param_1)

{
  if (7 < param_1) {
    return;
  }
  if (((*(ushort *)(param_1 * 0x70 + 0x3007f362) & 0x200) != 0) &&
     (*(char *)(param_1 * 0x38 + 0x3007f714) != '\0')) {
    FUN_ram_400364e8();
    if (*(int *)(&DAT_ram_3007f388 + param_1 * 0x70) != 0) {
      FUN_ram_400369c6(param_1 & 0xff);
      return;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x40036e64.
 * REA evidence: ev_a7205b1ed522414d222a7626764f5609fdd806db1825429fe1feea2514476490
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40036e64(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  
  puVar5 = (&PTR_s_no_pin_ram_40097890_ram_4009796c)[param_1 * 8];
  iVar2 = FUN_ram_4000521c(puVar5,s_no_pin_ram_40097890);
  uVar4 = (&DAT_ram_40097964)[param_1 * 8];
  if ((iVar2 != 0) && ((uVar4 == 4 || (uVar4 - 6 < 2)))) {
    uVar3 = FUN_ram_40041a16(puVar5);
    *(undefined4 *)(param_2 * 0xc + 0x3007f9a0) = uVar3;
    FUN_ram_400419de(uVar3,0);
    FUN_ram_400419f2(*(undefined4 *)(param_2 * 0xc + 0x3007f9a0),0);
    (&DAT_ram_3007f39c)[param_2 * 0x70] = (&DAT_ram_3007f39c)[param_2 * 0x70] | 0x40;
  }
  puVar5 = (&PTR_s_no_pin_ram_40097890_ram_40097970)[param_1 * 8];
  iVar2 = FUN_ram_4000521c(puVar5,s_no_pin_ram_40097890);
  if ((iVar2 != 0) && ((uVar4 & 0xfffffffd) == 4)) {
    uVar3 = FUN_ram_40041a16(puVar5);
    iVar2 = param_2 * 0xc;
    *(undefined4 *)(iVar2 + 0x3007f924) = uVar3;
    FUN_ram_400419de(uVar3,1);
    iVar1 = param_2 * 0x70;
    FUN_ram_400419a6(*(undefined4 *)(iVar2 + 0x3007f924),2,&LAB_ram_400367c6,iVar1 + 0x3007f340);
    FUN_ram_400419c4(*(undefined4 *)(iVar2 + 0x3007f924),1);
    (&DAT_ram_3007f39c)[iVar1] = (&DAT_ram_3007f39c)[iVar1] | 0x20;
  }
  if (uVar4 == 5) {
    (&DAT_ram_3007f39c)[param_2 * 0x70] = (&DAT_ram_3007f39c)[param_2 * 0x70] | 0x60;
  }
  return;
}


/* NanoCore 1.11, address 0x40036f9c.
 * REA evidence: ev_39c18d9167f9a373d6eb07bd12bc7bb549f3b7ecdac1d48af8d517b0eed0d28b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40036f9c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if ((&DAT_ram_3004a8dc)[iVar2 * 2] == param_1) {
      uVar1 = (&DAT_ram_3004a8e0)[iVar2 * 2];
      goto LAB_ram_40036fb8;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x14);
  uVar1 = *(undefined4 *)(&DAT_ram_3007f3a4 + param_2 * 0x70);
LAB_ram_40036fb8:
  FUN_ram_40037a2e(param_2 + 0x25,uVar1);
  return;
}


/* NanoCore 1.11, address 0x40036fda.
 * REA evidence: ev_7d947640d210b13116dde05ea3cda6ef0ecbba88c8e39ea4000d7ebe273035d1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40036fda(int param_1,uint *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = *(uint *)(param_1 + 0x60);
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  uVar2 = 0xfffffff6;
  if (uVar9 < 8) {
    uVar8 = *param_2;
    uVar2 = 0xfffffff6;
    if (uVar8 < 8000000) {
      uVar4 = param_2[1];
      uVar2 = 1;
      if (((uVar4 & 0xc0) != 0x80) && (uVar2 = 2, (uVar4 & 0xc0) != 0x40)) {
        uVar2 = 0;
      }
      uVar5 = uVar4 & 0x30;
      uVar6 = 0;
      if (uVar5 != 0) {
        if (uVar5 == 0x10) {
          uVar6 = 1;
        }
        else if (uVar5 == 0x20) {
          uVar6 = 2;
        }
        else {
          uVar6 = 3;
        }
      }
      uVar4 = uVar4 & 0xf;
      uVar7 = 0;
      if ((((uVar4 != 5) && (uVar7 = 1, uVar4 != 6)) && (uVar7 = 2, uVar4 != 7)) &&
         (uVar7 = 4, uVar4 != 9)) {
        uVar7 = 3;
      }
      FUN_ram_400378f4(uVar9 + 0x25);
      FUN_ram_40036f9c(uVar8,uVar9);
      FUN_ram_400378d0(uVar9 + 0x25);
      FUN_ram_4003ff8a(1000);
      FUN_ram_4003e1b6(uVar1,1);
      FUN_ram_4003e1a0(uVar1);
      iVar3 = FUN_ram_4003e650(uVar1,uVar8,0,uVar2,uVar6,uVar7,param_2[3] & 0xf);
      if (iVar3 < 0) {
        FUN_ram_4003e1b6(uVar1,0);
        uVar2 = 0xffffffff;
      }
      else {
        FUN_ram_4003e1b6(uVar1,0);
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}


