/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40034000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x400340dc.
 * REA evidence: ev_d63523b064334b5877426e4dc41f7eac972c642c37be1a84206df3b712af48bc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400340dc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = 100000;
  do {
    if ((_DAT_ram_18710014 & 0x20) != 0) {
      if (iVar1 != 0) {
        _DAT_ram_18710000 = param_1;
        return;
      }
      return;
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  _DAT_ram_18710000 = param_1;
  return;
}


/* NanoCore 1.12, address 0x40034102.
 * REA evidence: ev_b44a452b808358f2a7531c10ecd112885721d340c99c1c3db96e90c99368b401
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40034102(char *param_1)

{
  for (; *param_1 != '\0'; param_1 = param_1 + 1) {
    FUN_ram_400340dc();
  }
  return;
}


/* NanoCore 1.12, address 0x40034120.
 * REA evidence: ev_e143069599e1b0ddcaae172f9436bde2e2e9aaef15c39b88008f632ed14e0593
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40034120(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0x1c;
  do {
    uVar1 = uVar2 & 0x1f;
    uVar2 = uVar2 - 4;
    FUN_ram_400340dc(s_0123456789abcdef_ram_4009c6f4[param_1 >> uVar1 & 0xf]);
  } while (uVar2 != 0xfffffffc);
  return;
}


/* NanoCore 1.12, address 0x40034222.
 * REA evidence: ev_57f90365b5ddd77b2984ac037101a13dcfc292012fcfe964f2a091f9818545fb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40034222(undefined4 *param_1)

{
  return *param_1;
}


/* NanoCore 1.12, address 0x40034240.
 * REA evidence: ev_f5cdbe1f74bf55378d89e53faf3dce814a2f570586c634a76bd2d30953ddd620
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40034240(int param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  char local_130;
  char cStack_12f;
  char cStack_12e;
  char cStack_12d;
  undefined1 auStack_11c [4];
  undefined1 auStack_118 [4];
  undefined1 auStack_114 [236];
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  uVar5 = 0;
  do {
    uVar1 = uVar5 + 0x100;
    if ((*(uint *)(param_1 + 0x38) < uVar1) ||
       (iVar3 = fal_partition_read(param_1,uVar5,&local_130,0x100), iVar3 != 0x100))
    goto LAB_ram_40034296;
    uVar5 = uVar1;
  } while ((local_130 != 'A') ||
          ((((cStack_12f != 'I' || (cStack_12e != 'C')) || (cStack_12d != ' ')) ||
           ((iVar3 = FUN_ram_40034222(auStack_118), iVar3 != 0x40300000 ||
            (puVar4 = (undefined1 *)FUN_ram_40034222(auStack_114), puVar4 != &SUB_ram_40300100))))))
  ;
  uVar5 = FUN_ram_40034222(auStack_11c);
  if ((uVar5 == 0) ||
     ((((int)((ulonglong)uVar5 + 0x40300100 >> 0x20) != 0 ||
       (0x40340000 < (uint)((ulonglong)uVar5 + 0x40300100))) ||
      (*(uint *)(param_1 + 0x38) < uVar1 + uVar5)))) {
LAB_ram_40034296:
    uVar2 = 0xffffffff;
  }
  else {
    *param_2 = uVar1;
    *param_3 = uVar5;
    uVar2 = 0;
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x4003434e.
 * REA evidence: ev_5d31dbce4ae1a69e194de66c045dc4756abfae660b7ac2f96e8dc69c0066319f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4003434e(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iStack_38;
  uint auStack_34 [3];
  
  iStack_38 = 0;
  auStack_34[0] = 0;
  iVar4 = FUN_ram_40006b6e();
  if ((((iVar4 == 1) || (iVar4 = FUN_ram_40006b3a(), 0 < iVar4)) &&
      (iVar4 = FUN_ram_40006dec(&DAT_ram_4009c658), iVar4 != 0)) &&
     ((iVar5 = FUN_ram_40034240(iVar4,&iStack_38,auStack_34), uVar2 = auStack_34[0],
      iVar1 = iStack_38, iVar5 == 0 && (uVar6 = FUN_ram_4000559c(auStack_34[0]), uVar6 != 0)))) {
    if ((uVar2 + uVar6 < 0x40300001) || (0x4033ffff < uVar6)) {
      for (uVar3 = 0; uVar3 < uVar2; uVar3 = uVar3 + uVar9) {
        uVar9 = uVar2 - uVar3;
        if (0x1000 < uVar9) {
          uVar9 = 0x1000;
        }
        puVar8 = (undefined1 *)0x3007bbe0;
        fence();
        custom0();
        do {
          custom0();
          puVar8 = puVar8 + 0x20;
        } while (puVar8 != &DAT_ram_3007cbe0);
        fence();
        custom0();
        uVar7 = fal_partition_read(iVar4,iVar1 + uVar3,0x3007bbe0,uVar9);
        if (uVar7 != uVar9) goto LAB_ram_400343d4;
        memcpy(uVar6 + uVar3,0x3007bbe0,uVar9);
      }
      FUN_ram_4000e946();
      FUN_ram_4003f1c2();
      FUN_ram_4003f6b6(0);
      FUN_ram_4003f702(0);
      uVar2 = auStack_34[0];
      FUN_ram_40034102(s_DFU_JA_pre_irq_off_ram_4009c65c);
      mstatus = mstatus & 0xfffffff7;
      FUN_ram_4003ed7a();
      FUN_ram_4003ecd0(5);
      iVar4 = 0x1e8481;
      do {
        if ((_DAT_ram_18710014 & 0x40) != 0) break;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      FUN_ram_40034102(s_DFU_J0_irq_off__drained_ram_4009c674);
      iVar4 = 0;
      do {
        *(undefined1 *)(iVar4 * 4 + 0x20801001) = 0;
        *(undefined1 *)(iVar4 * 4 + 0x20801000) = 0;
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0x60);
      FUN_ram_40034102(s_DFU_J0b_clic_cleared_ram_4009c690);
      _mtvec = &DAT_ram_40034183;
      FUN_ram_40034102(s_DFU_J1_mtvec_ram_4009c6a8);
      memcpy(&SUB_ram_40300100,uVar6,uVar2);
      FUN_ram_40034102(s_DFU_J2_copied_ram_4009c6b8);
      fence();
      custom0();
      fence.i();
      fence();
      custom0();
      fence();
      custom0();
      fence.i();
      fence();
      FUN_ram_40034102(s_DFU_J3_dcache_ram_4009c6c8);
      fence();
      custom0();
      fence.i();
      fence();
      custom0();
      fence();
      custom0();
      fence.i();
      fence();
      fence.i();
      FUN_ram_40034102(s_DFU_J4_entry_words_0x_ram_4009c6d8);
      FUN_ram_40034120(_SUB_ram_40300100);
      FUN_ram_40034102(&DAT_ram_4009c6f0);
      FUN_ram_40034120(_DAT_ram_40300104);
      FUN_ram_40034102(s_descriptor_<type:0x_02x,index:0x_ram_40099934 + 0x30);
      (*(code *)&SUB_ram_40300100)(0x44,0);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
LAB_ram_400343d4:
    FUN_ram_400055d4(uVar6);
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x400345c2.
 * REA evidence: ev_dabffaf21ffa53b88d0191c2536565057a49a3b22fb8dce0754ec4ae6813447d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400345c2(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40038b70();
  return -(uint)(iVar1 != 0);
}


/* NanoCore 1.12, address 0x400345d8.
 * REA evidence: ev_f739fe036a237c0879ca2e855e502458670e7c0f21d31253fee189c059b3d753
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400345d8(uint *param_1,uint param_2,uint param_3)

{
  fence();
  fence();
  *param_1 = (param_3 ^ *param_1) & param_2 ^ *param_1;
  return;
}


/* NanoCore 1.12, address 0x400345ec.
 * REA evidence: ev_e3c4cc42b1ec6c97aa1a11ff9ce90abe7b72ea4864f8b653402268e70bdf32f0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400345ec(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  
  iVar1 = _DAT_ram_3007cbe0;
  if (param_2 == 0) {
    piVar5 = *(int **)(param_1 + 0x24);
    iVar8 = **(int **)(param_1 + 0x20);
  }
  else {
    piVar5 = *(int **)(param_2 + 0xc);
    iVar8 = **(int **)(param_2 + 4);
  }
  iVar4 = *piVar5;
  *(int **)(_DAT_ram_3007cbe0 + 0x1c) = piVar5;
  *(int *)(iVar1 + 0x18) = param_1;
  *(int *)(iVar1 + 4) = iVar8;
  if (iVar4 == 2) {
    iVar4 = piVar5[1];
    puVar6 = &DAT_ram_4009c7e4;
  }
  else {
    if (iVar4 != 3) goto LAB_ram_40034622;
    iVar4 = piVar5[1];
    puVar6 = &DAT_ram_4009c804;
  }
  iVar4 = *(int *)(puVar6 + iVar4 * 4);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 8) = iVar8 * iVar4;
LAB_ram_40034622:
  uVar3 = 0;
  uVar2 = *(uint *)(iVar1 + 8);
  iVar8 = *(int *)(iVar1 + 0xc);
  for (uVar7 = uVar2; (iVar8 == 0 && (uVar7 < 360000000));
      uVar7 = (uint)((ulonglong)uVar7 * (ulonglong)uVar2)) {
    uVar7 = 2 << (uVar3 & 0x1f);
    uVar3 = uVar3 + 1;
    iVar8 = (int)((ulonglong)uVar7 * (ulonglong)uVar2 >> 0x20) +
            *(int *)(iVar1 + 0xc) * uVar7 + ((int)uVar7 >> 0x1f) * uVar2;
  }
  *(uint *)(iVar1 + 0x10) = uVar7;
  *(int *)(iVar1 + 0x14) = iVar8;
  return 0;
}


/* NanoCore 1.12, address 0x400346c0.
 * REA evidence: ev_6f9c456d9244c337f736d7140d2ac985fe33244680d6abe4ce87fcd59ebed0cb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_400346c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = _DAT_ram_3007cbe0;
  piVar2 = (int *)_DAT_ram_3007cbe0[7];
  if (*piVar2 == 2) {
    FUN_ram_40039cb2(*_DAT_ram_3007cbe0,param_1,param_4,param_3);
  }
  if (*piVar2 == 3) {
    FUN_ram_40039df8(*puVar1,param_1,param_4,param_3);
  }
  return 0;
}


/* NanoCore 1.12, address 0x40034716.
 * REA evidence: ev_7e5a0ee66e860d936aa46f9f64ca982b3761026f4a4c5f7b2a7823138a28c99f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40034716(void)

{
  FUN_ram_40039bb8(0x12);
  FUN_ram_40038c22(0x2d);
  FUN_ram_40038c22(0x47);
  return 0;
}


/* NanoCore 1.12, address 0x40034738.
 * REA evidence: ev_d0b4dfe95eb7d3af504906062c260574efff08e53edd7c79ae141330f4d9a352
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40034738(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_ram_3007cbe0;
  uVar2 = *(undefined4 *)(_DAT_ram_3007cbe0 + 4);
  FUN_ram_40038d5c(6,*(undefined4 *)(_DAT_ram_3007cbe0 + 0x10));
  FUN_ram_40038c58(0x47,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0x10));
  FUN_ram_40038c58(0x46,uVar2,*(undefined4 *)(iVar1 + 8));
  FUN_ram_40038bfe(6);
  FUN_ram_40038bfe(0x47);
  FUN_ram_40038bfe(0x2d);
  FUN_ram_40039bf8(0x12);
  return 0;
}


/* NanoCore 1.12, address 0x40034792.
 * REA evidence: ev_85a114d6166e7d3cd23705037a737ca15f782f1db7cb4ba9e110364f33a5b155
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40034792(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_ram_4000559c(0x20);
  uVar2 = 0xfffffff4;
  if (puVar1 != (undefined4 *)0x0) {
    memset(puVar1 + 1,0,0x1c);
    *puVar1 = 0x18800000;
    uVar2 = 0;
    _DAT_ram_3007cbe0 = puVar1;
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x400347ca.
 * REA evidence: ev_d56e60a2e2bfb0dcf11999e03e5796e721655e889a932dcac6b99aa1dcdbc35f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40034850) */
/* WARNING: Removing unreachable block (ram,0x40034864) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400347ca(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar1 = _DAT_ram_3007cbe0;
  puVar2 = (uint *)_DAT_ram_3007cbe0[7];
  FUN_ram_400345d8(*_DAT_ram_3007cbe0,0x30,(*puVar2 & 3) << 4);
  if (*puVar2 == 2) {
    FUN_ram_400345d8(*puVar1,0xf0000,(puVar2[1] & 0xf) << 0x10);
    if ((*(int *)(puVar1[7] + 8) != 0) || (*(int *)(puVar1[7] + 0xc) != 0)) {
      FUN_ram_40039c58(*puVar1);
    }
  }
  else if (*puVar2 == 3) {
    FUN_ram_400345d8(*puVar1,0x300000,(puVar2[1] / 3 & 3) << 0x14);
    FUN_ram_400345d8(*puVar1,0xf000000,puVar2[1] % 3 << 0x18);
    iVar4 = puVar1[7];
    puVar3 = *(undefined4 **)(iVar4 + 0x1c);
    if ((*(int *)(iVar4 + 8) != 0) || (*(int *)(iVar4 + 0xc) != 0)) {
      FUN_ram_40039d9e(*puVar1);
    }
    if (puVar3 != (undefined4 *)0x0) {
      FUN_ram_40039d2e(*puVar1,puVar3[3],puVar3[4],puVar3[5]);
      FUN_ram_40039d42(*puVar1,puVar3[2],puVar3[1],*puVar3);
    }
  }
  fence();
  fence();
  *(uint *)*puVar1 = *(uint *)*puVar1 | 1;
  return 0;
}


/* NanoCore 1.12, address 0x400348ba.
 * REA evidence: ev_8928fe092ea646e28efda5cfcba85916ce13d8522ca8c408e23f2af145f13f8c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400348ba(undefined4 param_1)

{
  FUN_ram_4000303c(param_1,_DAT_ram_3007cbe4 + 0x374,0xc4);
  return 0;
}


/* NanoCore 1.12, address 0x400348da.
 * REA evidence: ev_5302cf3876c13944c76ea8a286a98d4c5e775785c94f10e8aede56c8139a7c99
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400348da(undefined4 param_1)

{
  FUN_ram_4000303c(param_1,_DAT_ram_3007cbe4 + 0x340,0x34);
  return 0;
}


/* NanoCore 1.12, address 0x400348fa.
 * REA evidence: ev_bdfb2b5930f73368db17d8190a4434a1a1b0c72750c96730eff278378fecdf5a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400348fa(undefined4 param_1)

{
  FUN_ram_4000303c(param_1,_DAT_ram_3007cbe4 + 0x330,0x10);
  return 0;
}


/* NanoCore 1.12, address 0x40034918.
 * REA evidence: ev_b5237da2e32870dba8208d3a82f58f7d8eb298942a60ae1708603e55891dcb7f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40034918(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = _DAT_ram_3007cbe4;
  iVar3 = *param_1;
  uVar2 = *_DAT_ram_3007cbe4;
  if (iVar3 != 0) {
    FUN_ram_4003a726(uVar2,param_1 + 1,0);
    FUN_ram_4003a726(*puVar1,param_1 + 0x11,1);
    FUN_ram_4003a726(*puVar1,param_1 + 0x21,2);
    uVar2 = *puVar1;
  }
  FUN_ram_4003a6f4(uVar2,iVar3 != 0);
  FUN_ram_4000303c(puVar1 + 0xdd,param_1,0xc4);
  return 0;
}


/* NanoCore 1.12, address 0x40034976.
 * REA evidence: ev_3f272319fd27efd251368403e92219d8a3ff6ccbaad8174e7358acd26a86be20
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40034976(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = _DAT_ram_3007cbe4;
  FUN_ram_4003a152(*_DAT_ram_3007cbe4,0);
  iVar3 = *param_1;
  uVar2 = *puVar1;
  if (iVar3 != 0) {
    FUN_ram_4003a702(uVar2,param_1 + 1);
    uVar2 = *puVar1;
  }
  FUN_ram_4003a6e6(uVar2,iVar3 != 0);
  FUN_ram_4000303c(puVar1 + 0xd0,param_1,0x34);
  FUN_ram_4003a152(*puVar1,1);
  return 0;
}


/* NanoCore 1.12, address 0x400349ca.
 * REA evidence: ev_a1349e422de34047ab40719ad72c8544bc6e4038466c8504d87e121e3f91719f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400349ca(void)

{
  FUN_ram_4003a636(*_DAT_ram_3007cbe4,0);
  return 0;
}


/* NanoCore 1.12, address 0x400349e6.
 * REA evidence: ev_3ca40bfb3586158175912dbb7773a748f3f00af56533a5af172dcdb5d8ac22c6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400349e6(void)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = _DAT_ram_3007cbe4;
  uVar2 = FUN_ram_4003a61e(*_DAT_ram_3007cbe4);
  FUN_ram_4003a62a(*puVar1,uVar2);
  if ((uVar2 & 1) != 0) {
    FUN_ram_400416e8(puVar1[0x10f],0);
    if ((code *)puVar1[0x112] != (code *)0x0) {
      (*(code *)puVar1[0x112])(puVar1[0x113]);
    }
  }
  if ((puVar1[0x111] & 0x10) != 0) {
    puVar1[0x111] = puVar1[0x111] & 0xf;
    FUN_ram_4003a544(*puVar1);
  }
  return 1;
}


/* NanoCore 1.12, address 0x40034a42.
 * REA evidence: ev_bd9fe3b0f9e2e28d69bfdfacde57b20ed6bca61f02b86068c6eb784756ff9cb7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40034a42(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = _DAT_ram_3007cbe4;
  iVar2 = _DAT_ram_3007cbe4[0x10e];
  uVar3 = *(undefined4 *)(iVar2 + 4);
  uVar4 = *(undefined4 *)(iVar2 + 0x14);
  FUN_ram_4003a648(*_DAT_ram_3007cbe4,uVar3,uVar4,*(undefined4 *)(iVar2 + 8),
                   *(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x18),
                   *(undefined4 *)(iVar2 + 0x1c),*(undefined4 *)(iVar2 + 0x10),
                   *(undefined4 *)(iVar2 + 0x20),(*(uint *)(iVar2 + 0x24) & 3) >> 1,
                   (*(uint *)(iVar2 + 0x24) & 0xf) >> 3);
  FUN_ram_4003a6ca(*puVar1,uVar3,uVar4);
  FUN_ram_4003a41c(*puVar1,uVar3,uVar4,0,0);
  FUN_ram_4003a544(*puVar1,0);
  FUN_ram_4003a12c(*puVar1,2);
  FUN_ram_4003a140(*puVar1,1);
  FUN_ram_4003a230(*puVar1);
  FUN_ram_4003a1ae(*puVar1,0);
  if (puVar1[2] != 0) {
    FUN_ram_4003a15c(*puVar1,puVar1[3],puVar1[4],puVar1[5]);
  }
  if (puVar1[0xc3] == 0) {
    puVar1[0xc2] = 1;
    puVar1[0xc4] = 0;
    puVar1[0xc3] = 1;
    puVar1[0xc5] = 0;
  }
  FUN_ram_4003a44e(*puVar1,0);
  FUN_ram_4003a464(*puVar1,puVar1[0xc5],puVar1[0xc4],puVar1[0xc3]);
  FUN_ram_4003fc98(0x3b,FUN_ram_400349e6,0);
  FUN_ram_4003fc50(0x3b);
  FUN_ram_4003a60c(*puVar1,1,1);
  FUN_ram_4003a60c(*puVar1,1,4);
  FUN_ram_40034918(puVar1 + 0xdd);
  FUN_ram_40034976(puVar1 + 0xd0);
  FUN_ram_4003a636(*puVar1,1);
  return 0;
}


/* NanoCore 1.12, address 0x40034b60.
 * REA evidence: ev_6c1ceabb241e388443e7278137ade4e210bf609fb426f8ea2aaf33dd99ae7cc3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40034b60(void)

{
  FUN_ram_40039bb8(0x15);
  FUN_ram_40038c22(0x31);
  FUN_ram_40038c22(0x46);
  return 0;
}


/* NanoCore 1.12, address 0x40034b82.
 * REA evidence: ev_1eb5d67ecc902e10f29b166cf6e9a62e78843658fd6d69a62a8ac6ce06a83712
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40034b82(void)

{
  FUN_ram_40038bfe(0x31);
  FUN_ram_40038bfe(0x46);
  FUN_ram_40038d5c(0x31,150000000);
  FUN_ram_40039bf8(0x15);
  return 0;
}


/* NanoCore 1.12, address 0x40034bb4.
 * REA evidence: ev_1134d95df6104fd74446bfc810f23c87aa334ad2efeb35341342bdb4b609aed4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40034bb4(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  
  iVar1 = _DAT_ram_3007cbe4;
  if (param_2 == 0) {
    puVar5 = *(uint **)(param_1 + 0x20);
  }
  else {
    puVar5 = *(uint **)(param_2 + 4);
  }
  uVar2 = puVar5[6];
  uVar6 = puVar5[5];
  uVar8 = puVar5[1];
  uVar9 = puVar5[3];
  uVar3 = puVar5[7];
  *(uint **)(_DAT_ram_3007cbe4 + 0x438) = puVar5;
  uVar3 = uVar6 + uVar2 + uVar3 + puVar5[8];
  uVar2 = puVar5[2] + uVar8 + uVar9 + puVar5[4];
  if (uVar2 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *puVar5 / uVar2;
  }
  if (uVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = uVar2 / uVar3;
  }
  if (uVar2 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 1000000 / uVar2;
  }
  iVar4 = 1;
  if (uVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = uVar2 / uVar3;
  }
  for (; uVar2 < 0x1e; uVar2 = uVar2 << 1) {
    iVar4 = iVar4 + 1;
  }
  *(uint *)(iVar1 + 0x440) = (uVar3 - 1) - iVar4;
  iVar4 = 0;
  if (0x556 < uVar8) {
    memset(iVar1 + 8,0,0x10);
    return 0xffffffff;
  }
  do {
    if ((&DAT_ram_4009c868)[iVar4 * 2] == 0xe) break;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x14);
  if (((param_4 == 0) || (*(uint *)(iVar4 * 8 + 0x4009c86c) < 0x18)) || (param_3 == 0x18)) {
LAB_ram_40034c4c:
    memset(iVar1 + 8,0,0x10);
  }
  else {
    if (param_3 == 0x10) {
      uVar7 = 5;
      *(undefined4 *)(iVar1 + 0xc) = 5;
      *(undefined4 *)(iVar1 + 0x10) = 6;
    }
    else {
      if (param_3 != 0x12) goto LAB_ram_40034c4c;
      uVar7 = 6;
      *(undefined4 *)(iVar1 + 0xc) = 6;
      *(undefined4 *)(iVar1 + 0x10) = 6;
    }
    *(undefined4 *)(iVar1 + 0x14) = uVar7;
    *(undefined4 *)(iVar1 + 8) = 1;
  }
  return 0;
}


/* NanoCore 1.12, address 0x40034c9e.
 * REA evidence: ev_84bb1128373d89acef46427addf9e69324d29d6d3862e7f958d6ab7653e036b0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40034c9e(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)FUN_ram_4000559c(0x450);
  uVar3 = 0xfffffff4;
  if (puVar1 != (undefined4 *)0x0) {
    memset(puVar1,0,0x450);
    *puVar1 = 0x18a00000;
    puVar1[1] = &PTR_DAT_ram_4009c908_ram_4009c838;
    puVar2 = (undefined4 *)FUN_ram_4000559c(0xc);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
      puVar2[2] = puVar2 + 1;
      puVar2[1] = puVar2 + 1;
    }
    puVar1[0x10f] = puVar2;
    puVar1[0xcc] = 0x32;
    puVar1[0xcd] = 0x32;
    puVar1[0xce] = 0x32;
    puVar1[0xcf] = 0x32;
    puVar1[0xd0] = 1;
    FUN_ram_4000303c(puVar1 + 0xd1,&DAT_ram_3004ae3c,0x30);
    puVar1[0xdd] = 1;
    FUN_ram_4000303c(puVar1 + 0xde,&DAT_ram_3004ae6c,0xc0);
    uVar3 = 0;
    _DAT_ram_3007cbe4 = puVar1;
  }
  return uVar3;
}


/* NanoCore 1.12, address 0x40034d40.
 * REA evidence: ev_b9fa9c7b0369ff395e05d9f39d861002273868bc4c54b9760dc27e5381c8d7b4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40034d40(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40041768(*(undefined4 *)(_DAT_ram_3007cbe4 + 0x43c),0,100);
  if (0 < iVar1) {
    iVar1 = 0;
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x40034d66.
 * REA evidence: ev_764e4acd3dce739e75ac8210f5c09668ae878720fc0bd6b959f2463d3cf8800f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40034d66(int param_1,uint param_2)

{
  int *piVar1;
  
  piVar1 = (int *)**(int **)(param_1 + 4);
  if (param_2 < (uint)(*piVar1 + piVar1[1])) {
    return (*(uint *)((*(int **)(param_1 + 4))[1] + param_2 * 0x14 + 0x10) & 7) >> 2;
  }
  return 0;
}


/* NanoCore 1.12, address 0x40034d88.
 * REA evidence: ev_622b4908c51890d6a68a6c617ed5d7e504643a55f33b202812394e82b60890fa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40034d88(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = _DAT_ram_3007cbe4;
  iVar2 = *param_1;
  iVar3 = FUN_ram_40034d66(_DAT_ram_3007cbe4,iVar2);
  if (iVar3 == 0) {
    uVar4 = 0xffffffea;
  }
  else {
    iVar3 = (iVar2 + 0x2f) * 0x10;
    *(int *)(iVar1 + iVar3 + 8) = iVar2;
    FUN_ram_4000303c(param_1,iVar3 + 8 + iVar1,0x10);
    uVar4 = 0;
  }
  return uVar4;
}


/* NanoCore 1.12, address 0x40034dd4.
 * REA evidence: ev_8c5da89df04409fac62007888519ecbafeadc471b8922571a99e62bf2c0d6b21
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40034dd4(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = _DAT_ram_3007cbe4;
  iVar2 = FUN_ram_40034d66(_DAT_ram_3007cbe4,*param_1);
  if (iVar2 == 0) {
    uVar3 = 0xffffffea;
  }
  else {
    FUN_ram_4003a152(*puVar1,0);
    FUN_ram_4003a464(*puVar1,param_1[3],param_1[2],param_1[1]);
    FUN_ram_4003a152(*puVar1,1);
    FUN_ram_4000303c(puVar1 + *param_1 * 4 + 0xbe,param_1,0x10);
    uVar3 = 0;
  }
  return uVar3;
}


/* NanoCore 1.12, address 0x40034e2e.
 * REA evidence: ev_95d40a3d0181a55cf17fd3fd3d85da788c29a8e204b79ae2eda198aab5655edb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40034e2e(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = _DAT_ram_3007cbe4;
  FUN_ram_4003a152(*_DAT_ram_3007cbe4,0);
  if ((((*param_1 != puVar1[0xcc]) || (param_1[1] != puVar1[0xcd])) || (param_1[2] != puVar1[0xce]))
     || (puVar1[0xcf] != param_1[3])) {
    if (((*param_1 == 0x32) && (param_1[1] == 0x32)) &&
       ((param_1[2] == 0x32 && (param_1[3] == 0x32)))) {
      FUN_ram_4003a38a(*puVar1,puVar1[0x1c] & 3);
    }
    else {
      FUN_ram_4003a3e4();
    }
  }
  FUN_ram_4003a152(*puVar1,1);
  FUN_ram_4000303c(puVar1 + 0xcc,param_1,0x10);
  return 0;
}


/* NanoCore 1.12, address 0x40034eb4.
 * REA evidence: ev_5e6bca02471b981b2b3843a619afd7fb85b2f8cacb5d37866211d77216afb210
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40034eb4(int param_1,uint param_2,uint param_3)

{
  bool bVar1;
  int *piVar2;
  
  piVar2 = (int *)**(int **)(param_1 + 4);
  if (param_2 < (uint)(*piVar2 + piVar2[1])) {
    bVar1 = true;
    if (((*(uint *)((*(int **)(param_1 + 4))[1] + param_2 * 0x14 + 0x10) & 2) != 0) &&
       (param_2 != 0)) {
      return param_3 < 4;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


/* NanoCore 1.12, address 0x40034ede.
 * REA evidence: ev_59476a88fd7d334183bf946879cde6e05d91b90aada0a8b567a2ad6a0606b291
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40034ede(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = _DAT_ram_3007cbe4;
  iVar5 = *(int *)(param_1 + 8);
  iVar6 = *(int *)(param_1 + 4);
  iVar2 = FUN_ram_40034eb4(_DAT_ram_3007cbe4,iVar6,iVar5);
  if (iVar2 == 0) {
    uVar3 = 0xffffffea;
  }
  else {
    iVar4 = (iVar5 + iVar6 * 4) * 0x5c;
    iVar2 = iVar1 + iVar4;
    *(int *)(iVar2 + 0x1c) = iVar6;
    *(int *)(iVar2 + 0x20) = iVar5;
    FUN_ram_4000303c(param_1,iVar4 + 0x18 + iVar1,0x5c);
    uVar3 = 0;
  }
  return uVar3;
}


/* NanoCore 1.12, address 0x40034f44.
 * REA evidence: ev_03bb663a56d580461288dad9c9b6a87e7e68b5eb6c65b16b5e832287c143385e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40034f44(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_2[2];
  iVar3 = param_2[1];
  iVar1 = FUN_ram_40034eb4();
  if (iVar1 != 0) {
    iVar5 = iVar3 * 4;
    iVar1 = *(int *)(*(int *)(param_1[1] + 4) + iVar3 * 0x14 + 4);
    if (*param_2 == 0) {
      param_1[(iVar5 + iVar4) * 0x17 + 6] = 0;
      if (iVar1 == 1) {
        FUN_ram_4003535a(param_1);
      }
      else {
        FUN_ram_4003a378(*param_1,0);
      }
      return 0;
    }
    if (iVar1 == 1) {
      iVar5 = iVar5 + iVar4;
      iVar1 = FUN_ram_4003527c(param_1,param_2);
      if (iVar1 != 0) {
        iVar1 = FUN_ram_4003538e(param_1,param_2);
        if (iVar1 == 0) goto LAB_ram_40034fee;
      }
    }
    else {
      iVar1 = FUN_ram_400354b2(param_1,param_2);
      if (iVar1 != 0) {
        iVar1 = FUN_ram_40035524(param_1,param_2);
        if (iVar1 != 0) {
          uVar2 = *param_1;
          param_1[iVar3 * 0x5c + 6] = 0;
          FUN_ram_4003a378(uVar2,0);
          return iVar1;
        }
LAB_ram_40034fee:
        FUN_ram_4000303c(param_1 + iVar5 * 0x17 + 6,param_2,0x5c);
        return 0;
      }
      uVar2 = *param_1;
      param_1[iVar3 * 0x5c + 6] = 0;
      FUN_ram_4003a378(uVar2,0);
    }
  }
  return -0x16;
}


