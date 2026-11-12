/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40049000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x400491a0.
 * REA evidence: ev_1f4a147036ff15162a90ec01058adb3891e24eaedcc10e4e5618674eeb83bba4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400491a0(void)

{
  FUN_ram_4004a3cc(0x3007f98c,0x58);
  _DAT_ram_3007f988 = FUN_ram_4004b642(FUN_ram_40048ffc,10,0);
  FUN_ram_40048f34();
  _DAT_ram_3007f984 = 0;
  return;
}


/* NanoCore 1.10, address 0x400491e2.
 * REA evidence: ev_1bddd7d2095e3f1fb009d1c1b86cb08863360e1d63da0383a3b488e744a3f6a2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400491e2(int param_1)

{
  thunk_FUN_ram_4000505c(param_1,0,0x58);
  *(undefined4 *)(param_1 + 0x30) = 500;
  *(undefined4 *)(param_1 + 0x2c) = 100;
  *(undefined2 *)(param_1 + 0x44) = 1;
  *(code **)(param_1 + 0x20) = FUN_ram_40048e1c;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(byte *)(param_1 + 0x4e) = *(byte *)(param_1 + 0x4e) | 1;
  return;
}


/* NanoCore 1.10, address 0x40049228.
 * REA evidence: ev_f3ed0e14f40d6f9e85b9d2cb667e4664b9d336ca55ce9f01e502cfb8788fead8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 * FUN_ram_40049228(undefined4 *param_1)

{
  undefined4 *__dest;
  undefined4 uVar1;
  int iVar2;
  
  __dest = (undefined4 *)FUN_ram_4004a3dc(0x3007f98c);
  if (__dest != (undefined4 *)0x0) {
    memcpy(__dest,param_1,0x58);
    if ((void *)*param_1 == param_1) {
      *__dest = __dest;
    }
    *(byte *)(__dest + 0x15) = *(byte *)(__dest + 0x15) & 0xfd | (DAT_ram_3007f985 & 1) << 1;
    uVar1 = FUN_ram_40055cfa();
    __dest[0x14] = uVar1;
    if ((*(byte *)((int)__dest + 0x4e) & 1) != 0) {
      if ((code *)__dest[6] != (code *)0x0) {
        iVar2 = (*(code *)__dest[6])(__dest);
        __dest[9] = __dest[9] + iVar2;
        __dest[0xb] = __dest[0xb] + iVar2;
      }
      FUN_ram_40048ee6(__dest);
      if ((param_1[1] != 0) || (param_1[2] != 0)) {
        FUN_ram_40048f70(__dest);
      }
      if ((code *)__dest[1] != (code *)0x0) {
        (*(code *)__dest[1])(*__dest,__dest[9]);
      }
      if ((code *)__dest[2] != (code *)0x0) {
        (*(code *)__dest[2])(__dest,__dest[9]);
      }
    }
    FUN_ram_40048f34();
  }
  return __dest;
}


/* NanoCore 1.10, address 0x400492c8.
 * REA evidence: ev_461d978c66be769e6da198d3ba823c68851bb65d5cdf387e03e938202e8882ca
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400492c8(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_ram_4004a5a6(0x3007f98c);
  uVar2 = 0;
  while (piVar1 != (int *)0x0) {
    if (((*piVar1 == param_1) || (param_1 == 0)) && ((piVar1[1] == param_2 || (param_2 == 0)))) {
      FUN_ram_4004a4e8(0x3007f98c,piVar1);
      if ((code *)piVar1[5] != (code *)0x0) {
        (*(code *)piVar1[5])(piVar1);
      }
      FUN_ram_40059be4(piVar1);
      FUN_ram_40048f34();
      piVar1 = (int *)FUN_ram_4004a5a6(0x3007f98c);
      uVar2 = 1;
    }
    else {
      piVar1 = (int *)FUN_ram_4004a5b2(0x3007f98c,piVar1);
    }
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x4004934c.
 * REA evidence: ev_eb14c93fbe7f52cff6a786b6f208931878bd80ef64253d6c8f2443139c76cf86
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004934c(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_ram_4004a5a6(0x3007f98c);
  while ((piVar1 != (int *)0x0 &&
         ((*piVar1 != param_1 || ((piVar1[1] != param_2 && (param_2 != 0))))))) {
    piVar1 = (int *)FUN_ram_4004a5b2(0x3007f98c,piVar1);
  }
  return;
}


/* NanoCore 1.10, address 0x40049394.
 * REA evidence: ev_32a3d4d5c6ec200116a57524785ab183ebfe2bf6f0bde0c9d592924085111e64
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400493ce) */
/* WARNING: Removing unreachable block (ram,0x400493c6) */
/* WARNING: Removing unreachable block (ram,0x400493d4) */

int FUN_ram_40049394(uint param_1,uint param_2,uint param_3)

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


/* NanoCore 1.10, address 0x400493e2.
 * REA evidence: ev_36e8475cf34a8e308225cdf435e3019f590112fe649ba5cad469134fc3051c32
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400493e2(void)

{
  FUN_ram_40048ffc(0);
  return;
}


/* NanoCore 1.10, address 0x400493f8.
 * REA evidence: ev_c98fd38365e1240d58888050dd34361fe4221059620f67cf6bef5ef7bbfabc20
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40049402) */

bool FUN_ram_400493f8(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (param_1[2] - *param_1) / 2;
  iVar2 = *param_2 - (*param_1 + iVar3);
  iVar1 = param_2[1] - (iVar3 + param_1[1]);
  return (uint)(iVar1 * iVar1 + iVar2 * iVar2) <= (uint)(iVar3 * iVar3);
}


/* NanoCore 1.10, address 0x4004942c.
 * REA evidence: ev_ca37e3cd87d9450930ee3598dfac7f5b237e0970a5df1924e856be7e5468e12d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004942c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return;
}


/* NanoCore 1.10, address 0x40049436.
 * REA evidence: ev_70c8a237643b2a1348cf9dd13c4883de753f01d6dacbff4170aca424427b0394
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40049436(int *param_1,int param_2)

{
  param_1[2] = param_2 + *param_1 + -1;
  return;
}


/* NanoCore 1.10, address 0x40049440.
 * REA evidence: ev_64c22e2263b82ebde1e68567d7e219ea89c2d08a903ef03636b192a31b5a8d72
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40049440(int param_1,int param_2)

{
  *(int *)(param_1 + 0xc) = param_2 + *(int *)(param_1 + 4) + -1;
  return;
}


/* NanoCore 1.10, address 0x4004944a.
 * REA evidence: ev_206afa91d72fdead7e2fda03e5bd868049914b709160fd914ec19b8704f20171
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004944a(int *param_1)

{
  return ((param_1[2] - *param_1) + 1) * ((param_1[3] - param_1[1]) + 1);
}


/* NanoCore 1.10, address 0x40049460.
 * REA evidence: ev_531549aa5c8351f52330c3f904eb0e8abae0ebc1d76d00335163ab28f08fb8a6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40049460(int *param_1,int param_2,int param_3)

{
  param_1[2] = param_1[2] + param_2;
  *param_1 = *param_1 - param_2;
  param_1[1] = param_1[1] - param_3;
  param_1[3] = param_1[3] + param_3;
  return;
}


/* NanoCore 1.10, address 0x4004947a.
 * REA evidence: ev_22aa7a2f755283de88471f2ffea6430fcb2915c4fe758315550c92f81ebe590c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004947a(int *param_1,int param_2,int param_3)

{
  param_1[2] = param_1[2] + param_2;
  *param_1 = *param_1 + param_2;
  param_1[1] = param_1[1] + param_3;
  param_1[3] = param_1[3] + param_3;
  return;
}


/* NanoCore 1.10, address 0x40049494.
 * REA evidence: ev_b6d83ddc0d451656f2924e4298b18c3e32e82b1b3256574aab39ae76d08e2daa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40049494(int *param_1,int *param_2,int *param_3)

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


/* NanoCore 1.10, address 0x400494e0.
 * REA evidence: ev_74fcdb9bf7877af3ca366d3732361b3fc3a848a8febd68200f5144b7789ad08b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400494e0(int *param_1,int *param_2,int *param_3)

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


/* NanoCore 1.10, address 0x4004951a.
 * REA evidence: ev_499fc659dabc4b7779fa803c0bbcf18b4f70a7e022088cf576db694f94d92252
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004951a(int *param_1,int *param_2,int param_3)

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
  iVar2 = FUN_ram_4004951a(&local_40,param_2,0);
  if (iVar2 == 0) {
    iStack_3c = iVar8 - iVar1;
    iStack_34 = iVar8;
    iVar2 = FUN_ram_4004951a(&local_40,param_2,0);
    if (iVar2 == 0) {
      iVar4 = iVar7 - iVar1;
      local_40 = iVar4;
      iStack_38 = iVar7;
      iVar7 = FUN_ram_4004951a(&local_40,param_2,0);
      if (iVar7 == 0) {
        iStack_3c = iVar6;
        iStack_34 = iVar5;
        iVar7 = FUN_ram_4004951a(&local_40,param_2,0);
        if (iVar7 == 0) {
          return 1;
        }
        local_40 = iVar4 - iVar1;
        goto LAB_ram_400495b0;
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
LAB_ram_400495b0:
    iStack_34 = iVar1 + iVar5;
  }
  uVar3 = FUN_ram_400493f8(&local_40,param_2);
  return uVar3;
}


/* NanoCore 1.10, address 0x4004960e.
 * REA evidence: ev_170204d0265742b9ef88555dbcd7a8f4dff8a64874fdfd852b3d33e38848c347
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004960e(int *param_1,int *param_2)

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


/* NanoCore 1.10, address 0x4004963c.
 * REA evidence: ev_5c7f28ca51171fe161c5be97c25ee6567d244de7bd8eddd1c5486bdb1445a314
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004963c(int *param_1,int *param_2,int param_3)

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
    iVar1 = FUN_ram_4004951a(param_2,&iStack_28);
    if (((iVar1 != 0) &&
        (iStack_28 = iVar3, iVar1 = FUN_ram_4004951a(param_2,&iStack_28,param_3), iVar1 != 0)) &&
       (iStack_28 = iVar4, iStack_24 = iVar5, iVar4 = FUN_ram_4004951a(param_2,&iStack_28,param_3),
       iVar4 != 0)) {
      iStack_28 = iVar3;
      uVar2 = FUN_ram_4004951a(param_2,&iStack_28,param_3);
      return uVar2;
    }
  }
  return 0;
}


/* NanoCore 1.10, address 0x400496c4.
 * REA evidence: ev_a731be679363ec93def2b272b72b97fedf95e37c0bb1dacee096bbbc938d9836
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_400496c4(int *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar2 = FUN_ram_4004960e(param_2,param_3);
  uVar8 = 0xffffffff;
  if (iVar2 != 0) {
    iVar2 = FUN_ram_4004963c(param_2,param_3,0);
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


/* NanoCore 1.10, address 0x400497d0.
 * REA evidence: ev_a44dc2d2e5f724400d564bbb153956c2af0b75a6e61ac78402235577a689136e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

byte FUN_ram_400497d0(int *param_1,int *param_2,int param_3)

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
          (iStack_28 = iVar4, iVar2 = FUN_ram_4004951a(param_2,&iStack_28), iVar2 == 0)) &&
         ((iStack_28 = iVar3, iVar2 = FUN_ram_4004951a(param_2,&iStack_28,param_3), iVar2 == 0 &&
          (iStack_28 = iVar4, iStack_24 = iVar5,
          iVar5 = FUN_ram_4004951a(param_2,&iStack_28,param_3), iVar5 == 0)))) {
        iStack_28 = iVar3;
        bVar1 = FUN_ram_4004951a(param_2,&iStack_28,param_3);
        return bVar1 ^ 1;
      }
      bVar1 = 0;
    }
  }
  return bVar1;
}


/* NanoCore 1.10, address 0x40049866.
 * REA evidence: ev_f344434be28c193a4468d3ecca043c05c8abdc9cb8af10d5a7a668e2c42e5f61
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400499ba) */
/* WARNING: Removing unreachable block (ram,0x40049924) */
/* WARNING: Removing unreachable block (ram,0x40049928) */
/* WARNING: Removing unreachable block (ram,0x40049972) */
/* WARNING: Removing unreachable block (ram,0x4004996e) */
/* WARNING: Removing unreachable block (ram,0x4004998a) */
/* WARNING: Removing unreachable block (ram,0x4004998e) */
/* WARNING: Removing unreachable block (ram,0x400498b4) */
/* WARNING: Removing unreachable block (ram,0x400498aa) */
/* WARNING: Removing unreachable block (ram,0x400498c2) */
/* WARNING: Removing unreachable block (ram,0x40049952) */
/* WARNING: Removing unreachable block (ram,0x4004994e) */
/* WARNING: Removing unreachable block (ram,0x400498f2) */
/* WARNING: Removing unreachable block (ram,0x400498f6) */
/* WARNING: Removing unreachable block (ram,0x400499be) */
/* WARNING: Removing unreachable block (ram,0x400498c6) */

void FUN_ram_40049866(int *param_1,int *param_2,char param_3,int param_4,int param_5)

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
    goto LAB_ram_400498fc;
  case '\x01':
    uVar7 = (param_1[2] - iVar5) - uVar7;
    goto LAB_ram_400498fc;
  case '\x02':
    uVar3 = (param_1[3] - iVar4) - uVar3;
    break;
  case '\x03':
    iVar2 = ((param_1[2] - iVar5) + 1) / 2;
    uVar7 = iVar6 / 2;
    goto LAB_ram_4004992c;
  case '\x04':
    iVar2 = param_1[2] - iVar5;
LAB_ram_4004992c:
    uVar7 = iVar2 - uVar7;
    goto LAB_ram_40049930;
  case '\x05':
    uVar3 = ((param_1[3] - iVar4) + 1) / 2 - iVar1 / 2;
    break;
  case '\x06':
    uVar7 = (param_1[2] - iVar5) - uVar7;
    goto LAB_ram_40049964;
  case '\a':
    uVar7 = ((param_1[2] - iVar5) + 1) / 2 - iVar6 / 2;
    uVar3 = ((param_1[3] - iVar4) + 1) / 2 - iVar1 / 2;
    goto LAB_ram_400498ce;
  case '\b':
    uVar3 = ~uVar3;
    break;
  case '\t':
    uVar7 = ((param_1[2] - iVar5) + 1) / 2 - iVar6 / 2;
    goto LAB_ram_40049994;
  case '\n':
    uVar7 = (param_1[2] - iVar5) - uVar7;
LAB_ram_40049994:
    uVar3 = ~uVar3;
    goto LAB_ram_400498ce;
  case '\v':
    uVar3 = (param_1[3] - iVar4) + 1;
    break;
  case '\f':
    uVar7 = ((param_1[2] - iVar5) + 1) / 2 - iVar6 / 2;
    goto LAB_ram_400499c4;
  case '\r':
    uVar7 = (param_1[2] - iVar5) - uVar7;
LAB_ram_400499c4:
    uVar3 = (param_1[3] - iVar4) + 1;
    goto LAB_ram_400498ce;
  case '\x0e':
    uVar7 = ~uVar7;
    goto LAB_ram_400498fc;
  case '\x0f':
    uVar7 = ~uVar7;
    goto LAB_ram_40049964;
  case '\x10':
    uVar7 = ~uVar7;
    goto LAB_ram_40049930;
  case '\x11':
    uVar7 = (param_1[2] - iVar5) + 1;
LAB_ram_400498fc:
    uVar3 = 0;
    goto LAB_ram_400498ce;
  case '\x12':
    uVar7 = (param_1[2] - iVar5) + 1;
LAB_ram_40049964:
    uVar3 = ((param_1[3] - iVar4) + 1) / 2 - iVar1 / 2;
    goto LAB_ram_400498ce;
  case '\x13':
    uVar7 = (param_1[2] - iVar5) + 1;
LAB_ram_40049930:
    uVar3 = (param_1[3] - iVar4) - uVar3;
    goto LAB_ram_400498ce;
  default:
    uVar3 = 0;
  }
  uVar7 = 0;
LAB_ram_400498ce:
  param_4 = param_4 + uVar7 + iVar5;
  param_5 = param_5 + uVar3 + iVar4;
  *param_2 = param_4;
  param_2[1] = param_5;
  param_2[2] = param_4 + iVar6 + -1;
  param_2[3] = param_5 + iVar1 + -1;
  return;
}


/* NanoCore 1.10, address 0x40049a0e.
 * REA evidence: ev_04d5b307a798521ffbfa5f29380f04bc86baf204ea79d43cb85736b82cdaa8c0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40049b2c) */
/* WARNING: Removing unreachable block (ram,0x40049abc) */
/* WARNING: Removing unreachable block (ram,0x40049b30) */

void FUN_ram_40049a0e(int *param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,
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
      iVar4 = FUN_ram_4004a64a((int)(short)iVar6);
      iVar2 = FUN_ram_4004a64a((iVar6 + 1) * 0x10000 >> 0x10);
      iVar3 = FUN_ram_4004a64a((iVar6 + 0x5a) * 0x10000 >> 0x10);
      iVar6 = FUN_ram_4004a64a((iVar6 + 0x5b) * 0x10000 >> 0x10);
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


/* NanoCore 1.10, address 0x40049bd2.
 * REA evidence: ev_b8e0101996d8d4ebe57184ba3ee9e415597464a42dea7a912c89b2d0d4275c80
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40049bd2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6)

{
  FUN_ram_40049a0e(param_1,1,param_2,param_3,param_4,param_5,param_6);
  return;
}


/* NanoCore 1.10, address 0x40049be2.
 * REA evidence: ev_4be9cf02f204bc897566d2b5cd213990d4a603ca4615e47db5b2a89cf6a385c8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40049be2(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  param_1[1] = 0;
  param_1[2] = param_2;
  param_1[3] = param_3;
  uVar1 = FUN_ram_40059bae(param_2 * param_3);
  *param_1 = uVar1;
  return;
}


/* NanoCore 1.10, address 0x40049c04.
 * REA evidence: ev_a4b28ec9b9ab3a427a080e7519b9311a98be27dfb1cc67afc35aa27ce2b5fbde
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40049c04(int *param_1)

{
  if (*param_1 != 0) {
    FUN_ram_40059be4();
    *param_1 = 0;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


/* NanoCore 1.10, address 0x40049c28.
 * REA evidence: ev_d454031d523f74bf06e71693d5f6935e87831c256ceda0e86cd2fba5cb82f5a3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40049c28(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_40059bf6(*param_1,param_2 * param_1[3]);
  *param_1 = uVar1;
  param_1[2] = param_2;
  if (param_2 < (uint)param_1[1]) {
    param_1[1] = param_2;
  }
  return;
}


/* NanoCore 1.10, address 0x40049c56.
 * REA evidence: ev_477a6933d7526847d029e7fa4ebf97516fade3799cb75187ad59b7fb70854e2f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40049c56(int *param_1,void *param_2)

{
  if (param_1[1] == param_1[2]) {
    FUN_ram_40049c28(param_1,param_1[1] + 1);
  }
  memcpy((void *)(*param_1 + param_1[3] * param_1[1]),param_2,param_1[3]);
  param_1[1] = param_1[1] + 1;
  return 1;
}


/* NanoCore 1.10, address 0x40049c92.
 * REA evidence: ev_24d9f2273767cffea8e5f0810e7fa09d524ee8a20add6e228052014c7e0b7466
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40049c92(int *param_1,uint param_2)

{
  if (param_2 < (uint)param_1[1]) {
    return *param_1 + param_2 * param_1[3];
  }
  return 0;
}


/* NanoCore 1.10, address 0x40049ca6.
 * REA evidence: ev_b917d15676989a56b513bb85da449ee36c5bf162b5006e533323e969d129caf9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40049ca6(int param_1)

{
  undefined4 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  UNRECOVERED_JUMPTABLE = (code *)*puVar1;
  uVar2 = puVar1[1];
  FUN_ram_4004b6a8();
  FUN_ram_40059be4(puVar1);
                    /* WARNING: Could not recover jumptable at 0x40049cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}


/* NanoCore 1.10, address 0x40049cd2.
 * REA evidence: ev_91aa64fbb4b6aaf5ebf68a2451e64e7b2292d0d97190c0e55c2917deba0e8719
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40049cd2(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_ram_40059bae(8);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = FUN_ram_4004b642(FUN_ram_40049ca6,0,puVar1);
    if (iVar2 != 0) {
      *puVar1 = param_1;
      puVar1[1] = param_2;
      FUN_ram_4004b8ca(iVar2,1);
      return 1;
    }
    FUN_ram_40059be4(puVar1);
  }
  return 0;
}


/* NanoCore 1.10, address 0x40049d20.
 * REA evidence: ev_8f54bca080c38154a9ff58f4358457c9006e6b640120e750c69d5da45fc24379
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40049d20(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = FUN_ram_4004b8e6(0);
  uVar4 = 0;
  while (iVar1 = iVar3, iVar1 != 0) {
    iVar3 = FUN_ram_4004b8e6(iVar1);
    if (((*(code **)(iVar1 + 8) == FUN_ram_40049ca6) &&
        (piVar2 = *(int **)(iVar1 + 0xc), *piVar2 == param_1)) && (piVar2[1] == param_2)) {
      FUN_ram_4004b6a8(iVar1);
      FUN_ram_40059be4(piVar2);
      uVar4 = 1;
    }
  }
  return uVar4;
}


/* NanoCore 1.10, address 0x40049d8e.
 * REA evidence: ev_309f44dd57e95edc27de4b4a14216c64fffddaf563365ff35d461581239152d7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40049d8e(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 6U & 0xff;
  if (uVar1 < 0xf) {
    return (&DAT_ram_40097604)[uVar1];
  }
  return 0;
}


/* NanoCore 1.10, address 0x40049dac.
 * REA evidence: ev_bbd5fc50c63151647b8d5a425306383d7784df369b44a5be14f9dd196a5fefc6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40049dac(uint param_1)

{
  if (param_1 < 0x15) {
    return (1 << (param_1 & 0x1f) & 0x117f80U) != 0;
  }
  return false;
}


/* NanoCore 1.10, address 0x40049dcc.
 * REA evidence: ev_100fe62feb26edbab088423f5e60846bbac647aade17019c635005c38d4181d2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40049dcc(uint param_1,int param_2)

{
  return param_1 & 0xffffff | param_2 << 0x18;
}


/* NanoCore 1.10, address 0x40049dee.
 * REA evidence: ev_1a6d1f64b50984713b65eec33cd001698717282183e8f01d2a4999e4e5cf513b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40049dee(uint param_1)

{
  return ((param_1 & 0xff) >> 3) +
         (((param_1 & 0xffffff) >> 0x10 & 0xfffff8) << 8 | param_1 >> 5 & 0x7e0);
}


/* NanoCore 1.10, address 0x40049e12.
 * REA evidence: ev_a05778502b8d8b6749d83d95e144e7bf65d88ada65fbc7b96a1add5a8f605934
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40049e12(uint param_1)

{
  return ((param_1 & 0xff) - 0x1000000) + (param_1 & 0xff0000) + (param_1 & 0xff00);
}


/* NanoCore 1.10, address 0x40049e34.
 * REA evidence: ev_58f2e8bed969b2f675db0ba335d31b097200c271186fcf55da7e296b042390fa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40049e34(int param_1)

{
  *(int *)(param_1 + 0x14) = _DAT_ram_3007f94c;
  _DAT_ram_3007f94c = param_1;
  return;
}


/* NanoCore 1.10, address 0x40049e44.
 * REA evidence: ev_96a43070d4737318bbdc310bdda4ac56d250bf3726509689afbd86eb3bef5998
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40049e44(int param_1)

{
  _DAT_ram_3007f94c = *(undefined4 *)(param_1 + 0x14);
  return;
}


/* NanoCore 1.10, address 0x40049e50.
 * REA evidence: ev_40e91dd513ef414443ac1a38db28eaf27ecf2758416a6ea810c4f1758b65495e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

byte FUN_ram_40049e50(int param_1,int param_2,uint param_3)

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
  iVar3 = FUN_ram_40049c92(param_1,0);
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


/* NanoCore 1.10, address 0x40049ed6.
 * REA evidence: ev_b13ebc1bc91c968f9135b551d356b31058f6d07a06405c72e3a84f6d6a71240e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 * FUN_ram_40049ed6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *apuStack_14 [3];
  
  apuStack_14[0] = (undefined4 *)FUN_ram_40059bae(0xc);
  iVar1 = *(int *)(param_1 + 4);
  *apuStack_14[0] = param_2;
  apuStack_14[0][2] = param_3;
  apuStack_14[0][1] = param_4;
  if (iVar1 == 0) {
    FUN_ram_40049be2(param_1,1,4);
  }
  FUN_ram_40049c56(param_1,apuStack_14);
  return apuStack_14[0];
}


/* NanoCore 1.10, address 0x40049f18.
 * REA evidence: ev_72e1c7d68fcd4da50e68c96d1ec0ca707487432fd4476588f44bc90853c3e424
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40049f18(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  iVar2 = FUN_ram_40049c92(param_1,0);
  for (iVar1 = 0; iVar1 < iVar3; iVar1 = iVar1 + 1) {
    FUN_ram_40059be4(*(undefined4 *)(iVar2 + iVar1 * 4));
  }
  FUN_ram_40049c04(param_1);
  return;
}


/* NanoCore 1.10, address 0x40049f56.
 * REA evidence: ev_abc0dffdd208127d541bd74326956d031019e7eae800432c8a4d0225f41b63f0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40049f56(undefined4 *param_1)

{
  return *param_1;
}


/* NanoCore 1.10, address 0x40049f5a.
 * REA evidence: ev_43ba065902b053e7143eded7c39dc6d5ac2702cac74cdce13bc2046ed5e1c888
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40049f5a(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


/* NanoCore 1.10, address 0x40049f5e.
 * REA evidence: ev_77ca9ab87d27b6b7e0b1bcbf153e82065321eefa06bb149b1f3d0e9ca8929dde
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40049f5e(int param_1)

{
  return *(uint *)(param_1 + 8) & 0xffff7fff;
}


/* NanoCore 1.10, address 0x40049f68.
 * REA evidence: ev_5ed5625808d01379ae86491653d16fb8f5366d4b1a80d25913ec59adccac32f2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40049f68(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


/* NanoCore 1.10, address 0x40049f6c.
 * REA evidence: ev_a58530e9d31bd0167ab9b2b6b99d7ad5bd043deeb110b2c987adece51470930f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40049f6c(int param_1)

{
  int *piVar1;
  
  for (piVar1 = _DAT_ram_3007f94c; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[5]) {
    if ((piVar1[1] == param_1) || (*piVar1 == param_1)) {
      *(byte *)(piVar1 + 6) = *(byte *)(piVar1 + 6) | 1;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x40049f94.
 * REA evidence: ev_23ef1428b43ef1f5bae0626264259e84d3325690636dc0fd1f8b5d27a01d5a40
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40049f94(void)

{
  FUN_ram_4004a3cc(0x3007fa54,4);
  return;
}


/* NanoCore 1.10, address 0x40049fa0.
 * REA evidence: ev_277499d2d016276ce7bbabe8479f58b1467147556fc618bc3da564a2a2597222
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40049fa0(undefined4 *param_1)

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
          FUN_ram_40059be4();
        }
        FUN_ram_40059be4(param_1[2]);
      }
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x40049ff2.
 * REA evidence: ev_5e0c850a5478bde974ab8f6756341a4efd92e4a0987709cd2f48025160464533
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40049ff2(undefined4 *param_1,void *param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *__src;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  code *pcVar7;
  uint uVar8;
  uint __n;
  uint uVar9;
  void *__src_00;
  int iVar10;
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
  uVar9 = *(uint *)(iVar2 + 4);
  uStack_38 = 0;
  if (uVar9 == 0) {
    iVar2 = (**(code **)(iVar2 + 0x14))(iVar2,*param_1,param_2,param_3,&uStack_38);
    goto LAB_ram_4004a0c2;
  }
  puVar4 = (uint *)param_1[2];
  uVar8 = puVar4[2];
  __src_00 = (void *)puVar4[3];
  if ((uVar8 < *puVar4) || (uVar6 = puVar4[1], uVar6 < uVar8)) {
    (**(code **)(iVar2 + 0x1c))(iVar2,*param_1,uVar8,0,puVar4,*(code **)(iVar2 + 0x1c));
    if (uVar9 < param_3) {
      pcVar7 = *(code **)(param_1[1] + 0x14);
      iVar2 = (*pcVar7)(param_1[1],*param_1,param_2,param_3,&uStack_38,pcVar7);
    }
    else {
      if (__src_00 == (void *)0x0) {
        iVar10 = param_1[2];
        uVar3 = FUN_ram_40059bae(uVar9);
        iVar2 = param_1[2];
        *(undefined4 *)(iVar10 + 0xc) = uVar3;
        __src_00 = *(void **)(iVar2 + 0xc);
      }
      pcVar7 = *(code **)(param_1[1] + 0x14);
      auStack_34[0] = 0;
      iVar2 = (*pcVar7)(param_1[1],*param_1,__src_00,uVar9,auStack_34,pcVar7);
      puVar4 = (uint *)param_1[2];
      *puVar4 = uVar8;
      uStack_38 = auStack_34[0];
      if (param_3 <= auStack_34[0]) {
        uStack_38 = param_3;
      }
      puVar4[1] = uVar8 + (auStack_34[0] - 1);
      memcpy(param_2,__src_00,uStack_38);
    }
LAB_ram_4004a0be:
    if (iVar2 != 0) goto LAB_ram_4004a0c2;
  }
  else {
    __n = (uVar6 - uVar8) + 1;
    __src = (void *)((((uVar6 + 1) - *puVar4) - __n) + (int)__src_00);
    uVar1 = param_3;
    if (((uVar9 != 0xffffffff) || (uVar1 = uVar6 - uVar8, __n < param_3)) &&
       (param_3 = uVar1, __n < uVar1)) {
      memcpy(param_2,__src,__n);
      (**(code **)(param_1[1] + 0x1c))(param_1[1],*param_1,*(int *)(param_1[2] + 4) + 1,0);
      iVar2 = param_1[1];
      auStack_34[0] = 0;
      uVar8 = uVar1 - __n;
      if (uVar9 < uVar8) {
        iVar2 = (**(code **)(iVar2 + 0x14))
                          (iVar2,*param_1,(void *)((int)param_2 + __n),uVar8,auStack_34);
      }
      else {
        iVar2 = (**(code **)(iVar2 + 0x14))(iVar2,*param_1,__src_00,uVar9,auStack_34);
        piVar5 = (int *)param_1[2];
        *piVar5 = piVar5[1] + 1;
        piVar5[1] = piVar5[1] + 1 + (auStack_34[0] - 1);
        uVar9 = auStack_34[0];
        if (uVar8 <= auStack_34[0]) {
          uVar9 = uVar8;
        }
        memcpy((void *)((int)param_2 + __n),__src_00,uVar9 & 0xffff);
      }
      uStack_38 = __n + auStack_34[0];
      if (uVar1 < __n + auStack_34[0]) {
        uStack_38 = uVar1;
      }
      goto LAB_ram_4004a0be;
    }
    memcpy(param_2,__src,param_3);
    uStack_38 = param_3;
  }
  iVar2 = 0;
  *(uint *)(param_1[2] + 8) = *(int *)(param_1[2] + 8) + uStack_38;
LAB_ram_4004a0c2:
  if (param_4 != (uint *)0x0) {
    *param_4 = uStack_38;
  }
  return iVar2;
}


