/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40037000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4003712e.
 * REA evidence: ev_194801316f9f8dfa1ab767c5de52b2f6a22baa1f04f8d41dcf49c0112a1409eb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003712e(void)

{
  uint uVar1;
  
  fence();
  if ((_DAT_ram_1901001c & 2) == 0) {
    uVar1 = 0xfffffff;
  }
  else {
    uVar1 = 0x1ffffffd;
  }
  _DAT_ram_180200a4 = _DAT_ram_180200a4 & uVar1;
  return;
}


/* NanoCore 1.10, address 0x40037160.
 * REA evidence: ev_fb16563d385229bb9e494413796b7f82d477cbf234426fd84bf86785d48105b6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40037160(uint param_1,int param_2,uint param_3,int *param_4,uint param_5,uint *param_6,
                     undefined1 *param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_1 == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = ((param_1 >> 1) + param_2) / param_1;
  }
  if (param_3 == 0) {
    param_3 = 0xffffffff;
  }
  else {
    param_3 = ((param_3 - 1) + uVar7) / param_3;
  }
  uVar1 = 0;
  do {
    if (param_3 <= (uint)(1 << (uVar1 & 0x1f))) break;
    uVar1 = uVar1 + 1;
  } while (param_5 != uVar1);
  uVar7 = uVar7 >> (uVar1 & 0x1f);
  iVar3 = (uVar7 << (uVar1 & 0x1f)) * param_1;
  if (iVar3 != param_2) {
    uVar4 = iVar3 - param_2;
    uVar6 = (int)uVar4 >> 0x1f;
    uVar6 = (uVar4 ^ uVar6) - uVar6;
    uVar4 = (param_1 * 7 >> 1) - param_2;
    uVar8 = (int)uVar4 >> 0x1f;
    uVar8 = (uVar8 ^ uVar4) - uVar8;
    uVar2 = (param_1 * 9 >> 1) - param_2;
    uVar4 = (int)uVar2 >> 0x1f;
    uVar4 = (uVar2 ^ uVar4) - uVar4;
    if ((uVar8 <= uVar6) || (uVar4 <= uVar6)) {
      if ((uVar8 < uVar6) && (uVar8 < uVar4)) {
        uVar5 = 1;
      }
      else {
        if ((uVar6 <= uVar4) || (uVar8 <= uVar4)) goto LAB_ram_40037196;
        uVar5 = 2;
      }
      *param_7 = uVar5;
      goto LAB_ram_4003719a;
    }
  }
LAB_ram_40037196:
  *param_7 = 0;
LAB_ram_4003719a:
  *param_4 = uVar7 - 1;
  *param_6 = uVar1;
  return;
}


/* NanoCore 1.10, address 0x400371fe.
 * REA evidence: ev_34b8024e9339876853ca6923994b4b922c2ad5c73ee168f6be1cd521cfb64e97
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_400371fe(int param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cStack_19;
  int iStack_18;
  uint auStack_14 [3];
  
  uVar1 = *param_3;
  cStack_19 = '\0';
  if (*(byte *)(param_1 + 0xf) == 0) {
    uVar2 = 0xffffffea;
    if (*(byte *)(param_1 + 0xd) != 0) {
      uVar3 = 0;
      uVar2 = 0xffffffff;
      uVar5 = 0;
      do {
        uVar4 = param_2 << (uVar5 & 0x1f);
        uVar6 = uVar5;
        if (uVar1 == uVar4) break;
        uVar4 = uVar1 - uVar4;
        uVar6 = (int)uVar4 >> 0x1f;
        uVar6 = (uVar6 ^ uVar4) - uVar6;
        if (uVar6 < uVar2) {
          uVar2 = uVar6;
          uVar3 = uVar5;
        }
        uVar5 = uVar5 + 1;
        uVar6 = uVar3;
      } while (uVar5 <= *(byte *)(param_1 + 0xd));
      uVar2 = uVar1 >> (uVar6 & 0x1f);
    }
  }
  else {
    FUN_ram_40037160(param_2,uVar1,*(byte *)(param_1 + 0xf) + 1,&iStack_18,
                     *(byte *)(param_1 + 0x11) + 1,auStack_14,&cStack_19);
    if (cStack_19 == '\x01') {
      uVar2 = 7;
    }
    else {
      if (cStack_19 != '\x02') {
        if (iStack_18 + 1U == 0) {
          uVar1 = 0xffffffff;
        }
        else {
          uVar1 = uVar1 / (iStack_18 + 1U);
        }
        return uVar1 >> (auStack_14[0] & 0x1f);
      }
      uVar2 = 9;
    }
    if (uVar2 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = (uVar1 << 1) / uVar2;
    }
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x4003733c.
 * REA evidence: ev_fb468767df263db74145bc10f294f9bdaa15f4c7b5027f275be7dc0dbb9e9df9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003733c(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bStack_19;
  int iStack_18;
  int aiStack_14 [2];
  
  bStack_19 = 0;
  uVar1 = *(uint *)(*(int *)(param_1 + 8) + 0x18020000);
  fence();
  if (*(byte *)(param_1 + 0xf) == 0) {
    uVar3 = (uint)*(byte *)(param_1 + 0xd);
    if (uVar3 != 0) {
      uVar2 = 0;
      uVar7 = 0xffffffff;
      uVar4 = 0;
      do {
        iVar5 = param_2 << (uVar4 & 0x1f);
        uVar6 = uVar4;
        if (param_3 == iVar5) break;
        uVar6 = param_3 - iVar5;
        uVar8 = (int)uVar6 >> 0x1f;
        uVar8 = (uVar8 ^ uVar6) - uVar8;
        if (uVar8 < uVar7) {
          uVar2 = uVar4;
          uVar7 = uVar8;
        }
        uVar4 = uVar4 + 1;
        uVar6 = uVar2;
      } while (uVar4 <= uVar3);
      fence();
      *(uint *)(*(int *)(param_1 + 8) + 0x18020000) =
           uVar6 << (*(byte *)(param_1 + 0xc) & 0x1f) |
           ~(uVar3 << (*(byte *)(param_1 + 0xc) & 0x1f)) & uVar1;
    }
  }
  else {
    FUN_ram_40037160(param_2,param_3,*(byte *)(param_1 + 0xf) + 1,&iStack_18,
                     *(byte *)(param_1 + 0x11) + 1,aiStack_14,&bStack_19);
    uVar3 = (uint)*(byte *)(param_1 + 0x12);
    if (bStack_19 == 0) {
      uVar3 = ~((uint)*(byte *)(param_1 + 0x13) << (uVar3 & 0x1f) |
                (uint)*(byte *)(param_1 + 0xf) << (*(byte *)(param_1 + 0xe) & 0x1f) |
               (uint)*(byte *)(param_1 + 0x11) << (*(byte *)(param_1 + 0x10) & 0x1f)) & uVar1;
      uVar1 = iStack_18 << (*(byte *)(param_1 + 0xe) & 0x1f) |
              aiStack_14[0] << (*(byte *)(param_1 + 0x10) & 0x1f);
    }
    else {
      uVar1 = ~((uint)*(byte *)(param_1 + 0x13) << (uVar3 & 0x1f)) & uVar1;
      uVar3 = (uint)bStack_19 << (uVar3 & 0x1f);
    }
    fence();
    *(uint *)(*(int *)(param_1 + 8) + 0x18020000) = uVar3 | uVar1;
  }
  return 0;
}


/* NanoCore 1.10, address 0x400379b8.
 * REA evidence: ev_c6971f335c447d16270c7cd75b3c00eab4fd5e1acf86e6e2283fc288dc6cfeff
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400379b8(uint param_1)

{
  if (param_1 < 0x35) {
    fence();
    fence();
    *(uint *)(*(int *)(&DAT_ram_400970f0 + param_1 * 0xc) + 0x18020000) =
         ~*(uint *)(&DAT_ram_400970f4 + param_1 * 0xc) &
         *(uint *)(*(int *)(&DAT_ram_400970f0 + param_1 * 0xc) + 0x18020000);
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.10, address 0x400379f8.
 * REA evidence: ev_60dfec3f6fb2e422d2ec1daf13ab1bd22a0f8c2abb790b56506b1129ee6521e5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400379f8(uint param_1)

{
  if (param_1 < 0x35) {
    fence();
    fence();
    *(uint *)(*(int *)(&DAT_ram_400970f0 + param_1 * 0xc) + 0x18020000) =
         *(uint *)(*(int *)(&DAT_ram_400970f0 + param_1 * 0xc) + 0x18020000) |
         *(uint *)(&DAT_ram_400970f4 + param_1 * 0xc);
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.10, address 0x40037a34.
 * REA evidence: ev_4688575242bbd05a3e4e0b61c0f15015f066ba831067d0b5de44c54b2f036537
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40037a34(uint *param_1,uint param_2,uint param_3)

{
  fence();
  fence();
  *param_1 = (param_3 ^ *param_1) & param_2 ^ *param_1;
  return;
}


/* NanoCore 1.10, address 0x40037a48.
 * REA evidence: ev_3cafee514bd1bfd46a197c4abd4d8620e7ba60527904d6d5207062e11665873b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40037a48(uint *param_1,uint param_2)

{
  fence();
  fence();
  *param_1 = param_2 | *param_1;
  return;
}


/* NanoCore 1.10, address 0x40037a58.
 * REA evidence: ev_ad6486a68cd62b4f912ad4e73b6244b2255e06ada3dd37b35565afe27feae2d5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40037a58(int param_1,uint param_2,int param_3)

{
  param_1 = param_1 + 0x100;
  FUN_ram_40037a34(param_1,0xff00,(param_2 & 0xff) << 8);
  FUN_ram_40037a48(param_1,1);
  FUN_ram_40037a34(param_1,0xff000000,param_3 << 0x18);
  FUN_ram_40037a48(param_1,0x10000);
  return;
}


/* NanoCore 1.10, address 0x40037aa2.
 * REA evidence: ev_bf3bd1ead41e44eeaaa51900b2545fed713d472343a2b593555c0f1e9a9dddb7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40037aa2(int param_1,int param_2,uint param_3)

{
  fence();
  *(uint *)(param_1 + 0x10c) = param_2 << 8 | param_3;
  return;
}


/* NanoCore 1.10, address 0x40037ab2.
 * REA evidence: ev_35067689faa2cd0f9235661b00f9e6ec6a2ebe26d2f9a1e8a9535543a966869f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40037ab2(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  fence();
  *(undefined4 *)(param_1 + 0x104) = param_2;
  for (iVar2 = 0; iVar2 != param_3; iVar2 = iVar2 + 1) {
    fence();
    *(uint *)(param_1 + 0x108) = (uint)*(byte *)(param_4 + iVar2);
  }
  FUN_ram_40037aa2(param_1,iVar2,1);
  iVar2 = FUN_ram_4003f0c6();
  do {
    fence();
    if ((*(uint *)(param_1 + 0x124) & 0x12) == 2) {
      return;
    }
    iVar1 = FUN_ram_4003f0c6();
  } while (-1 < (iVar2 + 1000000) - iVar1);
  fence();
  return;
}


/* NanoCore 1.10, address 0x40037b2e.
 * REA evidence: ev_3d1dcc462d7355e071c37bf4907ac0564862161c1f15e935f8a66145a5ff066a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40037b2e(int param_1,int param_2,int param_3,uint param_4)

{
  fence();
  *(uint *)(param_1 + 0x204) = param_3 << 8 | param_4 | param_2 << 0x10;
  return;
}


/* NanoCore 1.10, address 0x40037b42.
 * REA evidence: ev_8dfc2552e0b0e873642652203ae27c4234ae88f24c2f89c7aaeb9152873b76b8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40037b42(int param_1,uint param_2,uint param_3,int param_4)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_1 + 0x234);
  FUN_ram_40037a34(puVar1,0xff0000,(param_2 & 0xff) << 0x10);
  FUN_ram_40037a34(puVar1,0xff00,(param_3 & 0xff) << 8);
  if (param_4 != 0) {
    FUN_ram_40037a48(puVar1,1);
    return;
  }
  fence();
  fence();
  *puVar1 = *puVar1 & 0xfffffffe;
  return;
}


/* NanoCore 1.10, address 0x40037b9e.
 * REA evidence: ev_fbb56c9c2ffdbcb930607f2dba0386eee31a387e219356990daff08c95f9a903
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40037b9e(int param_1,uint param_2,int param_3)

{
  param_1 = param_1 + 0x208;
  FUN_ram_40037a34(param_1,0xff00,(param_2 & 0xff) << 8);
  FUN_ram_40037a48(param_1,1);
  FUN_ram_40037a34(param_1,0xff000000,param_3 << 0x18);
  FUN_ram_40037a48(param_1,0x10000);
  return;
}


/* NanoCore 1.10, address 0x40037be8.
 * REA evidence: ev_fe9e49cca7db2fbf2213f8559c5815270029ef62b7bd1fa87ce2cf6abde017b4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40037be8(int param_1,int param_2,uint param_3)

{
  fence();
  *(uint *)(param_1 + 0x214) = param_2 << 8 | param_3;
  return;
}


/* NanoCore 1.10, address 0x40037bf8.
 * REA evidence: ev_c3bed9eee6b2c2288bcdc713469126d8717f62e36eac0117d7d7295b6adc9420
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40037bf8(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  fence();
  *(undefined4 *)(param_1 + 0x20c) = param_2;
  for (iVar2 = 0; iVar2 != param_3; iVar2 = iVar2 + 1) {
    fence();
    *(uint *)(param_1 + 0x210) = (uint)*(byte *)(param_4 + iVar2);
  }
  FUN_ram_40037be8(param_1,iVar2,1);
  iVar2 = FUN_ram_4003f0c6();
  do {
    fence();
    if ((*(uint *)(param_1 + 0x22c) & 0x12) == 2) {
      return;
    }
    iVar1 = FUN_ram_4003f0c6();
  } while (-1 < (iVar2 + 1000000) - iVar1);
  fence();
  return;
}


/* NanoCore 1.10, address 0x40037c74.
 * REA evidence: ev_84ebd72603f71e124235fbdf4315f89cde0a2e5514f3adbdc93e7295229def17
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40037c74(uint *param_1,uint param_2)

{
  fence();
  fence();
  *param_1 = ~param_2 & *param_1;
  return;
}


/* NanoCore 1.10, address 0x40037c88.
 * REA evidence: ev_dae58f1c16bf683de7f31ac01a2673da62c9f42f814817fd3bb9db80c3fab5ee
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40037c88(uint *param_1,uint param_2,uint param_3)

{
  fence();
  fence();
  *param_1 = (param_3 ^ *param_1) & param_2 ^ *param_1;
  return;
}


/* NanoCore 1.10, address 0x40037c9c.
 * REA evidence: ev_cd2ae84a76a15fd39056ee49773ef0c24a300b87dae2df35ceae4240fcf07afd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40037c9c(uint *param_1,uint param_2)

{
  fence();
  if (param_2 == 0) {
    FUN_ram_40031b48(s_BUG__failure_at__s__d__s____ram_40095c5c,
                     s_bsp_artinchip_include_hal_aic_ha_ram_40095c28,0x35,s_reg_set_bit_ram_40095c88
                    );
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  fence();
  *param_1 = param_2 | *param_1;
  return;
}


/* NanoCore 1.10, address 0x40037cd4.
 * REA evidence: ev_427176a3812fc3301e944b3dec23f50d173f11cd48462ef73875b3c66bdd8d64
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40037d58) */
/* WARNING: Removing unreachable block (ram,0x40037d26) */
/* WARNING: Removing unreachable block (ram,0x40037d42) */
/* WARNING: Removing unreachable block (ram,0x40037d70) */

void FUN_ram_40037cd4(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                     int param_7)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int local_a0;
  undefined1 auStack_9c [8];
  int iStack_94;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  undefined4 uStack_64;
  int local_60 [17];
  
  memset(auStack_9c,0,0x38);
  memset(local_60,0,0x40);
  iVar6 = 100;
  if (param_3 < 0x65) {
    iVar6 = param_3;
  }
  if (100 < param_4) {
    param_4 = 100;
  }
  iVar2 = (param_4 * 0xb4) / 100;
  if (100 < param_5) {
    param_5 = 100;
  }
  if (100 < param_6) {
    param_6 = 100;
  }
  iVar7 = (param_6 * 0x3a) / 100;
  puVar1 = &DAT_ram_300473c4;
  if (param_2 != 0) {
    if (param_2 == 1) {
      puVar1 = (undefined4 *)&DAT_ram_30047424;
    }
    else if (param_2 == 2) {
      puVar1 = (undefined4 *)&DAT_ram_30047394;
    }
    else if (param_2 == 3) {
      puVar1 = &DAT_ram_300473f4;
    }
  }
  iVar9 = *(int *)(iVar7 * 4 + 0x40095d84);
  iVar5 = (param_5 << 7) / 100 + 0x40;
  iVar3 = iVar2 + 0x26;
  local_a0 = iVar3 * 8;
  iStack_94 = ((iVar6 << 7) / 100 + -0x40) * 0x800 + (iVar3 * -8 + 0x400) * 0x10;
  uStack_64 = 0x400;
  iVar3 = iVar5 * iVar3;
  iStack_8c = *(int *)(iVar7 * 4 + 0x40095c94) * iVar3 >> 0x10;
  iStack_78 = iStack_8c;
  iStack_88 = iVar9 * iVar3 >> 0x10;
  iStack_84 = (0x400 - (iStack_88 + iStack_8c)) * 0x80;
  piVar4 = &local_a0;
  iStack_7c = (-0x80 - (iVar2 + -0x5a)) * iVar5 * iVar9 >> 0x10;
  iStack_74 = (0x400 - (iStack_8c + iStack_7c)) * 0x80;
  if (param_1 != 0) {
    iVar6 = 0;
    do {
      iVar2 = 0;
      do {
        iVar3 = *(int *)((int)local_60 + iVar2 + iVar6 + -0x60 + 0x60);
        iVar7 = 0;
        do {
          iVar9 = iVar7 * 0x10;
          iVar5 = iVar7 * 4;
          iVar7 = iVar7 + 1;
          iVar3 = iVar3 + (*(int *)((int)&DAT_ram_30047354 + iVar9 + iVar2) *
                           *(int *)(auStack_9c + iVar5 + iVar6 + -4) >> 10);
        } while (iVar7 != 4);
        *(int *)((int)local_60 + iVar2 + iVar6 + -0x60 + 0x60) = iVar3;
        iVar2 = iVar2 + 4;
      } while (iVar2 != 0x10);
      iVar6 = iVar6 + 0x10;
    } while (iVar6 != 0x40);
    piVar4 = local_60;
  }
  iVar6 = 0;
  do {
    iVar2 = 0;
    do {
      iVar7 = 0;
      iVar3 = 0;
      do {
        iVar5 = puVar1[iVar6 + iVar3];
        if (iVar3 == 3) {
          iVar5 = iVar5 << 6;
        }
        iVar9 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        iVar7 = iVar7 + iVar5 * piVar4[iVar2 + iVar9];
      } while (iVar3 != 4);
      if (iVar2 == 3) {
        uVar8 = iVar7 >> 0x10;
        if (0x1f9b < iVar7 >> 0x10) {
          uVar8 = 0x1f9b;
        }
        if ((int)uVar8 < -0x1f9c) {
          uVar8 = 0xffffe064;
        }
        uVar8 = uVar8 & 0x3fff;
      }
      else {
        uVar8 = iVar7 >> 10;
        if (0xfff < iVar7 >> 10) {
          uVar8 = 0xfff;
        }
        if ((int)uVar8 < -0x1000) {
          uVar8 = 0xfffff000;
        }
        uVar8 = uVar8 & 0x1fff;
      }
      *(uint *)(param_7 + iVar6 * 4 + iVar2 * 4) = uVar8;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 4);
    iVar6 = iVar6 + 4;
  } while (iVar6 != 0xc);
  return;
}


/* NanoCore 1.10, address 0x40037f2c.
 * REA evidence: ev_3dab0a0b7902b0c5dea2f029071f24f3a779b8f6af2455b92b020b0461a01321
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40037f2c(int param_1,uint param_2)

{
  FUN_ram_40037c88(param_1 + 0x1dc,0x1fff0000,(param_2 & 0x1fff) << 0x10);
  return;
}


/* NanoCore 1.10, address 0x40037f40.
 * REA evidence: ev_3464065b776996eb1c66ad63eb053844fb2312128f969037b0d6beb5df7086b8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40037f40(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_ram_40037c9c(param_1 + 0x170,0x10000);
    return;
  }
  FUN_ram_40037c74(param_1 + 0x170,0x10000);
  return;
}


/* NanoCore 1.10, address 0x40037f52.
 * REA evidence: ev_f2f88502916862751d773cfa31c90e7b6ac6607623819b9082611aa169487b17
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40037f52(int param_1,undefined4 param_2)

{
  fence();
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}


/* NanoCore 1.10, address 0x40037f5c.
 * REA evidence: ev_f2316c267d44680e22d6a55dcb2447e34c1e73faaddb8be34f8510b46399304d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40037f5c(int param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  fence();
  *(uint *)(param_1 + 0xc) = (~param_3 & 3) << 8 | ~param_4 & 3 | (~param_2 & 3) << 0x10;
  if (param_5 != 0) {
    FUN_ram_40037c9c(param_1 + 0x14,0x80000000);
    FUN_ram_40037c9c(param_1,1);
    return;
  }
  FUN_ram_40037c74(param_1,1);
  return;
}


/* NanoCore 1.10, address 0x40037fae.
 * REA evidence: ev_ca92d36aa6104bb6937851bd201b4ba7a894d14ae24758cce8ded74041ba65c1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40037fae(int param_1,uint param_2)

{
  FUN_ram_40037c88(param_1 + 0x1d0,0x30,(param_2 & 3) << 4);
  return;
}


/* NanoCore 1.10, address 0x40037fc2.
 * REA evidence: ev_39c276cdfbc31cb46cc8aa1aa4857ac71d541e3567ff0a10cd6fa2f9e745d00b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40037fc2(undefined4 param_1,int *param_2)

{
  FUN_ram_40037c88(param_1,0xf3fff3ff,
                   (param_2[1] & 0xfU) << 0xc |
                   *param_2 << 0x1c | param_2[3] & 0x3ffU | (param_2[2] & 0x3ffU) << 0x10);
  return;
}


/* NanoCore 1.10, address 0x40037ff0.
 * REA evidence: ev_aa1aa21e8f663d44738ace72c37e3efab0b21b40c68c98e8c8b27014341a313f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40037ff0(int param_1,int param_2,int param_3,uint param_4)

{
  param_1 = param_1 + 0x890;
  if (param_3 != 0) {
    FUN_ram_40037c9c(param_1,0x8000);
  }
  if (param_2 != 0) {
    FUN_ram_40037c9c(param_1,0x4000);
  }
  FUN_ram_40037c88(param_1,0x3ff,param_4 & 0x3ff);
  return;
}


