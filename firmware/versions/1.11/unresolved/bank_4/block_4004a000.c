/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4004a000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4004a112.
 * REA evidence: ev_58367f577fc108aa091526ae681b5a4af6c0f7a6092dc5dc30ed04109cc98eb4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004a112(void)

{
  FUN_ram_4004b33e(0x30080d0c,0x58);
  _DAT_ram_30080d08 = FUN_ram_4004c5b4(FUN_ram_40049f6e,10,0);
  FUN_ram_40049ea6();
  _DAT_ram_30080d04 = 0;
  return;
}


/* NanoCore 1.11, address 0x4004a154.
 * REA evidence: ev_96815ec310870752762d90171d82ae30e4a9c8b40fe521be3b486f9f1e83e644
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004a154(int param_1)

{
  thunk_FUN_ram_4000504c(param_1,0,0x58);
  *(undefined4 *)(param_1 + 0x30) = 500;
  *(undefined4 *)(param_1 + 0x2c) = 100;
  *(undefined2 *)(param_1 + 0x44) = 1;
  *(code **)(param_1 + 0x20) = FUN_ram_40049d8e;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(byte *)(param_1 + 0x4e) = *(byte *)(param_1 + 0x4e) | 1;
  return;
}


/* NanoCore 1.11, address 0x4004a19a.
 * REA evidence: ev_70793222497ab077e9bd4dee3cbe9642e40c73d46480101c425c076b76a76cbf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 * FUN_ram_4004a19a(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)FUN_ram_4004b34e(0x30080d0c);
  if (puVar1 != (undefined4 *)0x0) {
    thunk_FUN_ram_400050c6(puVar1,param_1,0x58);
    if ((int *)*param_1 == param_1) {
      *puVar1 = puVar1;
    }
    *(byte *)(puVar1 + 0x15) = *(byte *)(puVar1 + 0x15) & 0xfd | (DAT_ram_30080d05 & 1) << 1;
    uVar2 = FUN_ram_40056c6c();
    puVar1[0x14] = uVar2;
    if ((*(byte *)((int)puVar1 + 0x4e) & 1) != 0) {
      if ((code *)puVar1[6] != (code *)0x0) {
        iVar3 = (*(code *)puVar1[6])(puVar1);
        puVar1[9] = puVar1[9] + iVar3;
        puVar1[0xb] = puVar1[0xb] + iVar3;
      }
      FUN_ram_40049e58(puVar1);
      if ((param_1[1] != 0) || (param_1[2] != 0)) {
        FUN_ram_40049ee2(puVar1);
      }
      if ((code *)puVar1[1] != (code *)0x0) {
        (*(code *)puVar1[1])(*puVar1,puVar1[9]);
      }
      if ((code *)puVar1[2] != (code *)0x0) {
        (*(code *)puVar1[2])(puVar1,puVar1[9]);
      }
    }
    FUN_ram_40049ea6();
  }
  return puVar1;
}


/* NanoCore 1.11, address 0x4004a23a.
 * REA evidence: ev_bac6edaab58d782dcbd8d77f539fd2499b544a9286c416bde8ab7657223bf780
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004a23a(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_ram_4004b518(0x30080d0c);
  uVar2 = 0;
  while (piVar1 != (int *)0x0) {
    if (((*piVar1 == param_1) || (param_1 == 0)) && ((piVar1[1] == param_2 || (param_2 == 0)))) {
      FUN_ram_4004b45a(0x30080d0c,piVar1);
      if ((code *)piVar1[5] != (code *)0x0) {
        (*(code *)piVar1[5])(piVar1);
      }
      FUN_ram_4005ab56(piVar1);
      FUN_ram_40049ea6();
      piVar1 = (int *)FUN_ram_4004b518(0x30080d0c);
      uVar2 = 1;
    }
    else {
      piVar1 = (int *)FUN_ram_4004b524(0x30080d0c,piVar1);
    }
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x4004a2be.
 * REA evidence: ev_225af74fa8761afd1e124b279f5f706a28a36ab6a40a503f97b51a5cca9b5f70
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004a2be(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_ram_4004b518(0x30080d0c);
  while ((piVar1 != (int *)0x0 &&
         ((*piVar1 != param_1 || ((piVar1[1] != param_2 && (param_2 != 0))))))) {
    piVar1 = (int *)FUN_ram_4004b524(0x30080d0c,piVar1);
  }
  return;
}


/* NanoCore 1.11, address 0x4004a306.
 * REA evidence: ev_0df9531af3344528ea284a8d4d4bfc8abbffa17f92a19f1d4bb88f97771e1a0f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4004a340) */
/* WARNING: Removing unreachable block (ram,0x4004a338) */
/* WARNING: Removing unreachable block (ram,0x4004a346) */

int FUN_ram_4004a306(uint param_1,uint param_2,uint param_3)

{
  if (10000 < param_1) {
    param_1 = 0x27f6;
  }
  if (10000 < param_2) {
    param_2 = 0x27f6;
  }
  if (10000 < param_3) {
    param_3 = 0x27f6;
  }
  return ((param_3 + 5) / 10) * 0x100000 +
         ((param_2 + 5) / 10) * 0x400 + (param_1 + 5) / 10 + 0x80000000;
}


/* NanoCore 1.11, address 0x4004a354.
 * REA evidence: ev_9fed93dd2f6c0d96c621077b8e721c82610eb4324112d16a7cae911c83b51260
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004a354(void)

{
  FUN_ram_40049f6e(0);
  return;
}


/* NanoCore 1.11, address 0x4004a36a.
 * REA evidence: ev_815b0abf61c6df6c3888011dd72a340ed61d5bdbf57c8ea7682ae062695279cb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4004a374) */

bool FUN_ram_4004a36a(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (param_1[2] - *param_1) / 2;
  iVar2 = *param_2 - (*param_1 + iVar3);
  iVar1 = param_2[1] - (iVar3 + param_1[1]);
  return (uint)(iVar1 * iVar1 + iVar2 * iVar2) <= (uint)(iVar3 * iVar3);
}


/* NanoCore 1.11, address 0x4004a39e.
 * REA evidence: ev_f300bc52d23651e98e3a60b2f5eaa0138a78156a94e91357067904744b2de61e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004a39e(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return;
}


/* NanoCore 1.11, address 0x4004a3a8.
 * REA evidence: ev_fbf7058229b24443372b6df060f399c3f837d8bcea202ba0f3c1695eddb5fb3b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004a3a8(int *param_1,int param_2)

{
  param_1[2] = param_2 + *param_1 + -1;
  return;
}


/* NanoCore 1.11, address 0x4004a3b2.
 * REA evidence: ev_f31ddab888772c3845bda0ab4e380fcc08efa9b0b216434750b6ad89ff0ebe0e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004a3b2(int param_1,int param_2)

{
  *(int *)(param_1 + 0xc) = param_2 + *(int *)(param_1 + 4) + -1;
  return;
}


/* NanoCore 1.11, address 0x4004a3bc.
 * REA evidence: ev_b10d9a738cdbdc1ad2c75ddedf92b3ca8169b31290934765cbba70fd68c1af66
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004a3bc(int *param_1)

{
  return ((param_1[2] - *param_1) + 1) * ((param_1[3] - param_1[1]) + 1);
}


/* NanoCore 1.11, address 0x4004a3d2.
 * REA evidence: ev_928b8f2a46633c2ba36d8b66251c8d37af7f06fd822f3c0363f257ab451af55c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004a3d2(int *param_1,int param_2,int param_3)

{
  param_1[2] = param_1[2] + param_2;
  *param_1 = *param_1 - param_2;
  param_1[1] = param_1[1] - param_3;
  param_1[3] = param_1[3] + param_3;
  return;
}


/* NanoCore 1.11, address 0x4004a3ec.
 * REA evidence: ev_81ec46fdb7981b353d3158668ec37eeb44fbc970bf7674ee225317172c300c13
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004a3ec(int *param_1,int param_2,int param_3)

{
  param_1[2] = param_1[2] + param_2;
  *param_1 = *param_1 + param_2;
  param_1[1] = param_1[1] + param_3;
  param_1[3] = param_1[3] + param_3;
  return;
}


/* NanoCore 1.11, address 0x4004a406.
 * REA evidence: ev_cae81376f61152d2fd96068914c4ee1958afd5f0c585e2d5d676e48400f2adcf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004a406(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *param_3;
  if (*param_3 < *param_2) {
    iVar5 = *param_2;
  }
  iVar2 = param_2[1];
  iVar4 = param_3[1];
  *param_1 = iVar5;
  if (iVar4 < iVar2) {
    iVar4 = iVar2;
  }
  iVar3 = param_2[2];
  iVar2 = param_3[2];
  iVar1 = param_2[3];
  param_1[1] = iVar4;
  if (iVar3 < iVar2) {
    iVar2 = iVar3;
  }
  iVar3 = param_3[3];
  param_1[2] = iVar2;
  if (iVar1 < iVar3) {
    iVar3 = iVar1;
  }
  param_1[3] = iVar3;
  return iVar5 <= iVar2 && iVar4 <= iVar3;
}


/* NanoCore 1.11, address 0x4004a452.
 * REA evidence: ev_a3ff463197feb56cc690174d8a4406d503b5f6a97ef98d4703f9a4ad26b8a3ce
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004a452(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_3;
  if (*param_2 < *param_3) {
    iVar1 = *param_2;
  }
  *param_1 = iVar1;
  iVar1 = param_3[1];
  if (param_2[1] < param_3[1]) {
    iVar1 = param_2[1];
  }
  param_1[1] = iVar1;
  iVar1 = param_3[2];
  if (param_3[2] < param_2[2]) {
    iVar1 = param_2[2];
  }
  param_1[2] = iVar1;
  iVar1 = param_3[3];
  if (param_3[3] < param_2[3]) {
    iVar1 = param_2[3];
  }
  param_1[3] = iVar1;
  return;
}


/* NanoCore 1.11, address 0x4004a48c.
 * REA evidence: ev_bb5009fb8b0f28bbf8cd6dc2a6c53e8d1852a08fd273e40e60eee079554d9e60
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004a48c(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  local_40 = *param_1;
  if (*param_2 < local_40) {
    return 0;
  }
  iVar7 = param_1[2];
  if (iVar7 < *param_2) {
    return 0;
  }
  iVar6 = param_1[1];
  if (param_2[1] < iVar6) {
    return 0;
  }
  iVar8 = param_1[3];
  if (iVar8 < param_2[1]) {
    return 0;
  }
  if (param_3 < 1) {
    return 1;
  }
  iVar4 = (iVar8 - iVar6) + 1 >> 1;
  iVar1 = (iVar7 - local_40) + 1 >> 1;
  if (iVar4 < iVar1) {
    iVar1 = iVar4;
  }
  if (param_3 < iVar1) {
    iVar1 = param_3;
  }
  iVar4 = local_40 + iVar1;
  iVar5 = iVar6 + iVar1;
  iStack_3c = iVar6;
  iStack_38 = iVar4;
  iStack_34 = iVar5;
  iVar2 = FUN_ram_4004a48c(&local_40,param_2,0);
  if (iVar2 == 0) {
    iStack_3c = iVar8 - iVar1;
    iStack_34 = iVar8;
    iVar2 = FUN_ram_4004a48c(&local_40,param_2,0);
    if (iVar2 == 0) {
      iVar4 = iVar7 - iVar1;
      local_40 = iVar4;
      iStack_38 = iVar7;
      iVar7 = FUN_ram_4004a48c(&local_40,param_2,0);
      if (iVar7 == 0) {
        iStack_3c = iVar6;
        iStack_34 = iVar5;
        iVar7 = FUN_ram_4004a48c(&local_40,param_2,0);
        if (iVar7 == 0) {
          return 1;
        }
        local_40 = iVar4 - iVar1;
        goto LAB_ram_4004a522;
      }
      local_40 = iVar4 - iVar1;
    }
    else {
      iStack_38 = iVar4 + iVar1;
    }
    iStack_3c = (iVar8 - iVar1) - iVar1;
  }
  else {
    iStack_38 = iVar4 + iVar1;
LAB_ram_4004a522:
    iStack_34 = iVar1 + iVar5;
  }
  uVar3 = FUN_ram_4004a36a(&local_40,param_2);
  return uVar3;
}


/* NanoCore 1.11, address 0x4004a580.
 * REA evidence: ev_1bd98c27cdfe3b9a3bffe67ba1a12cb8073728dc8215d80ea5a6d90a81eeb987
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004a580(int *param_1,int *param_2)

{
  bool bVar1;
  
  if (param_2[2] < *param_1) {
    bVar1 = false;
  }
  else {
    bVar1 = false;
    if ((*param_2 <= param_1[2]) && (param_1[1] <= param_2[3])) {
      bVar1 = param_2[1] <= param_1[3];
    }
  }
  return bVar1;
}


/* NanoCore 1.11, address 0x4004a5ae.
 * REA evidence: ev_565d72fdab2e85abe6f782455791de97e59ebb88c97493caeaf611bf544671f4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004a5ae(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iStack_28;
  int iStack_24;
  
  iVar4 = *param_1;
  if ((((*param_2 <= iVar4) && (iStack_24 = param_1[1], param_2[1] <= iStack_24)) &&
      (iVar3 = param_1[2], iVar3 <= param_2[2])) && (iVar5 = param_1[3], iVar5 <= param_2[3])) {
    if (param_3 == 0) {
      return 1;
    }
    iStack_28 = iVar4;
    iVar1 = FUN_ram_4004a48c(param_2,&iStack_28);
    if (((iVar1 != 0) &&
        (iStack_28 = iVar3, iVar1 = FUN_ram_4004a48c(param_2,&iStack_28,param_3), iVar1 != 0)) &&
       (iStack_28 = iVar4, iStack_24 = iVar5, iVar4 = FUN_ram_4004a48c(param_2,&iStack_28,param_3),
       iVar4 != 0)) {
      iStack_28 = iVar3;
      uVar2 = FUN_ram_4004a48c(param_2,&iStack_28,param_3);
      return uVar2;
    }
  }
  return 0;
}


/* NanoCore 1.11, address 0x4004a636.
 * REA evidence: ev_8918c6e0a3594676875be475e68f1c63ce948854a0d71709bf349caab68830d3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4004a636(int *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar2 = FUN_ram_4004a580(param_2,param_3);
  uVar8 = 0xffffffff;
  if (iVar2 != 0) {
    iVar2 = FUN_ram_4004a5ae(param_2,param_3,0);
    uVar8 = 0;
    if (iVar2 == 0) {
      iVar6 = param_2[1];
      iVar4 = param_3[1];
      iVar3 = param_2[2];
      iVar2 = *param_2;
      iVar5 = param_2[3];
      bVar1 = 0 < iVar4 - iVar6;
      if (bVar1) {
        *param_1 = iVar2;
        param_1[1] = iVar6;
        param_1[2] = iVar3;
        param_1[3] = iVar4;
      }
      uVar8 = (uint)bVar1;
      iVar7 = param_3[3];
      iVar4 = (iVar5 - iVar6) - (iVar7 - param_2[1]);
      if ((0 < iVar4) && (iVar7 < param_2[3])) {
        iVar5 = param_2[2];
        param_1[uVar8 * 4] = *param_2;
        param_1[uVar8 * 4 + 1] = iVar7;
        param_1[uVar8 * 4 + 2] = iVar5;
        param_1[uVar8 * 4 + 3] = iVar7 + iVar4;
        uVar8 = (int)((uVar8 + 1) * 0x1000000) >> 0x18;
      }
      iVar5 = *param_3;
      iVar4 = param_2[1];
      if (param_2[1] < param_3[1]) {
        iVar4 = param_3[1];
      }
      iVar6 = param_2[3];
      if (param_3[3] < param_2[3]) {
        iVar6 = param_3[3];
      }
      if ((0 < iVar5 - *param_2) && (0 < iVar6 - iVar4)) {
        param_1[uVar8 * 4] = *param_2;
        param_1[uVar8 * 4 + 1] = iVar4;
        param_1[uVar8 * 4 + 2] = iVar5;
        param_1[uVar8 * 4 + 3] = iVar6;
        uVar8 = (int)((uVar8 + 1) * 0x1000000) >> 0x18;
      }
      iVar5 = param_3[2];
      iVar2 = (iVar3 - iVar2) - (iVar5 - *param_2);
      if (0 < iVar2) {
        param_1[uVar8 * 4] = iVar5;
        param_1[uVar8 * 4 + 1] = iVar4;
        param_1[uVar8 * 4 + 2] = iVar5 + iVar2;
        param_1[uVar8 * 4 + 3] = iVar6;
        uVar8 = (int)((uVar8 + 1) * 0x1000000) >> 0x18;
      }
    }
  }
  return uVar8;
}


/* NanoCore 1.11, address 0x4004a742.
 * REA evidence: ev_4341a80febb7166df4343bbdaba27912ad0ac653839b9be9824121772c3cf3a5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

byte FUN_ram_4004a742(int *param_1,int *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iStack_28;
  int iStack_24;
  
  iVar3 = param_1[2];
  if (iVar3 < *param_2) {
    bVar1 = 1;
  }
  else {
    iVar5 = param_1[3];
    bVar1 = 1;
    if (((param_2[1] <= iVar5) && (iVar4 = *param_1, iVar4 <= param_2[2])) &&
       (iStack_24 = param_1[1], iStack_24 <= param_2[3])) {
      if (((param_3 != 0) &&
          (iStack_28 = iVar4, iVar2 = FUN_ram_4004a48c(param_2,&iStack_28), iVar2 == 0)) &&
         ((iStack_28 = iVar3, iVar2 = FUN_ram_4004a48c(param_2,&iStack_28,param_3), iVar2 == 0 &&
          (iStack_28 = iVar4, iStack_24 = iVar5,
          iVar5 = FUN_ram_4004a48c(param_2,&iStack_28,param_3), iVar5 == 0)))) {
        iStack_28 = iVar3;
        bVar1 = FUN_ram_4004a48c(param_2,&iStack_28,param_3);
        return bVar1 ^ 1;
      }
      bVar1 = 0;
    }
  }
  return bVar1;
}


/* NanoCore 1.11, address 0x4004a7d8.
 * REA evidence: ev_edc2dff20c6cc53f076464e4fe20907a80871752061e8059b9bc1ed608d41aab
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4004a92c) */
/* WARNING: Removing unreachable block (ram,0x4004a896) */
/* WARNING: Removing unreachable block (ram,0x4004a89a) */
/* WARNING: Removing unreachable block (ram,0x4004a8e4) */
/* WARNING: Removing unreachable block (ram,0x4004a8e0) */
/* WARNING: Removing unreachable block (ram,0x4004a8fc) */
/* WARNING: Removing unreachable block (ram,0x4004a900) */
/* WARNING: Removing unreachable block (ram,0x4004a826) */
/* WARNING: Removing unreachable block (ram,0x4004a81c) */
/* WARNING: Removing unreachable block (ram,0x4004a834) */
/* WARNING: Removing unreachable block (ram,0x4004a8c4) */
/* WARNING: Removing unreachable block (ram,0x4004a8c0) */
/* WARNING: Removing unreachable block (ram,0x4004a864) */
/* WARNING: Removing unreachable block (ram,0x4004a868) */
/* WARNING: Removing unreachable block (ram,0x4004a930) */
/* WARNING: Removing unreachable block (ram,0x4004a838) */

void FUN_ram_4004a7d8(int *param_1,int *param_2,char param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = param_2[2] - *param_2;
  uVar3 = param_2[3] - param_2[1];
  iVar5 = *param_1;
  iVar4 = param_1[1];
  iVar1 = uVar3 + 1;
  iVar6 = uVar7 + 1;
  switch(param_3 + -2) {
  case '\0':
    uVar7 = ((param_1[2] - iVar5) + 1) / 2 - iVar6 / 2;
    goto LAB_ram_4004a86e;
  case '\x01':
    uVar7 = (param_1[2] - iVar5) - uVar7;
    goto LAB_ram_4004a86e;
  case '\x02':
    uVar3 = (param_1[3] - iVar4) - uVar3;
    break;
  case '\x03':
    iVar2 = ((param_1[2] - iVar5) + 1) / 2;
    uVar7 = iVar6 / 2;
    goto LAB_ram_4004a89e;
  case '\x04':
    iVar2 = param_1[2] - iVar5;
LAB_ram_4004a89e:
    uVar7 = iVar2 - uVar7;
    goto LAB_ram_4004a8a2;
  case '\x05':
    uVar3 = ((param_1[3] - iVar4) + 1) / 2 - iVar1 / 2;
    break;
  case '\x06':
    uVar7 = (param_1[2] - iVar5) - uVar7;
    goto LAB_ram_4004a8d6;
  case '\a':
    uVar7 = ((param_1[2] - iVar5) + 1) / 2 - iVar6 / 2;
    uVar3 = ((param_1[3] - iVar4) + 1) / 2 - iVar1 / 2;
    goto LAB_ram_4004a840;
  case '\b':
    uVar3 = ~uVar3;
    break;
  case '\t':
    uVar7 = ((param_1[2] - iVar5) + 1) / 2 - iVar6 / 2;
    goto LAB_ram_4004a906;
  case '\n':
    uVar7 = (param_1[2] - iVar5) - uVar7;
LAB_ram_4004a906:
    uVar3 = ~uVar3;
    goto LAB_ram_4004a840;
  case '\v':
    uVar3 = (param_1[3] - iVar4) + 1;
    break;
  case '\f':
    uVar7 = ((param_1[2] - iVar5) + 1) / 2 - iVar6 / 2;
    goto LAB_ram_4004a936;
  case '\r':
    uVar7 = (param_1[2] - iVar5) - uVar7;
LAB_ram_4004a936:
    uVar3 = (param_1[3] - iVar4) + 1;
    goto LAB_ram_4004a840;
  case '\x0e':
    uVar7 = ~uVar7;
    goto LAB_ram_4004a86e;
  case '\x0f':
    uVar7 = ~uVar7;
    goto LAB_ram_4004a8d6;
  case '\x10':
    uVar7 = ~uVar7;
    goto LAB_ram_4004a8a2;
  case '\x11':
    uVar7 = (param_1[2] - iVar5) + 1;
LAB_ram_4004a86e:
    uVar3 = 0;
    goto LAB_ram_4004a840;
  case '\x12':
    uVar7 = (param_1[2] - iVar5) + 1;
LAB_ram_4004a8d6:
    uVar3 = ((param_1[3] - iVar4) + 1) / 2 - iVar1 / 2;
    goto LAB_ram_4004a840;
  case '\x13':
    uVar7 = (param_1[2] - iVar5) + 1;
LAB_ram_4004a8a2:
    uVar3 = (param_1[3] - iVar4) - uVar3;
    goto LAB_ram_4004a840;
  default:
    uVar3 = 0;
  }
  uVar7 = 0;
LAB_ram_4004a840:
  param_4 = param_4 + uVar7 + iVar5;
  param_5 = param_5 + uVar3 + iVar4;
  *param_2 = param_4;
  param_2[1] = param_5;
  param_2[2] = param_4 + iVar6 + -1;
  param_2[3] = param_5 + iVar1 + -1;
  return;
}


/* NanoCore 1.11, address 0x4004a980.
 * REA evidence: ev_45d97a55edffc52a2ebd38f4255321bca8b5cb189187de4223cac92a6382ab15
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4004aa9e) */
/* WARNING: Removing unreachable block (ram,0x4004aa2e) */
/* WARNING: Removing unreachable block (ram,0x4004aaa2) */

void FUN_ram_4004a980(int *param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,
                     int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (((param_3 != 0) || (param_4 != 0x100)) || (param_5 != 0x100)) {
    for (iVar4 = 0; iVar4 != param_2; iVar4 = iVar4 + 1) {
      param_1[iVar4 * 2] = param_1[iVar4 * 2] - *param_6;
      param_1[iVar4 * 2 + 1] = param_1[iVar4 * 2 + 1] - param_6[1];
    }
    if (param_3 == 0) {
      for (iVar4 = 0; iVar4 != param_2; iVar4 = iVar4 + 1) {
        param_1[iVar4 * 2] = (param_4 * param_1[iVar4 * 2] >> 8) + *param_6;
        param_1[iVar4 * 2 + 1] = (param_5 * param_1[iVar4 * 2 + 1] >> 8) + param_6[1];
      }
    }
    else {
      if (param_3 < 0xe11) {
        if (param_3 < 0) {
          param_3 = param_3 + 0xe10;
        }
      }
      else {
        param_3 = param_3 + -0xe10;
      }
      iVar6 = param_3 / 10;
      param_3 = param_3 % 10;
      iVar4 = FUN_ram_4004b5bc((int)(short)iVar6);
      iVar2 = FUN_ram_4004b5bc((iVar6 + 1) * 0x10000 >> 0x10);
      iVar3 = FUN_ram_4004b5bc((iVar6 + 0x5a) * 0x10000 >> 0x10);
      iVar6 = FUN_ram_4004b5bc((iVar6 + 0x5b) * 0x10000 >> 0x10);
      iVar4 = (param_3 * iVar2 + (10 - param_3) * iVar4) / 10 >> 5;
      iVar2 = (param_3 * iVar6 + (10 - param_3) * iVar3) / 10 >> 5;
      for (iVar3 = 0; iVar3 != param_2; iVar3 = iVar3 + 1) {
        iVar6 = *param_1;
        iVar5 = param_1[1];
        iVar1 = *param_6;
        iVar7 = param_6[1];
        if ((param_4 == 0x100) && (param_5 == 0x100)) {
          *param_1 = (iVar2 * iVar6 - iVar4 * iVar5 >> 10) + iVar1;
          iVar6 = iVar2 * iVar5 + iVar4 * iVar6 >> 10;
        }
        else {
          if (param_7 == 0) {
            *param_1 = ((iVar2 * iVar6 - iVar4 * iVar5) * param_4 >> 0x12) + iVar1;
            iVar6 = (iVar2 * iVar5 + iVar4 * iVar6) * param_5;
          }
          else {
            *param_1 = (iVar2 * param_4 * iVar6 - iVar4 * param_5 * iVar5 >> 0x12) + iVar1;
            iVar6 = iVar2 * param_5 * iVar5 + iVar4 * param_4 * iVar6;
          }
          iVar6 = iVar6 >> 0x12;
        }
        param_1[1] = iVar6 + iVar7;
        param_1 = param_1 + 2;
      }
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4004ab44.
 * REA evidence: ev_297c6d97dddca98a6f3617632031e47de22a9bdf80675a9b53b986092466fa67
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004ab44(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6)

{
  FUN_ram_4004a980(param_1,1,param_2,param_3,param_4,param_5,param_6);
  return;
}


/* NanoCore 1.11, address 0x4004ab54.
 * REA evidence: ev_1d399ccfc9ffa4a2c404060a9dec163d1236d42eeba632389e5945facbdb24ea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004ab54(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  param_1[1] = 0;
  param_1[2] = param_2;
  param_1[3] = param_3;
  uVar1 = FUN_ram_4005ab20(param_2 * param_3);
  *param_1 = uVar1;
  return;
}


/* NanoCore 1.11, address 0x4004ab76.
 * REA evidence: ev_9d287328b5678e8e0ff87965a1c2e8f899f186839e0a12e8a69e0c37558abb18
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004ab76(int *param_1)

{
  if (*param_1 != 0) {
    FUN_ram_4005ab56();
    *param_1 = 0;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


/* NanoCore 1.11, address 0x4004ab9a.
 * REA evidence: ev_e46be4a05f82ffc9689b766f7736468d7df079521addf2ede9aee59665a12e76
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004ab9a(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_4005ab68(*param_1,param_2 * param_1[3]);
  *param_1 = uVar1;
  param_1[2] = param_2;
  if (param_2 < (uint)param_1[1]) {
    param_1[1] = param_2;
  }
  return;
}


/* NanoCore 1.11, address 0x4004abc8.
 * REA evidence: ev_b8a52dc7d7ff867961262ed9532f93356e1890d276175d21599e90cbd8f0853e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004abc8(int *param_1,undefined4 param_2)

{
  if (param_1[1] == param_1[2]) {
    FUN_ram_4004ab9a(param_1,param_1[1] + 1);
  }
  thunk_FUN_ram_400050c6(*param_1 + param_1[3] * param_1[1],param_2);
  param_1[1] = param_1[1] + 1;
  return 1;
}


/* NanoCore 1.11, address 0x4004ac04.
 * REA evidence: ev_1c83afda6e02d37bf475d7b76652f3c7f640bcac0f1d4970f8f15d426722ac92
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004ac04(int *param_1,uint param_2)

{
  if (param_2 < (uint)param_1[1]) {
    return *param_1 + param_2 * param_1[3];
  }
  return 0;
}


/* NanoCore 1.11, address 0x4004ac18.
 * REA evidence: ev_8f9066b8124f90c224bcddbfb62f7ac4fcf504559ee9a772c4135d45d4859548
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004ac18(int param_1)

{
  undefined4 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  UNRECOVERED_JUMPTABLE = (code *)*puVar1;
  uVar2 = puVar1[1];
  FUN_ram_4004c61a();
  FUN_ram_4005ab56(puVar1);
                    /* WARNING: Could not recover jumptable at 0x4004ac42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}


/* NanoCore 1.11, address 0x4004ac44.
 * REA evidence: ev_a4ea5071a4f599cbb3591123fb672c51b3e6276328fbf7fa5c8d84b2044ff555
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004ac44(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_ram_4005ab20(8);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = FUN_ram_4004c5b4(FUN_ram_4004ac18,0,puVar1);
    if (iVar2 != 0) {
      *puVar1 = param_1;
      puVar1[1] = param_2;
      FUN_ram_4004c83c(iVar2,1);
      return 1;
    }
    FUN_ram_4005ab56(puVar1);
  }
  return 0;
}


/* NanoCore 1.11, address 0x4004ac92.
 * REA evidence: ev_bbfdfb95076404c00d2130ab665ee144e79a5cc858472e0594491edeb7e17cf7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004ac92(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = FUN_ram_4004c858(0);
  uVar4 = 0;
  while (iVar1 = iVar3, iVar1 != 0) {
    iVar3 = FUN_ram_4004c858(iVar1);
    if (((*(code **)(iVar1 + 8) == FUN_ram_4004ac18) &&
        (piVar2 = *(int **)(iVar1 + 0xc), *piVar2 == param_1)) && (piVar2[1] == param_2)) {
      FUN_ram_4004c61a(iVar1);
      FUN_ram_4005ab56(piVar2);
      uVar4 = 1;
    }
  }
  return uVar4;
}


/* NanoCore 1.11, address 0x4004ad00.
 * REA evidence: ev_8085fd584cf416a8dbd4dba9a241763b33510127cd8d3097e05b2807364f6918
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4004ad00(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 6U & 0xff;
  if (uVar1 < 0xf) {
    return (&DAT_ram_40099480)[uVar1];
  }
  return 0;
}


/* NanoCore 1.11, address 0x4004ad1e.
 * REA evidence: ev_0f001b06978d1fd59679db7ec3ed7e48b932412ef121f24f405cb8ead43ab76b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004ad1e(uint param_1)

{
  if (param_1 < 0x15) {
    return (1 << (param_1 & 0x1f) & 0x117f80U) != 0;
  }
  return false;
}


/* NanoCore 1.11, address 0x4004ad3e.
 * REA evidence: ev_437a048acd966d69a4d3d34cff0c39265fc31729a8e9fcfc82ee27e890a2e053
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4004ad3e(uint param_1,int param_2)

{
  return param_1 & 0xffffff | param_2 << 0x18;
}


/* NanoCore 1.11, address 0x4004ad60.
 * REA evidence: ev_7c97113284399d15ca0306cef5768136de43a95f768a34c26f7deb5e72e39a2e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004ad60(uint param_1)

{
  return ((param_1 & 0xff) >> 3) +
         (((param_1 & 0xffffff) >> 0x10 & 0xfffff8) << 8 | param_1 >> 5 & 0x7e0);
}


/* NanoCore 1.11, address 0x4004ad84.
 * REA evidence: ev_5db5b9e99bf93a347a8528b9aeb284e0ae144b313bcd8f6b36c99fafdffbdaea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004ad84(uint param_1)

{
  return ((param_1 & 0xff) - 0x1000000) + (param_1 & 0xff0000) + (param_1 & 0xff00);
}


/* NanoCore 1.11, address 0x4004ada6.
 * REA evidence: ev_7411ee57e2027320071fc0ab859acbc5f698de2be3312ca318ccc89f052f855b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004ada6(int param_1)

{
  *(int *)(param_1 + 0x14) = _DAT_ram_30080ccc;
  _DAT_ram_30080ccc = param_1;
  return;
}


/* NanoCore 1.11, address 0x4004adb6.
 * REA evidence: ev_c44fb9cf1b44e5a4ed7575e7abb0c7a685ed7b2bc4ccd7bfe3a7d2425638c9dc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004adb6(int param_1)

{
  _DAT_ram_30080ccc = *(undefined4 *)(param_1 + 0x14);
  return;
}


/* NanoCore 1.11, address 0x4004adc2.
 * REA evidence: ev_07b1544726050292178b34bd8e2915c6b8df2acf86c57539ab2d6234adfa851b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

byte FUN_ram_4004adc2(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  
  if (param_1 == 0) {
    return 1;
  }
  iVar3 = FUN_ram_4004ac04(param_1,0);
  iVar6 = *(int *)(param_1 + 4);
  iVar2 = 0;
  do {
    if (iVar2 == iVar6) {
      return 1;
    }
    piVar4 = *(int **)(iVar3 + iVar2 * 4);
    if (((*piVar4 != 0) && ((piVar4[2] & 0xffffU) >> 0xf == param_3)) &&
       ((uVar5 = piVar4[2] & 0xffff7fff, uVar5 == 0 || (*(uint *)(param_2 + 8) == uVar5)))) {
      *(int *)(param_2 + 0xc) = piVar4[1];
      (*(code *)**(undefined4 **)(iVar3 + iVar2 * 4))(param_2);
      bVar1 = *(byte *)(param_2 + 0x18);
      if ((bVar1 & 2) != 0) {
        return 1;
      }
      if ((bVar1 & 1) != 0) {
        return bVar1 & 2;
      }
    }
    iVar2 = iVar2 + 1;
  } while( true );
}


/* NanoCore 1.11, address 0x4004adc8.
 * REA evidence: ev_4c76b26b8934380a37597f34e83a4d4ad39189e78a1a81779a4e6b9dc70230e1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

byte FUN_ram_4004adc8(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  
  iVar3 = FUN_ram_4004ac04(param_1,0);
  iVar6 = *(int *)(param_1 + 4);
  iVar2 = 0;
  do {
    if (iVar2 == iVar6) {
      return 1;
    }
    piVar4 = *(int **)(iVar3 + iVar2 * 4);
    if (((*piVar4 != 0) && ((piVar4[2] & 0xffffU) >> 0xf == param_3)) &&
       ((uVar5 = piVar4[2] & 0xffff7fff, uVar5 == 0 || (*(uint *)(param_2 + 8) == uVar5)))) {
      *(int *)(param_2 + 0xc) = piVar4[1];
      (*(code *)**(undefined4 **)(iVar3 + iVar2 * 4))(param_2);
      bVar1 = *(byte *)(param_2 + 0x18);
      if ((bVar1 & 2) != 0) {
        return 1;
      }
      if ((bVar1 & 1) != 0) {
        return bVar1 & 2;
      }
    }
    iVar2 = iVar2 + 1;
  } while( true );
}


/* NanoCore 1.11, address 0x4004ae48.
 * REA evidence: ev_f5cdc6c62c74df9bbd1a822c2519e4cecf8a808f2c7c553d5f2e43d2e386f13b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 * FUN_ram_4004ae48(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *apuStack_14 [3];
  
  apuStack_14[0] = (undefined4 *)FUN_ram_4005ab20(0xc);
  iVar1 = *(int *)(param_1 + 4);
  *apuStack_14[0] = param_2;
  apuStack_14[0][2] = param_3;
  apuStack_14[0][1] = param_4;
  if (iVar1 == 0) {
    FUN_ram_4004ab54(param_1,1,4);
  }
  FUN_ram_4004abc8(param_1,apuStack_14);
  return apuStack_14[0];
}


/* NanoCore 1.11, address 0x4004ae8a.
 * REA evidence: ev_f74dc18ee364147a9e71ea56ecff9f3371615293a7c77812a567fcb97d804fe7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004ae8a(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  iVar2 = FUN_ram_4004ac04(param_1,0);
  for (iVar1 = 0; iVar1 < iVar3; iVar1 = iVar1 + 1) {
    FUN_ram_4005ab56(*(undefined4 *)(iVar2 + iVar1 * 4));
  }
  FUN_ram_4004ab76(param_1);
  return;
}


/* NanoCore 1.11, address 0x4004aec8.
 * REA evidence: ev_62321469fc1d5c3f3b24a977c86a976eea443de26952139a4c3b59019cf9a553
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004aec8(undefined4 *param_1)

{
  return *param_1;
}


/* NanoCore 1.11, address 0x4004aecc.
 * REA evidence: ev_8d5b30a511e76582d50246110aa1cfa916fec298cc4e3d4e2f02e9b618236d12
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004aecc(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


/* NanoCore 1.11, address 0x4004aed0.
 * REA evidence: ev_e21e450d91fc09021b5370ef65aafe33621d83b2b68af477296447e6fed91483
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4004aed0(int param_1)

{
  return *(uint *)(param_1 + 8) & 0xffff7fff;
}


/* NanoCore 1.11, address 0x4004aeda.
 * REA evidence: ev_c2b363a84dbf6c42de260bb0097106135ce0dd68fa781266baeb441c16338e28
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004aeda(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


/* NanoCore 1.11, address 0x4004aede.
 * REA evidence: ev_24a7340090ce291893b05716758edd5f6c20709e534fe91fc8d57a31587e621f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004aede(int param_1)

{
  int *piVar1;
  
  for (piVar1 = _DAT_ram_30080ccc; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[5]) {
    if ((piVar1[1] == param_1) || (*piVar1 == param_1)) {
      *(byte *)(piVar1 + 6) = *(byte *)(piVar1 + 6) | 1;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4004af06.
 * REA evidence: ev_a042b9db9254a8c5d6f950470c9dc182636cd824d4cd37711581300ea216b68e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004af06(void)

{
  FUN_ram_4004b33e(0x30080dd4,4);
  return;
}


/* NanoCore 1.11, address 0x4004af12.
 * REA evidence: ev_9fa8b30a1bb47b3d337a6af0565ffb81167eba7f87cbdebd1b7ae4faed5bed1c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004af12(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  uVar1 = 0xb;
  if (iVar2 != 0) {
    uVar1 = 9;
    if (*(code **)(iVar2 + 0x10) != (code *)0x0) {
      uVar1 = (**(code **)(iVar2 + 0x10))(iVar2,*param_1);
      if ((*(int *)(param_1[1] + 4) != 0) && (param_1[2] != 0)) {
        if ((*(int *)(param_1[1] + 4) != -1) && (*(int *)(param_1[2] + 0xc) != 0)) {
          FUN_ram_4005ab56();
        }
        FUN_ram_4005ab56(param_1[2]);
      }
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x4004af64.
 * REA evidence: ev_40ceae3a31cac75d04556e702181b631ed4bde06c6406230ae7626e86ea4bcd7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004af64(undefined4 *param_1,int param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uStack_38;
  uint auStack_34 [4];
  
  if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
  iVar2 = param_1[1];
  if (iVar2 == 0) {
    return 0xb;
  }
  if (*(code **)(iVar2 + 0x14) == (code *)0x0) {
    return 9;
  }
  uVar10 = *(uint *)(iVar2 + 4);
  uStack_38 = 0;
  if (uVar10 == 0) {
    iVar2 = (**(code **)(iVar2 + 0x14))(iVar2,*param_1,param_2,param_3,&uStack_38);
    goto LAB_ram_4004b034;
  }
  puVar4 = (uint *)param_1[2];
  uVar8 = puVar4[2];
  uVar11 = puVar4[3];
  if ((uVar8 < *puVar4) || (uVar6 = puVar4[1], uVar6 < uVar8)) {
    (**(code **)(iVar2 + 0x1c))(iVar2,*param_1,uVar8,0,puVar4,*(code **)(iVar2 + 0x1c));
    if (uVar10 < param_3) {
      pcVar7 = *(code **)(param_1[1] + 0x14);
      iVar2 = (*pcVar7)(param_1[1],*param_1,param_2,param_3,&uStack_38,pcVar7);
    }
    else {
      if (uVar11 == 0) {
        iVar12 = param_1[2];
        uVar3 = FUN_ram_4005ab20(uVar10);
        iVar2 = param_1[2];
        *(undefined4 *)(iVar12 + 0xc) = uVar3;
        uVar11 = *(uint *)(iVar2 + 0xc);
      }
      pcVar7 = *(code **)(param_1[1] + 0x14);
      auStack_34[0] = 0;
      iVar2 = (*pcVar7)(param_1[1],*param_1,uVar11,uVar10,auStack_34,pcVar7);
      puVar4 = (uint *)param_1[2];
      *puVar4 = uVar8;
      uStack_38 = auStack_34[0];
      if (param_3 <= auStack_34[0]) {
        uStack_38 = param_3;
      }
      puVar4[1] = uVar8 + (auStack_34[0] - 1);
      thunk_FUN_ram_400050c6(param_2,uVar11);
    }
LAB_ram_4004b030:
    if (iVar2 != 0) goto LAB_ram_4004b034;
  }
  else {
    uVar9 = (uVar6 - uVar8) + 1;
    iVar2 = (((uVar6 + 1) - *puVar4) - uVar9) + uVar11;
    uVar1 = param_3;
    if (((uVar10 != 0xffffffff) || (uVar1 = uVar6 - uVar8, uVar9 < param_3)) &&
       (param_3 = uVar1, uVar9 < uVar1)) {
      thunk_FUN_ram_400050c6(param_2,iVar2,uVar9);
      (**(code **)(param_1[1] + 0x1c))(param_1[1],*param_1,*(int *)(param_1[2] + 4) + 1,0);
      iVar2 = param_1[1];
      auStack_34[0] = 0;
      uVar8 = uVar1 - uVar9;
      if (uVar10 < uVar8) {
        iVar2 = (**(code **)(iVar2 + 0x14))(iVar2,*param_1,param_2 + uVar9,uVar8,auStack_34);
      }
      else {
        iVar2 = (**(code **)(iVar2 + 0x14))(iVar2,*param_1,uVar11,uVar10,auStack_34);
        piVar5 = (int *)param_1[2];
        *piVar5 = piVar5[1] + 1;
        piVar5[1] = piVar5[1] + 1 + (auStack_34[0] - 1);
        uVar10 = auStack_34[0];
        if (uVar8 <= auStack_34[0]) {
          uVar10 = uVar8;
        }
        thunk_FUN_ram_400050c6(param_2 + uVar9,uVar11,uVar10 & 0xffff);
      }
      uStack_38 = uVar9 + auStack_34[0];
      if (uVar1 < uVar9 + auStack_34[0]) {
        uStack_38 = uVar1;
      }
      goto LAB_ram_4004b030;
    }
    thunk_FUN_ram_400050c6(param_2,iVar2,param_3);
    uStack_38 = param_3;
  }
  iVar2 = 0;
  *(uint *)(param_1[2] + 8) = *(int *)(param_1[2] + 8) + uStack_38;
LAB_ram_4004b034:
  if (param_4 != (uint *)0x0) {
    *param_4 = uStack_38;
  }
  return iVar2;
}


