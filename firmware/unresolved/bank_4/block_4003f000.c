/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4003f000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4003f02e.
 * REA evidence: ev_5614d6c7e3b63858260283995529ad3939bfeb4fd827527c5288a98cc9057aef
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_ram_4003f02e(void)

{
  return CONCAT44(_DAT_ram_2000bffc,_DAT_ram_2000bff8);
}


/* NanoCore 1.10, address 0x4003f052.
 * REA evidence: ev_6ab34c2a7eadaaa18feb9a10d50941a516dcbf24be099a96b5e8354d98ae196b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003f078) */
/* WARNING: Removing unreachable block (ram,0x4003f092) */

void FUN_ram_4003f052(int param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = FUN_ram_4003f02e();
  uVar2 = FUN_ram_4003ee82();
  do {
    uVar4 = FUN_ram_4003f02e();
    if (uVar4 < uVar3) {
      lVar1 = uVar3 - uVar4;
    }
    else {
      lVar1 = uVar4 - uVar3;
    }
  } while (((int)((ulonglong)lVar1 >> 0x20) == 0) && ((uint)lVar1 < (uVar2 / 1000000) * param_1));
  return;
}


/* NanoCore 1.10, address 0x4003f0ba.
 * REA evidence: ev_cccca6f433738793ed04a279098b6a3397e4690cf8bc28c42ca99f17f1600f9b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003f0ba(int param_1)

{
  FUN_ram_4003f052(param_1 * 1000);
  return;
}


/* NanoCore 1.10, address 0x4003f0c6.
 * REA evidence: ev_7500f48053d606fb6155808e256482ef5b800b6ed87e4e81ea93db4583a3ccf3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003f0de) */

void FUN_ram_4003f0c6(void)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_ram_4003ee82();
  uVar2 = FUN_ram_4003f02e();
  FUN_ram_40003bac((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),uVar1 / 1000000,0);
  return;
}


/* NanoCore 1.10, address 0x4003f0f0.
 * REA evidence: ev_85e1a4c76708a2695fa664a6e55ef5ce5e4a947f3f5010ffbd573176d2d4db02
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003f0f0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_ram_4003f0c6();
  FUN_ram_40003bac((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),1000,0);
  return;
}


/* NanoCore 1.10, address 0x4003f108.
 * REA evidence: ev_63ee6b0a87ba428a1a8dd0087696348dfb1e4aba6228d41ca27c283a006864e3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003f078) */
/* WARNING: Removing unreachable block (ram,0x4003f092) */

void thunk_FUN_ram_4003f052(int param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = FUN_ram_4003f02e();
  uVar2 = FUN_ram_4003ee82();
  do {
    uVar4 = FUN_ram_4003f02e();
    if (uVar4 < uVar3) {
      lVar1 = uVar3 - uVar4;
    }
    else {
      lVar1 = uVar4 - uVar3;
    }
  } while (((int)((ulonglong)lVar1 >> 0x20) == 0) && ((uint)lVar1 < (uVar2 / 1000000) * param_1));
  return;
}


/* NanoCore 1.10, address 0x4003f10c.
 * REA evidence: ev_a2973e63e7fb75f15aacae06261bf70c9c424e0ab5ecd6c094084251a01fc566
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003f10c(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  FUN_ram_40031b48(s_CPU_Exception__NO__ld_ram_4009736c,mcause & 0x3ff);
  FUN_ram_40031b62(10);
  uVar1 = 0;
  do {
    uVar2 = uVar1 + 1;
    FUN_ram_40031b48(s_x_d___08lx_ram_40097384,uVar2,*(undefined4 *)(param_1 + -4 + uVar2 * 4));
    if ((uVar1 & 3) == 3) {
      FUN_ram_40031b62(10);
    }
    uVar1 = uVar2;
  } while (uVar2 != 0x1f);
  FUN_ram_40031b62(10);
  FUN_ram_40031b48(s_mcause___0x_08lx_ram_40097390,mcause);
  FUN_ram_40031b48(s_mtval___0x_08lx_ram_400973a4,mtval);
  FUN_ram_40031b48(s_mepc___0x_08lx_ram_400973b8,*(undefined4 *)(param_1 + 0x7c));
  FUN_ram_40031b48(s_mstatus__0x_08lx_ram_400973cc,*(undefined4 *)(param_1 + 0x80));
  FUN_ram_40031b62(10);
  if (_DAT_ram_3007f888 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4003f1d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_ram_3007f888)();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4003f1ea.
 * REA evidence: ev_22cde16a7260837515fc6ed410ccb7319a32c264621bcd7c14a76e067037c2b6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003f1ea(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_ram_40006472();
  iVar4 = *(int *)(iVar3 + 0x30);
  iVar3 = FUN_ram_40006472();
  iVar3 = *(int *)(iVar3 + 0x34);
  FUN_ram_40031b48(s___stext__p___etext__p_stack__ram_400973e0,0x40000000,&DAT_ram_40091a30);
  if (((undefined4 *)(gp + 0x3c) <= param_1) && (param_1 < (undefined4 *)0x30049041)) {
    FUN_ram_40031b48(s_base_irqstack__0x_08lx_top_irqst_ram_40097400,(undefined4 *)(gp + 0x3c),
                     0x30049040);
    for (uVar1 = 0; param_1 + uVar1 < (undefined4 *)0x30049040; uVar1 = uVar1 + 1) {
      FUN_ram_40031b48(s_0x_08lx_ram_40097430,param_1[uVar1]);
      if ((uVar1 & 3) == 3) {
        FUN_ram_40031b62(10);
      }
    }
    FUN_ram_40031b62(10);
    param_1 = param_2;
  }
  puVar2 = (undefined4 *)(iVar4 + iVar3);
  FUN_ram_40031b48(s_stack_addr_0x_08lx_stack_addr_en_ram_4009743c,iVar4,puVar2);
  uVar1 = 0;
  for (; param_1 < puVar2; param_1 = param_1 + 1) {
    FUN_ram_40031b48(s_0x_08lx_ram_40097430,*param_1);
    if ((uVar1 & 3) == 3) {
      FUN_ram_40031b62(10);
    }
    uVar1 = uVar1 + 1;
  }
  FUN_ram_40031b5e(s_DFU_J0_irq_off__drained_ram_40092e94 + 0x18);
  return;
}


/* NanoCore 1.10, address 0x4003f2ec.
 * REA evidence: ev_1a1a0b83154968f409f6d3295401b378959cef5d01669b9faf904ca5a9bd38fb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003f2ec(uint *param_1,uint *param_2,undefined4 param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_ram_40006472();
  iVar2 = *(int *)(iVar2 + 0x30);
  iVar3 = FUN_ram_40006472();
  iVar3 = *(int *)(iVar3 + 0x34);
  FUN_ram_40031b48(s___s__d___stext__p___etext__p_ram_40097480,s_backtrace_call_stack_ram_400974a0,
                   0x7b,0x40000000,&DAT_ram_40091a30);
  FUN_ram_40031b48(s_0x_08lx_ram_40097474,param_3);
  puVar1 = param_1;
  if (((uint *)(gp + 0x3c) <= param_1) && (param_1 < (uint *)0x30049041)) {
    iVar4 = 0;
    for (; puVar1 = param_2, param_1 < (uint *)0x30049040; param_1 = param_1 + 1) {
      if (((0x3fffffff < *param_1) && (*param_1 < 0x40091a31)) && (iVar4 < 0x20)) {
        FUN_ram_40031b48(s_stack_addr_0x_08lx_stack_addr_en_ram_4009743c + 0x24);
        iVar4 = iVar4 + 1;
      }
    }
  }
  iVar4 = 0;
  for (; puVar1 < (uint *)(iVar2 + iVar3); puVar1 = puVar1 + 1) {
    if (((0x3fffffff < *puVar1) && (*puVar1 < 0x40091a31)) && (iVar4 < 0x20)) {
      FUN_ram_40031b48(s_0x_08lx_ram_40097474);
      iVar4 = iVar4 + 1;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x4003f3da.
 * REA evidence: ev_d86f7c020748c93ca2dfd69285f1594a3250fbaadc5d9b03ddcb2bbd6cb88daf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003f3da(int param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  
  if (*(int *)(*(int *)(param_1 + 0x54) + 0x74) == 1) {
    uVar1 = 0;
  }
  else {
    FUN_ram_400044f8(*(int *)(param_1 + 0x54),1);
    uVar1 = 0;
    pcVar2 = *(code **)(*(int *)(param_1 + 0x4c) + 0xc);
    if (pcVar2 != (code *)0x0) {
      uVar1 = (*pcVar2)(param_1,1);
    }
    *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x74) = 1;
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4003f598.
 * REA evidence: ev_050712dbacc05a793e3bbdd0ecb4157e06dc9e6b1099e117440be868575abe73
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003f598(int param_1)

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


/* NanoCore 1.10, address 0x4003f5ce.
 * REA evidence: ev_524170d4488f24d002f60319cba0198a726e49c84786818e145d19c105623b24
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003f5ce(int param_1)

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
    FUN_ram_40004574(*(undefined4 *)(param_1 + 0x54));
    *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x74) = 0;
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4003f6fe.
 * REA evidence: ev_20faf63465940ed1229215d35df550f7fc9a50779b09b5ddf9f400f43bcea16c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003f6fe(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  
  iVar2 = *(int *)(param_1 + 0x50);
  if (*(int *)(iVar2 + 0x7c) == 1) {
    if (*(char *)(iVar2 + 0x79) == '\0') {
      if (*(short *)(iVar2 + 0x70) != 0) {
        FUN_ram_4003fff4(iVar2 + 4,*(undefined4 *)(iVar2 + 0x6c),*(short *)(iVar2 + 0x70),0xffffffff
                        );
        *(undefined2 *)(*(int *)(param_1 + 0x50) + 0x70) = 0;
      }
      *(byte *)(*(int *)(param_1 + 0x50) + 0x78) = *(byte *)(*(int *)(param_1 + 0x50) + 0x78) | 2;
      FUN_ram_4003fe9c();
      FUN_ram_4003febc(*(int *)(param_1 + 0x50) + 0x54,0xffffffff);
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


/* NanoCore 1.10, address 0x4003f848.
 * REA evidence: ev_9116dbbb0a27b445df4483f8c9ae167451ae48aae5257b5d93ef76610f5345d6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003f848(int param_1,undefined4 param_2,ushort param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x1c) = 6;
  *(undefined1 **)(param_1 + 0x30) = &LAB_ram_4003f4ac;
  *(undefined1 **)(param_1 + 0x34) = &LAB_ram_4003f412;
  *(undefined1 **)(param_1 + 0x38) = &LAB_ram_4003f808;
  *(undefined1 **)(param_1 + 0x3c) = &LAB_ram_4003f498;
  *(undefined1 **)(param_1 + 0x40) = &LAB_ram_4003f60a;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 **)(param_1 + 0x44) = &LAB_ram_4003f77c;
  *(undefined4 *)(param_1 + 0x48) = param_4;
  iVar1 = FUN_ram_4000447c(param_1,param_2,param_3 | 4);
  if (iVar1 == 0) {
    FUN_ram_400044c0(param_1);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4003f8bc.
 * REA evidence: ev_05145b4cb62d80a33776e7037ed76383a5c6a37ddb4f4f8472954f77b59e20ac
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003f8bc(int param_1)

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
  iVar2 = FUN_ram_40040128(iVar7 + 4,&iStack_38,auStack_34);
  iVar3 = *(int *)(param_1 + 0x50);
  if (iVar2 == 0) {
    FUN_ram_4000505c(*(int *)(iVar7 + 0x60) + *(int *)(iVar3 + 0x74),0,uVar8);
    uVar10 = 0;
    uVar4 = 0;
    while (uVar10 < uVar8) {
      iVar2 = FUN_ram_40040128(*(int *)(param_1 + 0x50) + 4,&iStack_38,auStack_34);
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
      memcpy((void *)(*(int *)(iVar7 + 0x60) + *(int *)(iVar3 + 0x74)),
             (void *)(iStack_38 + (uint)*(ushort *)(iVar3 + 0x72)),uVar1 & 0xffff);
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
        FUN_ram_40040276(iVar2 + 4,&iStack_38,auStack_34,0);
        FUN_ram_40005df0(iStack_38);
        if (*(code **)(param_1 + 0x2c) != (code *)0x0) {
          (**(code **)(param_1 + 0x2c))(param_1,iStack_38);
        }
      }
    }
  }
  else {
    if ((*(byte *)(iVar3 + 0x78) & 2) != 0) {
      FUN_ram_4003ff4e(iVar3 + 0x54);
    }
    FUN_ram_4000505c(*(int *)(iVar7 + 0x60) + *(int *)(*(int *)(param_1 + 0x50) + 0x74),0,uVar8);
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


/* NanoCore 1.10, address 0x4003fa0a.
 * REA evidence: ev_da435c0928947159e3600b7a1bbcd03520b39e9bf5ffaab4ce6404b8499702b9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003fa0a(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400045de(*(undefined4 *)(param_1 + 0x54),0,param_2,param_3);
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4003fa32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x28))(param_1,param_3);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4003fa3e.
 * REA evidence: ev_af509affd0d184bf40ad3d1f1c36cf1d4cbcc7f12000ecad175d5edec682450b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003fa3e(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x28);
  if (pcVar1 != (code *)0x0) {
    uVar2 = FUN_ram_400403f4(param_1 + 0x4c);
    (*pcVar1)(param_1,uVar2);
  }
  if (*(int *)(param_1 + 0x5c) != param_1 + 0x5c) {
    FUN_ram_400065e2(*(int *)(param_1 + 0x5c) + -0x1c);
    FUN_ram_40006182();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4003fc40.
 * REA evidence: ev_0d4ba5d6842ed87d5b826730b1183972fea000c9ee5bbb8c8bcda52756a61d17
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003fc40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     short param_5)

{
  *(int *)(param_1 + 0x60) = param_1 + 0x5c;
  *(int *)(param_1 + 0x5c) = param_1 + 0x5c;
  *(int *)(param_1 + 0x68) = param_1 + 100;
  *(int *)(param_1 + 100) = param_1 + 100;
  FUN_ram_400403e6(param_1 + 0x4c,param_4,(int)param_5);
  *(undefined4 *)(param_1 + 0x1c) = 0x10;
  *(undefined1 **)(param_1 + 0x3c) = &LAB_ram_4003fb72;
  *(undefined1 **)(param_1 + 0x40) = &LAB_ram_4003fa80;
  *(undefined4 *)(param_1 + 0x58) = param_3;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 **)(param_1 + 0x44) = &LAB_ram_4003fb40;
  FUN_ram_4000447c(param_1,param_2,3);
  return;
}


/* NanoCore 1.10, address 0x4003fcb8.
 * REA evidence: ev_fd14c08c2ed122284809d2bcd80b50bec90186cb9f664b9f217439543693793b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003fcb8(int param_1,undefined4 param_2)

{
  FUN_ram_4000493c(param_1 + 0x54,s_i2c_bus_lock_ram_400974f0,1);
  if (*(int *)(param_1 + 0x80) == 0) {
    *(undefined4 *)(param_1 + 0x80) = 1000;
  }
  FUN_ram_4003fe5a(param_1,param_2);
  return;
}


/* NanoCore 1.10, address 0x4003fcf2.
 * REA evidence: ev_db8cefda34c63579d3e3d2a75da273e90c3882ff5f708b15625994f551e23ce8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003fcf2(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_40004476();
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


/* NanoCore 1.10, address 0x4003fd10.
 * REA evidence: ev_88ba004b726049d7290c4597ad252463233986c15d7151911658d211134f33f6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003fd10(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 extraout_a3;
  undefined4 extraout_a4;
  
  uVar1 = 0;
  if (**(int **)(param_1 + 0x4c) != 0) {
    FUN_ram_400049d6(param_1 + 0x54,0xffffffff);
    uVar1 = (*(code *)**(undefined4 **)(param_1 + 0x4c))
                      (param_1,param_2,param_3,extraout_a3,extraout_a4,
                       (code *)**(undefined4 **)(param_1 + 0x4c));
    FUN_ram_40004ac8(param_1 + 0x54);
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4003fd56.
 * REA evidence: ev_4cd8d766206bd426218845ba7de83468f792882421085baf155fd68b88065125
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003fd56(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x4c) + 8);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4003fd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.10, address 0x4003fd62.
 * REA evidence: ev_c40412535391400bf3fd735176b43a070805f2f7fa75b68d8e2a98ac661d58c5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003fd62(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x4c) + 0xc);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4003fd68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x4003fd6e.
 * REA evidence: ev_320479bf7940371880aed34376c70b5cd52bb64201aeedce4418d691b5786f61
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_4003fd6e(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4,
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
  iVar1 = FUN_ram_4003fd10(param_1,&uStack_1c,1);
  if (iVar1 == 0) {
    param_5 = 0;
  }
  return param_5;
}


/* NanoCore 1.10, address 0x4003fd98.
 * REA evidence: ev_0430726d94eab74515af72bf90be6ecd1cec189b5db15ddd070c8c1bcb91e80e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_4003fd98(undefined4 param_1,undefined2 param_2,ushort param_3,undefined4 param_4,
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
  iVar1 = FUN_ram_4003fd10(param_1,&uStack_1c,1);
  if (iVar1 == 0) {
    param_5 = 0;
  }
  return param_5;
}


/* NanoCore 1.10, address 0x4003fe5a.
 * REA evidence: ev_d17fe140d7e48a491f11d2b3467d68bbbc3657794bee4de7c2fe9dc7dd81fe05
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003fe5a(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = 8;
  *(undefined1 **)(param_1 + 0x3c) = &LAB_ram_4003fe48;
  *(undefined1 **)(param_1 + 0x40) = &LAB_ram_4003fe36;
  *(int *)(param_1 + 0x48) = param_1;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 **)(param_1 + 0x44) = &LAB_ram_4003fdc6;
  FUN_ram_4000447c(param_1,param_2,3);
  return 0;
}


/* NanoCore 1.10, address 0x4003fe9c.
 * REA evidence: ev_6280b482b1a4ccc5d4a5552449059a85f2ac2fe65ac96296671b9e770d6fafc2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003fe9c(undefined4 *param_1)

{
  FUN_ram_400002f4();
  *param_1 = 0;
  param_1[2] = param_1 + 1;
  param_1[1] = param_1 + 1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.10, address 0x4003febc.
 * REA evidence: ev_b3314f5719070a168617c9924c303c89714b526dae0485debebf717a3fd58042
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003febc(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int aiStack_24 [4];
  
  aiStack_24[0] = param_2;
  iVar1 = FUN_ram_40006472();
  uVar2 = FUN_ram_400002f4();
  if (*param_1 == 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0xfffffffe;
    if (aiStack_24[0] == 0) goto LAB_ram_4003ff34;
    *(undefined4 *)(iVar1 + 0x38) = 0;
    FUN_ram_40006520(iVar1);
    piVar3 = (int *)param_1[2];
    *piVar3 = iVar1 + 0x1c;
    *(int **)(iVar1 + 0x20) = piVar3;
    param_1[2] = iVar1 + 0x1c;
    *(int **)(iVar1 + 0x1c) = param_1 + 1;
    if (0 < aiStack_24[0]) {
      FUN_ram_400068b6(iVar1 + 0x54,0,aiStack_24);
      FUN_ram_40006792(iVar1 + 0x54);
    }
    FUN_ram_400002fa(uVar2);
    FUN_ram_40006182();
    uVar4 = *(undefined4 *)(iVar1 + 0x38);
    uVar2 = FUN_ram_400002f4();
  }
  *param_1 = 0;
LAB_ram_4003ff34:
  FUN_ram_400002fa(uVar2);
  return uVar4;
}


/* NanoCore 1.10, address 0x4003ff4e.
 * REA evidence: ev_3b6090ff58b7672f0599abd4b1e6d93f3b614748b269c39b9ea7b6285f19210b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003ff4e(int *param_1)

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
    FUN_ram_400065e2(piVar2 + -7);
    FUN_ram_400002fa(uVar1);
    FUN_ram_40006182();
    return;
  }
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.10, address 0x4003ffaa.
 * REA evidence: ev_e8ce3a04240e36be7b7954c21a8071f72a12f35012ad63130da4209741b55feb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003ffaa(undefined4 *param_1,int param_2,undefined2 param_3,undefined4 param_4)

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
  iVar1 = FUN_ram_40005666(param_2 << 3);
  param_1[3] = iVar1;
  if (iVar1 == 0) {
    uVar2 = 0xfffffffb;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x4003fff4.
 * REA evidence: ev_5e50f8fde47f9a8b513850f023b434b61ecd9fcbde06377079445dfe8c0a7967
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003fff4(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int aiStack_34 [3];
  
  aiStack_34[0] = param_4;
  iVar1 = FUN_ram_40006472();
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
        FUN_ram_400065e2(piVar3 + -7);
        FUN_ram_400002fa(uVar2);
        FUN_ram_40006182();
        return 0;
      }
      break;
    }
    if (aiStack_34[0] == 0) {
      iVar6 = -2;
      break;
    }
    *(undefined4 *)(iVar1 + 0x38) = 0;
    FUN_ram_40006520(iVar1);
    piVar3 = *(int **)(param_1 + 0x14);
    *piVar3 = iVar1 + 0x1c;
    *(int **)(iVar1 + 0x20) = piVar3;
    *(int *)(param_1 + 0x14) = iVar1 + 0x1c;
    *(int *)(iVar1 + 0x1c) = param_1 + 0x10;
    if (0 < aiStack_34[0]) {
      FUN_ram_400068b6(iVar1 + 0x54,0,aiStack_34);
      FUN_ram_40006792(iVar1 + 0x54);
    }
    FUN_ram_400002fa(uVar2);
    FUN_ram_40006182();
    iVar6 = *(int *)(iVar1 + 0x38);
    uVar2 = FUN_ram_400002f4();
  } while (iVar6 == 0);
  FUN_ram_400002fa(uVar2);
  if ((iVar6 == 0) && (*(code **)(param_1 + 0x20) != (code *)0x0)) {
    (**(code **)(param_1 + 0x20))(param_1,2);
  }
  return iVar6;
}


