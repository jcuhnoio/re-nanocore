/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4003b000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4003b0ac.
 * REA evidence: ev_b0f9e25b63a638571231d254f84dff4c6254b747e063b313546583bff8bedf0e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003b1c6) */

int FUN_ram_4003b0ac(int param_1,undefined2 *param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  
  iVar3 = -0x16;
  if (param_2 != (undefined2 *)0x0) {
    iVar11 = *(int *)(param_2 + 4);
    uVar8 = (uint)(ushort)param_2[2];
    iVar3 = -0x16;
    if (iVar11 != 0) {
      FUN_ram_4003ac32();
      iVar10 = 0;
      FUN_ram_4003add8(param_1,*param_2);
      FUN_ram_4003ac02(param_1);
      iVar9 = 0;
      iVar3 = 0;
      while (uVar8 != 0) {
        uVar7 = uVar8;
        if (8 < uVar8) {
          uVar7 = 8;
        }
        uVar6 = 0;
        do {
          if ((param_3 == 0) || ((ushort)param_2[2] - 1 != iVar10 + uVar6)) {
            fence();
            *(undefined4 *)(*(int *)(param_1 + 8) + 0x10) = 0x100;
          }
          else {
            fence();
            *(undefined4 *)(*(int *)(param_1 + 8) + 0x10) = 0x300;
          }
          uVar6 = uVar6 + 1;
        } while ((uVar6 & 0xffff) < uVar7);
        uVar6 = uVar7 - 1 & 0xffff;
        uVar8 = uVar8 - uVar7 & 0xffff;
        iVar10 = uVar6 + iVar10 + 1;
        lVar1 = FUN_ram_4003f0f0();
        iVar4 = iVar3 + uVar7;
        iVar3 = 0;
        while (fence(), *(uint *)(*(int *)(param_1 + 8) + 0x9c) < uVar7) {
          if (iVar3 != 0) goto LAB_ram_4003b17e;
          uVar2 = FUN_ram_4003f0f0();
          if (lVar1 + 10U <= uVar2) {
            iVar3 = -3;
          }
        }
        if (iVar3 != 0) break;
        uVar5 = 0;
        do {
          fence();
          *(undefined1 *)(iVar11 + iVar9 + uVar5) = *(undefined1 *)(*(int *)(param_1 + 8) + 0x10);
          uVar5 = uVar5 + 1;
        } while ((uVar5 & 0xffff) < uVar7);
        iVar9 = uVar6 + iVar9 + 1;
        iVar3 = iVar4;
      }
LAB_ram_4003b17e:
      iVar11 = FUN_ram_4003f0f0();
      do {
        fence();
        if ((*(uint *)(*(int *)(param_1 + 8) + 0x40) & 0x600) != 0) {
          FUN_ram_4003ac32(param_1);
          return iVar3;
        }
        uVar12 = FUN_ram_4003f0f0();
      } while (((int)((ulonglong)uVar12 >> 0x20) == 0) && ((uint)uVar12 < iVar11 + 10U));
      FUN_ram_4003ac32(param_1);
      iVar3 = -3;
    }
  }
  return iVar3;
}


/* NanoCore 1.10, address 0x4003b22e.
 * REA evidence: ev_3de6b34e118c6158d87046175cc74c34a942c3ae5d3de42a381a09e08e56f52e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003b22e(undefined4 *param_1)

{
  fence();
  fence();
  *(uint *)*param_1 = *(uint *)*param_1 | 1;
  return;
}


/* NanoCore 1.10, address 0x4003b244.
 * REA evidence: ev_672d41230a102a7f4d3dbf842420f6c8c05524ba1bde42d75ecc926a27889df3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003b244(int *param_1)

{
  fence();
  fence();
  *(uint *)(*param_1 + 0x24) = *(uint *)(*param_1 + 0x24) | 0x100;
  return;
}


/* NanoCore 1.10, address 0x4003b262.
 * REA evidence: ev_a7417f65d9963674466a963fd19835d6cfaf51d6be7b369a97f15b91bc15a196
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003b262(int param_1)

{
  undefined4 uVar1;
  
  if (((param_1 == 0x5622) || (param_1 == 0xac44)) || (uVar1 = 0x1770000, param_1 == 0x2b11)) {
    uVar1 = 0x1588800;
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4003b2b6.
 * REA evidence: ev_5ab09cae8b5eba2c703b31b0acbce8b0a76df0f35029304629fe43ce58cf92e6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003b2b6(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_ram_4003b262(param_2);
  uVar2 = FUN_ram_40036ac4(param_1);
  FUN_ram_40036b5c(uVar2,uVar1);
  return;
}


/* NanoCore 1.10, address 0x4003b2d8.
 * REA evidence: ev_dd1c02d012d2a6082b8078ec4c507f269302768a599d9773bd0a03de9ebfa357
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003b2d8(int *param_1,int param_2)

{
  *param_1 = (param_2 + 0x18600) * 0x1000;
  param_1[1] = param_2 + 0x34;
  param_1[2] = param_2 + 0x21;
  param_1[3] = param_2;
  FUN_ram_400369a4();
  return;
}


/* NanoCore 1.10, address 0x4003b2f8.
 * REA evidence: ev_bff71ae1f09fc856685c300a4d718082de1fb9d3e5289105d248266e40605d99
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003b2f8(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  fence();
  uVar3 = *(uint *)(*param_1 + 0x34);
  fence();
  uVar1 = *(uint *)(*param_1 + 100);
  fence();
  if (4 < param_2) {
    return 0xffffffea;
  }
  uVar2 = *(uint *)*param_1 & 0xffffffcf;
  switch(param_2) {
  case 0:
    fence();
    *(uint *)*param_1 = uVar2 | 0x10;
    fence();
    *(uint *)(*param_1 + 0x34) = uVar3 & 0xffcfffff | 0x100000;
    fence();
    uVar1 = uVar1 & 0xffcfffff | 0x100000;
    goto LAB_ram_4003b360;
  case 1:
    fence();
    uVar2 = uVar2 | 0x10;
    break;
  case 2:
    fence();
    puVar4 = (uint *)*param_1;
    uVar1 = uVar2 | 0x20;
    goto LAB_ram_4003b366;
  case 3:
    fence();
    *(uint *)*param_1 = uVar2;
    fence();
    *(uint *)(*param_1 + 0x34) = uVar3 & 0xffcfffff | 0x100000;
    fence();
    *(uint *)(*param_1 + 100) = uVar1 & 0xffcfffff | 0x100000;
    return 0;
  case 4:
    fence();
  }
  *(uint *)*param_1 = uVar2;
  fence();
  *(uint *)(*param_1 + 0x34) = uVar3 & 0xffcfffff;
  fence();
  uVar1 = uVar1 & 0xffcfffff;
LAB_ram_4003b360:
  puVar4 = (uint *)(*param_1 + 100);
LAB_ram_4003b366:
  *puVar4 = uVar1;
  return 0;
}


/* NanoCore 1.10, address 0x4003b3de.
 * REA evidence: ev_06ce93e3f082d12b3af2c83d099a380d2111537149246159e5b390356c6ced6b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003b3de(int *param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 - 8 < 0x19) {
    uVar1 = 0xffffffea;
    if ((param_2 & 3) == 0) {
      fence();
      fence();
      *(uint *)(*param_1 + 4) = ((param_2 - 8 >> 2) + 1 & 0xf) << 4 | *(uint *)(*param_1 + 4) & 0x8f
      ;
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4003b424.
 * REA evidence: ev_01127bd6b3dc419c722dcd2b09a17acf2d1571004c42713045cbf257bb771ca0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003b424(int *param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 - 8 < 0x19) {
    uVar1 = 0xffffffea;
    if ((param_2 & 3) == 0) {
      fence();
      fence();
      *(uint *)(*param_1 + 4) = *(uint *)(*param_1 + 4) & 0xf8 | (param_2 - 8 >> 2) + 1 & 0xff;
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4003b460.
 * REA evidence: ev_e32b82acd38688a3fdce16bb028f2643aa4b8c6e04955bb189ef77da20c6ced8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003b460(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  FUN_ram_4003b2b6(param_1[2]);
  uVar1 = FUN_ram_4003b262(param_2);
  if (param_2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = uVar1 / param_2;
  }
  iVar2 = 0;
  if (param_3 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = uVar1 / param_3;
  }
  do {
    if ((byte)(&DAT_ram_40096460)[iVar2 * 2] == uVar1) {
      fence();
      fence();
      *(uint *)(*param_1 + 0x24) =
           *(uint *)(*param_1 + 0x24) & 0xfffffff0 | (uint)(byte)(&DAT_ram_40096461)[iVar2 * 2];
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0xf);
  return 0xffffffea;
}


/* NanoCore 1.10, address 0x4003b4d2.
 * REA evidence: ev_499cd1c0b8745be922a805ae55c84260aeed6ed1ee41ce3114c01b9a34b3a2b6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003b4d2(int *param_1,int param_2)

{
  uint uVar1;
  
  fence();
  uVar1 = *(uint *)(*param_1 + 4) & 0xfff7ffff;
  if (param_2 != 0) {
    uVar1 = uVar1 | 0x80000;
  }
  fence();
  *(uint *)(*param_1 + 4) = uVar1;
  return;
}


/* NanoCore 1.10, address 0x4003b4f8.
 * REA evidence: ev_1123da6691c3335b0a4c096056b4327cde0456803a0d7175c4455988167581f1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003b4f8(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  FUN_ram_4003b2b6(param_1[2]);
  uVar2 = FUN_ram_4003b262(param_2);
  fence();
  if ((*(uint *)*param_1 & 0x30) == 0) {
    uVar3 = *(uint *)(*param_1 + 4);
    fence();
    fence();
    uVar1 = param_3;
  }
  else {
    uVar3 = *(uint *)(*param_1 + 4);
    fence();
    fence();
    uVar1 = param_3 >> 1;
  }
  *(uint *)(*param_1 + 4) = uVar3 & 0xfffc00ff | (uVar1 - 1) * 0x100;
  if (param_2 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = uVar2 / param_2;
  }
  iVar4 = 0;
  if (param_3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = uVar2 / param_3;
  }
  do {
    if ((byte)(&DAT_ram_40096460)[iVar4 * 2] == uVar2) {
      fence();
      fence();
      *(uint *)(*param_1 + 0x24) =
           *(uint *)(*param_1 + 0x24) & 0xffffff0f | (uint)(byte)(&DAT_ram_40096461)[iVar4 * 2] << 4
      ;
      return 0;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0xf);
  return 0xffffffea;
}


/* NanoCore 1.10, address 0x4003b5be.
 * REA evidence: ev_0f0bcdaecd9cc5b6e66758de4ed7e52d26f0107963b36e4af09a7ffae8318e9b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003b5be(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = param_2 - 1;
  if (param_3 == 0) {
    fence();
    fence();
    iVar1 = *param_1;
    *(uint *)(iVar1 + 0x34) =
         *(uint *)(*param_1 + 0x34) & 0xfff00000 | (1 << (param_2 & 0x1f)) - 1U | uVar3 * 0x10000;
    fence();
    fence();
    *(uint *)(*param_1 + 0x30) = *(uint *)(iVar1 + 0x30) & 0xfffffff0 | uVar3;
    fence();
    *(undefined4 *)(*param_1 + 0x44) = 0xfedcba98;
    fence();
    puVar2 = (undefined4 *)(*param_1 + 0x48);
  }
  else {
    fence();
    fence();
    iVar1 = *param_1;
    *(uint *)(iVar1 + 100) = *(uint *)(*param_1 + 100) & 0xfff0ffff | uVar3 * 0x10000;
    fence();
    fence();
    *(uint *)(*param_1 + 0x30) = *(uint *)(iVar1 + 0x30) & 0xffffff0f | uVar3 * 0x10;
    fence();
    *(undefined4 *)(*param_1 + 0x68) = 0xfedcba98;
    fence();
    puVar2 = (undefined4 *)(*param_1 + 0x6c);
  }
  *puVar2 = 0x76543210;
  return;
}


/* NanoCore 1.10, address 0x4003b69c.
 * REA evidence: ev_4d7f0c69ed33024911cddd3c466bbe0dbc1ac70988dfe0d0f6c66628166093ed
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003b69c(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 local_30 [2];
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  uStack_24 = 1;
  iStack_28 = *param_1 + 0x20;
  iStack_14 = param_1[3] + 0xc;
  uVar2 = *(uint *)(param_2 + 0x10);
  local_30[0] = 1;
  uStack_1c = 1;
  uStack_18 = 1;
  if (uVar2 == 0x18) {
    uStack_24 = 3;
  }
  else if (uVar2 < 0x19) {
    if (uVar2 != 8) {
      if (uVar2 != 0x10) {
        return;
      }
      uStack_24 = 2;
    }
  }
  else {
    if (uVar2 != 0x20) {
      return;
    }
    uStack_24 = 4;
  }
  param_1[9] = 3;
  uStack_20 = uStack_24;
  iVar1 = FUN_ram_40038a8e();
  param_1[5] = iVar1;
  if (iVar1 != 0) {
    FUN_ram_40038a26(iVar1,&LAB_ram_4003b290,param_1 + 5);
    FUN_ram_40038a36(param_1[5],local_30);
    FUN_ram_40038c92(param_1[5],param_1[6],param_1[7],param_1[8],1);
    FUN_ram_40038dac(param_1[5]);
    fence();
    fence();
    *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) | 0x2000000;
    fence();
    *(undefined4 *)(*param_1 + 0x28) = 0;
    FUN_ram_4003b244(param_1);
    fence();
    fence();
    *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) | 4;
    FUN_ram_4003b22e(param_1);
    fence();
    fence();
    puVar3 = (uint *)*param_1;
    *puVar3 = *(uint *)*param_1 | 4;
    fence();
    fence();
    puVar4 = (uint *)*param_1;
    *puVar4 = *puVar3 | 0x100;
    fence();
    fence();
    *(uint *)(*param_1 + 0x1c) = puVar4[7] | 0x80;
  }
  return;
}


/* NanoCore 1.10, address 0x4003b8d2.
 * REA evidence: ev_c31954d406a96564333442b1217cc9a2edb14d85d5d99f638660b8eff980913a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003b8d2(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 local_30;
  int iStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  iStack_2c = *param_1 + 0x10;
  iStack_14 = param_1[3] + 0xc;
  uVar2 = *(uint *)(param_2 + 0x10);
  local_30 = 2;
  uStack_1c = 1;
  uStack_18 = 1;
  if (uVar2 == 0x18) {
    uStack_20 = 3;
  }
  else if (uVar2 < 0x19) {
    if (uVar2 == 8) {
      uStack_20 = 1;
    }
    else {
      if (uVar2 != 0x10) {
        return;
      }
      uStack_20 = 2;
    }
  }
  else {
    if (uVar2 != 0x20) {
      return;
    }
    uStack_20 = 4;
  }
  param_1[0xe] = 4;
  uStack_24 = uStack_20;
  iVar1 = FUN_ram_40038a8e();
  param_1[10] = iVar1;
  if (iVar1 != 0) {
    FUN_ram_40038a26(iVar1,&LAB_ram_4003b290,param_1 + 10);
    FUN_ram_40038a36(param_1[10],&local_30);
    FUN_ram_40038c92(param_1[10],param_1[0xb],param_1[0xc],param_1[0xd],2);
    FUN_ram_40038dac(param_1[10]);
    fence();
    fence();
    *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) | 0x1000000;
    fence();
    *(undefined4 *)(*param_1 + 0x2c) = 0;
    FUN_ram_4003b244(param_1);
    fence();
    fence();
    *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xfffffffc | 1;
    FUN_ram_4003b22e(param_1);
    fence();
    fence();
    puVar3 = (uint *)*param_1;
    *puVar3 = *(uint *)*param_1 | 2;
    fence();
    fence();
    *(uint *)(*param_1 + 0x1c) = puVar3[7] | 8;
  }
  return;
}


/* NanoCore 1.10, address 0x4003b9e0.
 * REA evidence: ev_309fe5063adb0428e1fe62e67e95cfefa04805206661a1d22e4d6cd592a94d13
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003b9e0(int *param_1)

{
  uint *puVar1;
  
  fence();
  fence();
  puVar1 = (uint *)*param_1;
  puVar1[7] = *(uint *)(*param_1 + 0x1c) & 0xffffff7f;
  fence();
  fence();
  *(uint *)*param_1 = *puVar1 & 0xfffffffb;
  FUN_ram_400389b4(param_1[5]);
  FUN_ram_40038a5a(param_1[5]);
  param_1[4] = 0;
  return;
}


/* NanoCore 1.10, address 0x4003ba2a.
 * REA evidence: ev_ea7f40b951d16ee530b2a0fef2618a6b8336c432de4e71b03123bbf3ab3b4218
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003ba2a(int *param_1)

{
  uint *puVar1;
  
  fence();
  fence();
  puVar1 = (uint *)*param_1;
  puVar1[7] = *(uint *)(*param_1 + 0x1c) & 0xfffffff7;
  fence();
  fence();
  *(uint *)*param_1 = *puVar1 & 0xfffffffd;
  FUN_ram_400389b4(param_1[10]);
  FUN_ram_40038a5a(param_1[10]);
  return;
}


/* NanoCore 1.10, address 0x4003ba6c.
 * REA evidence: ev_442be7a8cea727a17217c30eaa56e98881229a888dde217286c7316ca3e6f943
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003ba6c(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  *(undefined4 *)(param_1 + 0x40) = param_3;
  return;
}


/* NanoCore 1.10, address 0x4003ba72.
 * REA evidence: ev_1887bdc4f6327bc933feef1d34d90d5edf2c408450385cc01be4cb926e48f5b2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003ba72(uint param_1)

{
  if (param_1 < 4) {
    return param_1 * 0x10000 + 0x10400000;
  }
  return 0;
}


/* NanoCore 1.10, address 0x4003ba86.
 * REA evidence: ev_bf3fc3eaba9d05bf6663e0cdc7084a5ba3a17d226b847f0e4c5f665f7b1466c6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003ba86(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  fence();
  uVar2 = *(uint *)(param_1 + 8) & 0xffffd7ff;
  if (param_2 == 1) {
    uVar1 = 0x2000;
  }
  else {
    if (param_2 == 2) goto LAB_ram_4003baa0;
    uVar1 = 0x800;
  }
  uVar2 = uVar2 | uVar1;
LAB_ram_4003baa0:
  fence();
  *(uint *)(param_1 + 8) = uVar2;
  return;
}


/* NanoCore 1.10, address 0x4003bab6.
 * REA evidence: ev_e281edaea11b30cbeda929c11280253925fa740ae8737dc4f061eab99f801429
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003bab6(int param_1,int param_2)

{
  fence();
  fence();
  *(uint *)(param_1 + 8) = param_2 << 7 | *(uint *)(param_1 + 8) & 0xffffff7f;
  return;
}


/* NanoCore 1.10, address 0x4003bace.
 * REA evidence: ev_38b4d4e9d33c795a364ecefbe34b411ba10e244747e53eae109e072e0a702637
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003bace(int param_1,int param_2)

{
  fence();
  fence();
  *(uint *)(param_1 + 8) = param_2 << 6 | *(uint *)(param_1 + 8) & 0xffffffbf;
  return;
}


/* NanoCore 1.10, address 0x4003bae6.
 * REA evidence: ev_4612234e1ae0d237824046c9a6e8140410a1deaa48c75f50c4e76bbfdfa9e387
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003bae6(int param_1,int param_2)

{
  fence();
  fence();
  *(uint *)(param_1 + 8) = param_2 << 8 | *(uint *)(param_1 + 8) & 0xfffffeff;
  return;
}


/* NanoCore 1.10, address 0x4003bafe.
 * REA evidence: ev_6d23ae37d3042150ae09b3ac2183d1bbd982ad97af940b16c02c85b95eae267b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003bafe(int param_1)

{
  fence();
  fence();
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x80008000;
  return;
}


/* NanoCore 1.10, address 0x4003bb14.
 * REA evidence: ev_a5e339c2ce66b6b97fa69b9f578c48ef0adf1f3f53d8c173a26aba1f71d815cd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003bb14(int param_1,uint param_2)

{
  fence();
  fence();
  *(uint *)(param_1 + 0x10) = ~param_2 & *(uint *)(param_1 + 0x10);
  return;
}


/* NanoCore 1.10, address 0x4003bb2a.
 * REA evidence: ev_6acda48a3ee900b4b665923658cbfe7b43803d5a5895510c19c6f415374ff53a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003bb2a(int param_1)

{
  fence();
  fence();
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x100;
  return;
}


/* NanoCore 1.10, address 0x4003bb3e.
 * REA evidence: ev_633b83f214c2fa79e8dc784ebc1822245a116859626ee6b733a0d5e7af7d7483
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003bb3e(int param_1)

{
  fence();
  fence();
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffeff;
  return;
}


/* NanoCore 1.10, address 0x4003bb52.
 * REA evidence: ev_9f8160cbaa393482f7b1ddda490be8b3a2368da68b7379f8b2609c0de145e402
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003bb52(int param_1)

{
  fence();
  fence();
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x1000000;
  return;
}


/* NanoCore 1.10, address 0x4003bb68.
 * REA evidence: ev_51bffcac2775628e1db86586d165c5bcdc27cf1f5c8af36a9baa01b58043a592
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003bb68(int param_1)

{
  fence();
  fence();
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfeffffff;
  return;
}


/* NanoCore 1.10, address 0x4003bb80.
 * REA evidence: ev_e19da196f1416a19f00f34fbfbb028fe6743b6c8a473df4e80ce4eff98d2b187
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003bb80(int param_1)

{
  fence();
  if ((*(uint *)(param_1 + 0x38) & 0x20000000) == 0) {
    return 1 - ((int)(*(uint *)(param_1 + 0x38) << 3) >> 0x1f);
  }
  return 4;
}


/* NanoCore 1.10, address 0x4003bb9e.
 * REA evidence: ev_89ecb80395ad8b3f976ae061804d89781399d6ba592c89dbbe48787c8b89f799
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4003bb9e(int param_1)

{
  fence();
  return (*(uint *)(param_1 + 0x1c) & 0xffffff) >> 0x10;
}


/* NanoCore 1.10, address 0x4003bbac.
 * REA evidence: ev_378ea31097c8d5a27193ce462d3c7853ba06bef179384a84c54fde36d4e1dceb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003bbac(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  for (iVar1 = 0; param_3 != iVar1; iVar1 = iVar1 + 1) {
    fence();
    *(undefined1 *)(param_1 + 0x200) = *(undefined1 *)(param_2 + iVar1);
  }
  return;
}


/* NanoCore 1.10, address 0x4003bbc8.
 * REA evidence: ev_85e146ddfccce053dcc63e05141979ad6f12f12b76b438d0bf95b50a9f9b93b7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003bbc8(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  for (iVar1 = 0; param_3 != iVar1; iVar1 = iVar1 + 1) {
    fence();
    *(undefined1 *)(param_2 + iVar1) = *(undefined1 *)(param_1 + 0x300);
  }
  return;
}


/* NanoCore 1.10, address 0x4003bbe4.
 * REA evidence: ev_af3a700ae3a4b88160e8e0ae12f62ff2399eb4a9163f494404e40786d731e88d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003bbe4(int param_1)

{
  fence();
  fence();
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x80000000;
  return;
}


/* NanoCore 1.10, address 0x4003bbfa.
 * REA evidence: ev_bcfa95c2a5ef04fdaa87693fb0a75edd8481e0c9b1d14047c1df21486f1250d3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4003bbfa(int param_1)

{
  fence();
  if (-1 < (int)*(uint *)(param_1 + 0x40)) {
    return (*(uint *)(param_1 + 0x40) & 0x3ffffff) >> 0x19;
  }
  return 0;
}


/* NanoCore 1.10, address 0x4003bc12.
 * REA evidence: ev_11b11c15c5030ab28238c1ef830dda24b4554d2a2bd37efd835e671cee59bd55
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4003bc12(int param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_1 + 0x40);
  fence();
  fence();
  *puVar1 = *puVar1 & 0xffc0ffff | 0x2000000;
  FUN_ram_4003f052(1);
  fence();
  return (*puVar1 >> 0x19 ^ 1) & 1;
}


/* NanoCore 1.10, address 0x4003bce6.
 * REA evidence: ev_78e09a34ef4f4a0c0ad7cb9cca5b01d39f9fd55bdb10b820db87583c7b07c468
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003bce6(undefined1 *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iStack_14;
  
  uVar1 = 0;
  while ((iVar2 = FUN_ram_4003893e(param_1,&iStack_14), iVar2 != 0 && (iStack_14 != 0))) {
    uVar1 = uVar1 + 1;
    FUN_ram_4003f052(1);
    if (param_2 < uVar1) {
      FUN_ram_4003865a(*param_1);
      return 0xffffff8c;
    }
  }
  return 0;
}


/* NanoCore 1.10, address 0x4003bd2c.
 * REA evidence: ev_527fb9b9ba73301c20898f0e2d65836b8ec0f41de9ec07dff18ebbcb405483dd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003bd2c(int param_1,uint param_2,uint param_3,int param_4)

{
  fence();
  fence();
  *(uint *)(param_1 + 0x30) = param_4 + param_2 & 0xffffff | *(uint *)(param_1 + 0x30) & 0xff000000;
  fence();
  fence();
  *(uint *)(param_1 + 0x34) = param_2 & 0xffffff | *(uint *)(param_1 + 0x34) & 0xff000000;
  fence();
  fence();
  *(uint *)(param_1 + 0x38) = param_3 & 0xffffff | *(uint *)(param_1 + 0x38) & 0xf0000000;
  return;
}


/* NanoCore 1.10, address 0x4003bd8e.
 * REA evidence: ev_7eda306622003589008be45f44b9168b226d44996b781a59cfa831a7649d4f6f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4003bd8e(uint *param_1)

{
  bool bVar1;
  
  if (param_1[2] < 0x41) {
    bVar1 = false;
  }
  else if ((*param_1 == 0) || (bVar1 = false, (*param_1 & 7) == 0)) {
    bVar1 = true;
    if (param_1[1] != 0) {
      bVar1 = (param_1[1] & 7) == 0;
    }
  }
  return bVar1;
}


/* NanoCore 1.10, address 0x4003bdba.
 * REA evidence: ev_9f067223d91e565ab563e2856bf708f7bff2c6f56d8fc0160b0e0b1e16e7293d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003bdba(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  fence();
  if ((uVar1 & 0xf00) != 0) {
    FUN_ram_4003cf18();
  }
  iVar2 = FUN_ram_4003bb9e(param_1);
  fence();
  if ((*(uint *)(param_1 + 0x1c) & 0xff) != 0 || iVar2 != 0) {
    FUN_ram_4003cf18(param_1);
    FUN_ram_4003bafe(param_1);
  }
  fence();
  *(uint *)(param_1 + 0x14) = uVar1;
  return;
}


/* NanoCore 1.10, address 0x4003be18.
 * REA evidence: ev_1a1e8f70bb37aab5cdb0274dead574c5798947d41fde1190d615056b697b1014
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003be18(int param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_1 + 0x40);
  fence();
  fence();
  *puVar1 = *puVar1 & 0xfffffffc | 2;
  fence();
  fence();
  *puVar1 = *puVar1 | 0x20;
  fence();
  fence();
  *puVar1 = *puVar1 | 0x40;
  return;
}


/* NanoCore 1.10, address 0x4003be50.
 * REA evidence: ev_187bd929bfa5b51f4028ce27f6c19b1f2f1f9a210048132c6363093a7b1fc1b7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003be50(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  
  iVar1 = FUN_ram_4003ba72(*param_1);
  if (((*param_2 != 0) || (iVar2 = -0x16, param_2[1] != 0)) &&
     ((param_2[2] != 0 || (iVar2 = -0x16, param_2[3] != 0)))) {
    FUN_ram_4003bafe(iVar1);
    iVar3 = *param_2;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_2[3];
      iVar9 = param_2[1];
      puVar7 = (uint *)(iVar1 + 0x40);
      uVar6 = iVar2 + 7U >> 3;
      if (iVar9 != 0) {
        iVar8 = param_2[2];
        fence();
        fence();
        *puVar7 = *puVar7 | 0x2000000;
        if (4 < uVar6) {
          uVar6 = 4;
          iVar2 = 0x20;
        }
        uVar4 = 0;
        for (uVar5 = 0; uVar5 != uVar6; uVar5 = uVar5 + 1) {
          uVar4 = uVar4 | (uint)*(byte *)(iVar3 + uVar5) << ((uVar5 & 3) << 3);
        }
        fence();
        *(uint *)(iVar1 + 0x48) = uVar4;
        fence();
        fence();
        *puVar7 = iVar8 << 0x10 | *puVar7 | iVar2 << 8 | 0x80000000;
        uVar6 = iVar8 + 7U >> 3;
        if (4 < uVar6) {
          uVar6 = 4;
          iVar8 = 0x20;
        }
        do {
          iVar2 = FUN_ram_4003bbfa(iVar1);
        } while (iVar2 == 0);
        do {
          iVar2 = FUN_ram_4003bc12(iVar1);
        } while (iVar2 == 0);
        uVar4 = *(uint *)(iVar1 + 0x4c);
        fence();
        for (uVar5 = 0; uVar5 != uVar6; uVar5 = uVar5 + 1) {
          *(char *)(iVar9 + uVar5) = (char)(uVar4 >> ((uVar5 & 3) << 3));
        }
        return iVar8;
      }
      fence();
      fence();
      *puVar7 = *puVar7 | 0x2000000;
      if (4 < uVar6) {
        uVar6 = 4;
        iVar2 = 0x20;
      }
      uVar4 = 0;
      for (uVar5 = 0; uVar5 != uVar6; uVar5 = uVar5 + 1) {
        uVar4 = uVar4 | (uint)*(byte *)(iVar3 + uVar5) << ((uVar5 & 3) << 3);
      }
      fence();
      *(uint *)(iVar1 + 0x48) = uVar4;
      fence();
      fence();
      *puVar7 = iVar2 << 8 | *puVar7 | 0x80000000;
      do {
        iVar3 = FUN_ram_4003bbfa(iVar1);
      } while (iVar3 == 0);
      do {
        fence();
        fence();
        *puVar7 = *puVar7 & 0xffffc0ff | 0x2000000;
        FUN_ram_4003f052(1);
        fence();
      } while ((*puVar7 & 0x2000000) != 0);
    }
    iVar3 = param_2[1];
    if (iVar3 != 0) {
      iVar2 = param_2[2];
      puVar7 = (uint *)(iVar1 + 0x40);
      fence();
      fence();
      *puVar7 = *puVar7 | 0x2000000;
      uVar6 = iVar2 + 7U >> 3;
      if (4 < uVar6) {
        uVar6 = 4;
        iVar2 = 0x20;
      }
      fence();
      fence();
      *puVar7 = iVar2 << 0x10 | *puVar7 | 0x80000000;
      do {
        iVar9 = FUN_ram_4003bbfa(iVar1);
      } while (iVar9 == 0);
      do {
        iVar9 = FUN_ram_4003bc12(iVar1);
      } while (iVar9 == 0);
      uVar4 = *(uint *)(iVar1 + 0x4c);
      fence();
      for (uVar5 = 0; uVar5 != uVar6; uVar5 = uVar5 + 1) {
        *(char *)(iVar3 + uVar5) = (char)(uVar4 >> ((uVar5 & 3) << 3));
      }
    }
  }
  return iVar2;
}


