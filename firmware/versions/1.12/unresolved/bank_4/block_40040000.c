/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40040000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40040028.
 * REA evidence: ev_b13084b446efe3dfd14aaf75cc6b69f05b19264383a2e06ccd637fc0fea3360e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_ram_40040028(void)

{
  return CONCAT44(_DAT_ram_2000bffc,_DAT_ram_2000bff8);
}


/* NanoCore 1.12, address 0x4004004c.
 * REA evidence: ev_7ecc0358f416e6bcbfdbf552b55fdacad0b0af9d30c873f529254d66ebcb80ab
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40040072) */
/* WARNING: Removing unreachable block (ram,0x4004008c) */

void FUN_ram_4004004c(int param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = FUN_ram_40040028();
  uVar2 = FUN_ram_4003fe7c();
  do {
    uVar4 = FUN_ram_40040028();
    if (uVar4 < uVar3) {
      lVar1 = uVar3 - uVar4;
    }
    else {
      lVar1 = uVar4 - uVar3;
    }
  } while (((int)((ulonglong)lVar1 >> 0x20) == 0) && ((uint)lVar1 < (uVar2 / 1000000) * param_1));
  return;
}


/* NanoCore 1.12, address 0x400400b4.
 * REA evidence: ev_8387987f0b0f9ede7101ae4f65c4aef7ece4c115f91b5a3aea0ef2ffb383586a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400400b4(int param_1)

{
  FUN_ram_4004004c(param_1 * 1000);
  return;
}


/* NanoCore 1.12, address 0x400400c0.
 * REA evidence: ev_26e45e73010bbad223f784f15454434b9db4a03892517201ba60225bfa236b0d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400400d8) */

void FUN_ram_400400c0(void)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_ram_4003fe7c();
  uVar2 = FUN_ram_40040028();
  FUN_ram_40003bf8((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),uVar1 / 1000000,0);
  return;
}


/* NanoCore 1.12, address 0x400400ea.
 * REA evidence: ev_7e8e4e5a8605d32cc37954b13f1ebe023fe4f98c9270105bea74c226c896c3fc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400400ea(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_ram_400400c0();
  FUN_ram_40003bf8((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),1000,0);
  return;
}


/* NanoCore 1.12, address 0x40040102.
 * REA evidence: ev_ba1a25626cea9891c051021e972e4387f0d2dfe8bcdc59235bc609b562bf549d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40040072) */
/* WARNING: Removing unreachable block (ram,0x4004008c) */

void thunk_FUN_ram_4004004c(int param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = FUN_ram_40040028();
  uVar2 = FUN_ram_4003fe7c();
  do {
    uVar4 = FUN_ram_40040028();
    if (uVar4 < uVar3) {
      lVar1 = uVar3 - uVar4;
    }
    else {
      lVar1 = uVar4 - uVar3;
    }
  } while (((int)((ulonglong)lVar1 >> 0x20) == 0) && ((uint)lVar1 < (uVar2 / 1000000) * param_1));
  return;
}


/* NanoCore 1.12, address 0x40040106.
 * REA evidence: ev_2e65096a7e0f9d59e01bc0313e299724dc57417d73a3c86daf57a7894acf7643
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40040106(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  FUN_ram_4003390a(s_CPU_Exception__NO__ld_ram_4009e2c8,mcause & 0x3ff);
  FUN_ram_40033924(10);
  uVar1 = 0;
  do {
    uVar2 = uVar1 + 1;
    FUN_ram_4003390a(s_x_d___08lx_ram_4009e2e0,uVar2,*(undefined4 *)(param_1 + -4 + uVar2 * 4));
    if ((uVar1 & 3) == 3) {
      FUN_ram_40033924(10);
    }
    uVar1 = uVar2;
  } while (uVar2 != 0x1f);
  FUN_ram_40033924(10);
  FUN_ram_4003390a(s_mcause___0x_08lx_ram_4009e2ec,mcause);
  FUN_ram_4003390a(s_mtval___0x_08lx_ram_4009e300,mtval);
  FUN_ram_4003390a(s_mepc___0x_08lx_ram_4009e314,*(undefined4 *)(param_1 + 0x7c));
  FUN_ram_4003390a(s_mstatus__0x_08lx_ram_4009e328,*(undefined4 *)(param_1 + 0x80));
  FUN_ram_40033924(10);
  if (_DAT_ram_30080c88 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x400401ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_ram_30080c88)();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x400401e4.
 * REA evidence: ev_34863acc6aded8515880159093a1ebad46f3dbc00c6633bdff50d3bdc8fad190
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400401e4(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_ram_40006382();
  iVar4 = *(int *)(iVar3 + 0x30);
  iVar3 = FUN_ram_40006382();
  iVar3 = *(int *)(iVar3 + 0x34);
  FUN_ram_4003390a(s___stext__p___etext__p_stack__ram_4009e33c,0x40000000,&DAT_ram_400958e0);
  if (((undefined4 *)(gp + 0x3c) <= param_1) && (param_1 < (undefined4 *)0x3004d641)) {
    FUN_ram_4003390a(s_base_irqstack__0x_08lx_top_irqst_ram_4009e35c,(undefined4 *)(gp + 0x3c),
                     0x3004d640);
    for (uVar1 = 0; param_1 + uVar1 < (undefined4 *)0x3004d640; uVar1 = uVar1 + 1) {
      FUN_ram_4003390a(s_0x_08lx_ram_4009e38c,param_1[uVar1]);
      if ((uVar1 & 3) == 3) {
        FUN_ram_40033924(10);
      }
    }
    FUN_ram_40033924(10);
    param_1 = param_2;
  }
  puVar2 = (undefined4 *)(iVar4 + iVar3);
  FUN_ram_4003390a(s_stack_addr_0x_08lx_stack_addr_en_ram_4009e398,iVar4,puVar2);
  uVar1 = 0;
  for (; param_1 < puVar2; param_1 = param_1 + 1) {
    FUN_ram_4003390a(s_0x_08lx_ram_4009e38c,*param_1);
    if ((uVar1 & 3) == 3) {
      FUN_ram_40033924(10);
    }
    uVar1 = uVar1 + 1;
  }
  FUN_ram_40033920(s_DFU_J0_irq_off__drained_ram_4009c674 + 0x18);
  return;
}


/* NanoCore 1.12, address 0x400402e6.
 * REA evidence: ev_87537112d35922d447e4161cbe9f60bfeb7a93439d3e55dd33399b6d1e2165e9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400402e6(uint *param_1,uint *param_2,undefined4 param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_ram_40006382();
  iVar2 = *(int *)(iVar2 + 0x30);
  iVar3 = FUN_ram_40006382();
  iVar3 = *(int *)(iVar3 + 0x34);
  FUN_ram_4003390a(s___s__d___stext__p___etext__p_ram_4009e3dc,s_backtrace_call_stack_ram_4009e3fc,
                   0x7b,0x40000000,&DAT_ram_400958e0);
  FUN_ram_4003390a(s_0x_08lx_ram_4009e3d0,param_3);
  puVar1 = param_1;
  if (((uint *)(gp + 0x3c) <= param_1) && (param_1 < (uint *)0x3004d641)) {
    iVar4 = 0;
    for (; puVar1 = param_2, param_1 < (uint *)0x3004d640; param_1 = param_1 + 1) {
      if (((0x3fffffff < *param_1) && (*param_1 < 0x400958e1)) && (iVar4 < 0x20)) {
        FUN_ram_4003390a(s_stack_addr_0x_08lx_stack_addr_en_ram_4009e398 + 0x24);
        iVar4 = iVar4 + 1;
      }
    }
  }
  iVar4 = 0;
  for (; puVar1 < (uint *)(iVar2 + iVar3); puVar1 = puVar1 + 1) {
    if (((0x3fffffff < *puVar1) && (*puVar1 < 0x400958e1)) && (iVar4 < 0x20)) {
      FUN_ram_4003390a(s_0x_08lx_ram_4009e3d0);
      iVar4 = iVar4 + 1;
    }
  }
  return;
}


/* NanoCore 1.12, address 0x400403d4.
 * REA evidence: ev_563d2a779fe24f30e042124d61e7b4000a36ca89f5b72cfdb093af85f08322a7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400403d4(int param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  
  if (*(int *)(*(int *)(param_1 + 0x54) + 0x74) == 1) {
    uVar1 = 0;
  }
  else {
    FUN_ram_40004544(*(int *)(param_1 + 0x54),1);
    uVar1 = 0;
    pcVar2 = *(code **)(*(int *)(param_1 + 0x4c) + 0xc);
    if (pcVar2 != (code *)0x0) {
      uVar1 = (*pcVar2)(param_1,1);
    }
    *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x74) = 1;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x40040592.
 * REA evidence: ev_2f53f26dd967fb7d8d42d316c23d6b247c7ae649b2cdf03680b725614c3143f7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40040592(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (*(int *)(*(int *)(param_1 + 0x50) + 0x7c) != 1) {
    pcVar1 = *(code **)(*(int *)(param_1 + 0x4c) + 0xc);
    uVar2 = 0;
    if (pcVar1 != (code *)0x0) {
      uVar2 = (*pcVar1)(param_1,0);
    }
    *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x7c) = 1;
    return uVar2;
  }
  return 0;
}


/* NanoCore 1.12, address 0x400405c8.
 * REA evidence: ev_df45a8b92e8654cc25185c50460465e9d4c918d1c7d3eacde748190dd84d500b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400405c8(int param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  
  uVar1 = 0;
  if (*(int *)(*(int *)(param_1 + 0x54) + 0x74) == 1) {
    uVar1 = 0;
    pcVar2 = *(code **)(*(int *)(param_1 + 0x4c) + 0x10);
    if (pcVar2 != (code *)0x0) {
      uVar1 = (*pcVar2)(param_1,1);
    }
    FUN_ram_400045c0(*(undefined4 *)(param_1 + 0x54));
    *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x74) = 0;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x400406f8.
 * REA evidence: ev_7e034530b8d548dd812231911a5ace048907950f4169b8ca3316fc90ba1a5ee5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400406f8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  
  iVar2 = *(int *)(param_1 + 0x50);
  if (*(int *)(iVar2 + 0x7c) == 1) {
    if (*(char *)(iVar2 + 0x79) == '\0') {
      if (*(short *)(iVar2 + 0x70) != 0) {
        FUN_ram_40040fee(iVar2 + 4,*(undefined4 *)(iVar2 + 0x6c),*(short *)(iVar2 + 0x70),0xffffffff
                        );
        *(undefined2 *)(*(int *)(param_1 + 0x50) + 0x70) = 0;
      }
      *(byte *)(*(int *)(param_1 + 0x50) + 0x78) = *(byte *)(*(int *)(param_1 + 0x50) + 0x78) | 2;
      FUN_ram_40040e96();
      FUN_ram_40040eb6(*(int *)(param_1 + 0x50) + 0x54,0xffffffff);
      *(byte *)(*(int *)(param_1 + 0x50) + 0x78) = *(byte *)(*(int *)(param_1 + 0x50) + 0x78) & 0xfd
      ;
    }
    uVar1 = 0;
    pcVar3 = *(code **)(*(int *)(param_1 + 0x4c) + 0x10);
    if (pcVar3 != (code *)0x0) {
      uVar1 = (*pcVar3)(param_1,0);
    }
    *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x7c) = 0;
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.12, address 0x40040842.
 * REA evidence: ev_9a1a1eea5def991a7c6118f6ce018e656a64f07d3e9b383649a0514871032d4d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40040842(int param_1,undefined4 param_2,ushort param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x1c) = 6;
  *(undefined1 **)(param_1 + 0x30) = &LAB_ram_400404a6;
  *(undefined1 **)(param_1 + 0x34) = &LAB_ram_4004040c;
  *(undefined1 **)(param_1 + 0x38) = &LAB_ram_40040802;
  *(undefined1 **)(param_1 + 0x3c) = &LAB_ram_40040492;
  *(undefined1 **)(param_1 + 0x40) = &LAB_ram_40040604;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 **)(param_1 + 0x44) = &LAB_ram_40040776;
  *(undefined4 *)(param_1 + 0x48) = param_4;
  iVar1 = FUN_ram_400044c8(param_1,param_2,param_3 | 4);
  if (iVar1 == 0) {
    FUN_ram_4000450c(param_1);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x400408b6.
 * REA evidence: ev_be7b4a375a92c9340e5058cfcce2e219c848e62aa282196999ad3c439a7b4504
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400408b6(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iStack_38;
  uint auStack_34 [4];
  
  iVar7 = *(int *)(param_1 + 0x50);
  uVar8 = (uint)*(ushort *)(iVar7 + 100);
  uVar9 = *(uint *)(iVar7 + 0x74);
  iVar2 = FUN_ram_40041122(iVar7 + 4,&iStack_38,auStack_34);
  iVar3 = *(int *)(param_1 + 0x50);
  if (iVar2 == 0) {
    FUN_ram_40004f92(*(int *)(iVar7 + 0x60) + *(int *)(iVar3 + 0x74),0,uVar8);
    uVar10 = 0;
    uVar4 = 0;
    while (uVar10 < uVar8) {
      iVar2 = FUN_ram_40041122(*(int *)(param_1 + 0x50) + 4,&iStack_38,auStack_34);
      iVar3 = *(int *)(param_1 + 0x50);
      if (iVar2 != 0) {
        uVar10 = *(uint *)(iVar7 + 0x68);
        *(undefined2 *)(iVar3 + 0x72) = 0;
        uVar4 = (*(int *)(iVar3 + 0x74) + uVar8) - uVar4;
        if (uVar10 != 0) {
          uVar4 = uVar4 % uVar10;
        }
        *(uint *)(iVar3 + 0x74) = uVar4;
        break;
      }
      uVar1 = auStack_34[0] - *(ushort *)(iVar3 + 0x72);
      if (uVar8 - uVar10 < uVar1) {
        uVar1 = uVar8 - uVar10;
      }
      uVar4 = uVar1 & 0xffff;
      memcpy(*(int *)(iVar7 + 0x60) + *(int *)(iVar3 + 0x74),
                       iStack_38 + (uint)*(ushort *)(iVar3 + 0x72),uVar1 & 0xffff);
      iVar2 = *(int *)(param_1 + 0x50);
      uVar10 = uVar10 + uVar4 & 0xffff;
      uVar1 = (uVar1 & 0xffff) + *(int *)(iVar2 + 0x74);
      uVar6 = *(ushort *)(iVar2 + 0x72) + uVar4;
      if (*(uint *)(iVar7 + 0x68) != 0) {
        uVar1 = uVar1 % *(uint *)(iVar7 + 0x68);
      }
      *(short *)(iVar2 + 0x72) = (short)(uVar6 * 0x10000 >> 0x10);
      *(uint *)(iVar2 + 0x74) = uVar1;
      if ((uVar6 & 0xffff) == auStack_34[0]) {
        *(undefined2 *)(iVar2 + 0x72) = 0;
        FUN_ram_40041270(iVar2 + 4,&iStack_38,auStack_34,0);
        FUN_ram_40005d00(iStack_38);
        if (*(code **)(param_1 + 0x2c) != (code *)0x0) {
          (**(code **)(param_1 + 0x2c))(param_1,iStack_38);
        }
      }
    }
  }
  else {
    if ((*(byte *)(iVar3 + 0x78) & 2) != 0) {
      FUN_ram_40040f48(iVar3 + 0x54);
    }
    FUN_ram_40004f92(*(int *)(iVar7 + 0x60) + *(int *)(*(int *)(param_1 + 0x50) + 0x74),0,uVar8);
    uVar4 = *(int *)(*(int *)(param_1 + 0x50) + 0x74) + uVar8;
    if (*(uint *)(iVar7 + 0x68) != 0) {
      uVar4 = uVar4 % *(uint *)(iVar7 + 0x68);
    }
    *(uint *)(*(int *)(param_1 + 0x50) + 0x74) = uVar4;
  }
  pcVar5 = *(code **)(*(int *)(param_1 + 0x4c) + 0x14);
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(param_1,*(int *)(iVar7 + 0x60) + (uVar9 & 0xffff),0,uVar8);
  }
  return;
}


/* NanoCore 1.12, address 0x40040a04.
 * REA evidence: ev_03d95d7ae51f7dbd0836201e31fc1da89a50a19bbfd3e12d8dfe8159524de7b1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40040a04(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_4000462a(*(undefined4 *)(param_1 + 0x54),0,param_2,param_3);
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40040a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x28))(param_1,param_3);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40040a38.
 * REA evidence: ev_7190086611b0fe414b2ca3f560d827004b0b5ab8efc64503185a87fb12dd7a6c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40040a38(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x28);
  if (pcVar1 != (code *)0x0) {
    uVar2 = FUN_ram_400413ee(param_1 + 0x4c);
    (*pcVar1)(param_1,uVar2);
  }
  if (*(int *)(param_1 + 0x5c) != param_1 + 0x5c) {
    FUN_ram_400064f2(*(int *)(param_1 + 0x5c) + -0x1c);
    FUN_ram_40006092();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40040c3a.
 * REA evidence: ev_da567bfdd3a56928970b38b238da5bfb52ec6e75c80164e7e1aa3585f030a2c6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40040c3a(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     short param_5)

{
  *(int *)(param_1 + 0x60) = param_1 + 0x5c;
  *(int *)(param_1 + 0x5c) = param_1 + 0x5c;
  *(int *)(param_1 + 0x68) = param_1 + 100;
  *(int *)(param_1 + 100) = param_1 + 100;
  FUN_ram_400413e0(param_1 + 0x4c,param_4,(int)param_5);
  *(undefined4 *)(param_1 + 0x1c) = 0x10;
  *(undefined1 **)(param_1 + 0x3c) = &LAB_ram_40040b6c;
  *(undefined1 **)(param_1 + 0x40) = &LAB_ram_40040a7a;
  *(undefined4 *)(param_1 + 0x58) = param_3;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 **)(param_1 + 0x44) = &LAB_ram_40040b3a;
  FUN_ram_400044c8(param_1,param_2,3);
  return;
}


/* NanoCore 1.12, address 0x40040cb2.
 * REA evidence: ev_4631ebee7774702d9b7415c7b56fc8bc395c26a4c309647d1171db11288041eb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40040cb2(int param_1,undefined4 param_2)

{
  FUN_ram_40004988(param_1 + 0x54,s_i2c_bus_lock_ram_4009e44c,1);
  if (*(int *)(param_1 + 0x80) == 0) {
    *(undefined4 *)(param_1 + 0x80) = 1000;
  }
  FUN_ram_40040e54(param_1,param_2);
  return;
}


/* NanoCore 1.12, address 0x40040cec.
 * REA evidence: ev_9b2fa0d92036880d9f2e0d92e93542080a646b8b16e89846dc6fd37c766088f7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40040cec(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_400044c2();
  uVar2 = 0;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x1c) == 8) {
      uVar2 = *(undefined4 *)(iVar1 + 0x48);
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x40040d0a.
 * REA evidence: ev_dd48e07ef91aa1f2fa7b3674694bd16248cb6b1188c9d9a52110816ba73e22fc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40040d0a(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 extraout_a3;
  undefined4 extraout_a4;
  
  uVar1 = 0;
  if (**(int **)(param_1 + 0x4c) != 0) {
    FUN_ram_40004a22(param_1 + 0x54,0xffffffff);
    uVar1 = (*(code *)**(undefined4 **)(param_1 + 0x4c))
                      (param_1,param_2,param_3,extraout_a3,extraout_a4,
                       (code *)**(undefined4 **)(param_1 + 0x4c));
    FUN_ram_40004b14(param_1 + 0x54);
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x40040d50.
 * REA evidence: ev_d2a2e1c9582e60de0e23e8758830e6dfaf02d371ac5e40d9630a09310ab5ff38
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40040d50(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x4c) + 8);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40040d56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.12, address 0x40040d5c.
 * REA evidence: ev_7e1edaf6ce3eb972106c8ff1704a3423c5976d1131469ad9ddde23b37e0bceb2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40040d5c(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x4c) + 0xc);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40040d62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x40040d68.
 * REA evidence: ev_aca6b8cd6850319fba636003d9ad786028bf303a9c5763a4d442578c880686ba
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_40040d68(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = (undefined2)param_5;
  uStack_1c = param_2;
  uStack_1a = param_3;
  uStack_14 = param_4;
  iVar1 = FUN_ram_40040d0a(param_1,&uStack_1c,1);
  if (iVar1 == 0) {
    param_5 = 0;
  }
  return param_5;
}


/* NanoCore 1.12, address 0x40040d92.
 * REA evidence: ev_c2b19e7e84270aac989eef9ee78f1ec1f1e17db3118417868e84c2b808e2771b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_40040d92(undefined4 param_1,undefined2 param_2,ushort param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  undefined2 uStack_1c;
  ushort uStack_1a;
  undefined2 uStack_18;
  undefined4 uStack_14;
  
  uStack_1a = param_3 | 1;
  uStack_18 = (undefined2)param_5;
  uStack_1c = param_2;
  uStack_14 = param_4;
  iVar1 = FUN_ram_40040d0a(param_1,&uStack_1c,1);
  if (iVar1 == 0) {
    param_5 = 0;
  }
  return param_5;
}


/* NanoCore 1.12, address 0x40040e54.
 * REA evidence: ev_3fc35cbca5169a9674da63664446a002c8cb308d8745ca997ef365cc46d2f815
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40040e54(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = 8;
  *(undefined1 **)(param_1 + 0x3c) = &LAB_ram_40040e42;
  *(undefined1 **)(param_1 + 0x40) = &LAB_ram_40040e30;
  *(int *)(param_1 + 0x48) = param_1;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 **)(param_1 + 0x44) = &LAB_ram_40040dc0;
  FUN_ram_400044c8(param_1,param_2,3);
  return 0;
}


/* NanoCore 1.12, address 0x40040e96.
 * REA evidence: ev_3fbc8fcafb1ae2e60ce0fffd976e865d736a546b7d24246eb2fa9745422ac286
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40040e96(undefined4 *param_1)

{
  FUN_ram_400002f4();
  *param_1 = 0;
  param_1[2] = param_1 + 1;
  param_1[1] = param_1 + 1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.12, address 0x40040eb6.
 * REA evidence: ev_e02d2eee5be4bea29d68cb6a5512bdb25e4af6a19a88f2bc3819c4ced9dbd541
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40040eb6(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int aiStack_24 [4];
  
  aiStack_24[0] = param_2;
  iVar1 = FUN_ram_40006382();
  uVar2 = FUN_ram_400002f4();
  if (*param_1 == 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0xfffffffe;
    if (aiStack_24[0] == 0) goto LAB_ram_40040f2e;
    *(undefined4 *)(iVar1 + 0x38) = 0;
    FUN_ram_40006430(iVar1);
    piVar3 = (int *)param_1[2];
    *piVar3 = iVar1 + 0x1c;
    *(int **)(iVar1 + 0x20) = piVar3;
    param_1[2] = iVar1 + 0x1c;
    *(int **)(iVar1 + 0x1c) = param_1 + 1;
    if (0 < aiStack_24[0]) {
      FUN_ram_400067c6(iVar1 + 0x54,0,aiStack_24);
      FUN_ram_400066a2(iVar1 + 0x54);
    }
    FUN_ram_400002fa(uVar2);
    FUN_ram_40006092();
    uVar4 = *(undefined4 *)(iVar1 + 0x38);
    uVar2 = FUN_ram_400002f4();
  }
  *param_1 = 0;
LAB_ram_40040f2e:
  FUN_ram_400002fa(uVar2);
  return uVar4;
}


/* NanoCore 1.12, address 0x40040f48.
 * REA evidence: ev_21152d8d5fa0b5eb87230a9a554914ca97576d6b3663e2afb5a7081adc143eae
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40040f48(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (*param_1 == 1) {
    return;
  }
  uVar1 = FUN_ram_400002f4();
  piVar2 = (int *)param_1[1];
  *param_1 = 1;
  if (piVar2 != param_1 + 1) {
    FUN_ram_400064f2(piVar2 + -7);
    FUN_ram_400002fa(uVar1);
    FUN_ram_40006092();
    return;
  }
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.12, address 0x40040fa4.
 * REA evidence: ev_ebd9067bd63e5886e9a442449bfbc9f017e38e90c3bccc40583a23322a8e698e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40040fa4(undefined4 *param_1,int param_2,undefined2 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = 0xbead0e0e;
  param_1[2] = 0x8000;
  param_1[5] = param_1 + 4;
  param_1[4] = param_1 + 4;
  param_1[8] = param_4;
  *(short *)(param_1 + 1) = (short)param_2;
  *(undefined2 *)((int)param_1 + 6) = param_3;
  param_1[7] = param_1 + 6;
  param_1[6] = param_1 + 6;
  iVar1 = FUN_ram_4000559c(param_2 << 3);
  param_1[3] = iVar1;
  if (iVar1 == 0) {
    uVar2 = 0xfffffffb;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x40040fee.
 * REA evidence: ev_1bd94f09c2eef2e5072e76f096c9c4f96df678b4e818bb324c93ca4c7d801d2f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40040fee(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int aiStack_34 [3];
  
  aiStack_34[0] = param_4;
  iVar1 = FUN_ram_40006382();
  uVar2 = FUN_ram_400002f4();
  do {
    if (-1 < (int)*(uint *)(param_1 + 8)) {
      iVar1 = *(int *)(param_1 + 0xc);
      uVar4 = (*(uint *)(param_1 + 8) & 0x7fffffff) >> 0x10;
      *(undefined4 *)(iVar1 + uVar4 * 8) = param_2;
      *(undefined4 *)(iVar1 + uVar4 * 8 + 4) = param_3;
      uVar5 = uVar4 + 1 & 0x7fff;
      uVar4 = *(uint *)(param_1 + 8) & 0x8000ffff;
      *(uint *)(param_1 + 8) = uVar4 | uVar5 << 0x10;
      if (uVar5 == *(ushort *)(param_1 + 4)) {
        *(uint *)(param_1 + 8) = uVar4;
      }
      uVar4 = *(uint *)(param_1 + 8);
      *(uint *)(param_1 + 8) = uVar4 & 0xffff7fff;
      if ((uVar4 & 0x7fff7fff) >> 0x10 == (uVar4 & 0x7fff)) {
        *(uint *)(param_1 + 8) = uVar4 & 0xffff7fff | 0x80000000;
      }
      piVar3 = *(int **)(param_1 + 0x18);
      iVar6 = 0;
      if (piVar3 != (int *)(param_1 + 0x18)) {
        FUN_ram_400064f2(piVar3 + -7);
        FUN_ram_400002fa(uVar2);
        FUN_ram_40006092();
        return 0;
      }
      break;
    }
    if (aiStack_34[0] == 0) {
      iVar6 = -2;
      break;
    }
    *(undefined4 *)(iVar1 + 0x38) = 0;
    FUN_ram_40006430(iVar1);
    piVar3 = *(int **)(param_1 + 0x14);
    *piVar3 = iVar1 + 0x1c;
    *(int **)(iVar1 + 0x20) = piVar3;
    *(int *)(param_1 + 0x14) = iVar1 + 0x1c;
    *(int *)(iVar1 + 0x1c) = param_1 + 0x10;
    if (0 < aiStack_34[0]) {
      FUN_ram_400067c6(iVar1 + 0x54,0,aiStack_34);
      FUN_ram_400066a2(iVar1 + 0x54);
    }
    FUN_ram_400002fa(uVar2);
    FUN_ram_40006092();
    iVar6 = *(int *)(iVar1 + 0x38);
    uVar2 = FUN_ram_400002f4();
  } while (iVar6 == 0);
  FUN_ram_400002fa(uVar2);
  if ((iVar6 == 0) && (*(code **)(param_1 + 0x20) != (code *)0x0)) {
    (**(code **)(param_1 + 0x20))(param_1,2);
  }
  return iVar6;
}


