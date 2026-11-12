/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40040000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40040028.
 * REA evidence: ev_78d3b43cc4358d66695078a4bed77c73e2fe98e6ab13c58632ab1ea4c6fe3ba3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40040028(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_ram_4003fffe();
  FUN_ram_40003b9c((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),1000,0);
  return;
}


/* NanoCore 1.11, address 0x40040040.
 * REA evidence: ev_d65c2ca37b211b6ff0a9911298368b6a664d9d403864cd060e7336df51b191d3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003ffb0) */
/* WARNING: Removing unreachable block (ram,0x4003ffca) */

void thunk_FUN_ram_4003ff8a(int param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = FUN_ram_4003ff66();
  uVar2 = FUN_ram_4003fdba();
  do {
    uVar4 = FUN_ram_4003ff66();
    if (uVar4 < uVar3) {
      lVar1 = uVar3 - uVar4;
    }
    else {
      lVar1 = uVar4 - uVar3;
    }
  } while (((int)((ulonglong)lVar1 >> 0x20) == 0) && ((uint)lVar1 < (uVar2 / 1000000) * param_1));
  return;
}


/* NanoCore 1.11, address 0x40040044.
 * REA evidence: ev_a8cf62fcad59dec840f0b8901c731b60fcb7bddb81ebf4167701e9915d7d881e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40040044(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  FUN_ram_40032a1a(s_CPU_Exception__NO__ld_ram_400991e8,mcause & 0x3ff);
  FUN_ram_40032a34(10);
  uVar1 = 0;
  do {
    uVar2 = uVar1 + 1;
    FUN_ram_40032a1a(s_x_d___08lx_ram_40099200,uVar2,*(undefined4 *)(param_1 + -4 + uVar2 * 4));
    if ((uVar1 & 3) == 3) {
      FUN_ram_40032a34(10);
    }
    uVar1 = uVar2;
  } while (uVar2 != 0x1f);
  FUN_ram_40032a34(10);
  FUN_ram_40032a1a(s_mcause___0x_08lx_ram_4009920c,mcause);
  FUN_ram_40032a1a(s_mtval___0x_08lx_ram_40099220,mtval);
  FUN_ram_40032a1a(s_mepc___0x_08lx_ram_40099234,*(undefined4 *)(param_1 + 0x7c));
  FUN_ram_40032a1a(s_mstatus__0x_08lx_ram_40099248,*(undefined4 *)(param_1 + 0x80));
  FUN_ram_40032a34(10);
  if (_DAT_ram_30080c08 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4004010c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_ram_30080c08)();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40040122.
 * REA evidence: ev_8e40f682648c612ce06565adc268aa269d5a77d9f703f93eabafb9541a6740d8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40040122(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_ram_40006464();
  iVar4 = *(int *)(iVar3 + 0x30);
  iVar3 = FUN_ram_40006464();
  iVar3 = *(int *)(iVar3 + 0x34);
  FUN_ram_40032a1a(s___stext__p___etext__p_stack__ram_4009925c,0x40000000,&DAT_ram_400937f0);
  if (((undefined4 *)(gp + 0x3c) <= param_1) && (param_1 < (undefined4 *)0x3004c701)) {
    FUN_ram_40032a1a(s_base_irqstack__0x_08lx_top_irqst_ram_4009927c,(undefined4 *)(gp + 0x3c),
                     0x3004c700);
    for (uVar1 = 0; param_1 + uVar1 < (undefined4 *)0x3004c700; uVar1 = uVar1 + 1) {
      FUN_ram_40032a1a(s_0x_08lx_ram_400992ac,param_1[uVar1]);
      if ((uVar1 & 3) == 3) {
        FUN_ram_40032a34(10);
      }
    }
    FUN_ram_40032a34(10);
    param_1 = param_2;
  }
  puVar2 = (undefined4 *)(iVar4 + iVar3);
  FUN_ram_40032a1a(s_stack_addr_0x_08lx_stack_addr_en_ram_400992b8,iVar4,puVar2);
  uVar1 = 0;
  for (; param_1 < puVar2; param_1 = param_1 + 1) {
    FUN_ram_40032a1a(s_0x_08lx_ram_400992ac,*param_1);
    if ((uVar1 & 3) == 3) {
      FUN_ram_40032a34(10);
    }
    uVar1 = uVar1 + 1;
  }
  FUN_ram_40032a30(s_DFU_J0_irq_off__drained_ram_40094c80 + 0x18);
  return;
}


/* NanoCore 1.11, address 0x40040224.
 * REA evidence: ev_4ca5727288f65c88904265bffdf26bcf33682e1487798e82acb31ef216cbfe82
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40040224(uint *param_1,uint *param_2,undefined4 param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_ram_40006464();
  iVar2 = *(int *)(iVar2 + 0x30);
  iVar3 = FUN_ram_40006464();
  iVar3 = *(int *)(iVar3 + 0x34);
  FUN_ram_40032a1a(s___s__d___stext__p___etext__p_ram_400992fc,s_backtrace_call_stack_ram_4009931c,
                   0x7b,0x40000000,&DAT_ram_400937f0);
  FUN_ram_40032a1a(s_0x_08lx_ram_400992f0,param_3);
  puVar1 = param_1;
  if (((uint *)(gp + 0x3c) <= param_1) && (param_1 < (uint *)0x3004c701)) {
    iVar4 = 0;
    for (; puVar1 = param_2, param_1 < (uint *)0x3004c700; param_1 = param_1 + 1) {
      if (((0x3fffffff < *param_1) && (*param_1 < 0x400937f1)) && (iVar4 < 0x20)) {
        FUN_ram_40032a1a(s_stack_addr_0x_08lx_stack_addr_en_ram_400992b8 + 0x24);
        iVar4 = iVar4 + 1;
      }
    }
  }
  iVar4 = 0;
  for (; puVar1 < (uint *)(iVar2 + iVar3); puVar1 = puVar1 + 1) {
    if (((0x3fffffff < *puVar1) && (*puVar1 < 0x400937f1)) && (iVar4 < 0x20)) {
      FUN_ram_40032a1a(s_0x_08lx_ram_400992f0);
      iVar4 = iVar4 + 1;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x40040312.
 * REA evidence: ev_1e8bdd484b696a03e2a90aefde4b15ec5fe951f39e4317a0a6813ffee59e997f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40040312(int param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  
  if (*(int *)(*(int *)(param_1 + 0x54) + 0x74) == 1) {
    uVar1 = 0;
  }
  else {
    FUN_ram_400044e8(*(int *)(param_1 + 0x54),1);
    uVar1 = 0;
    pcVar2 = *(code **)(*(int *)(param_1 + 0x4c) + 0xc);
    if (pcVar2 != (code *)0x0) {
      uVar1 = (*pcVar2)(param_1,1);
    }
    *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x74) = 1;
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x400404d0.
 * REA evidence: ev_8504b587206b92df93e3fbaa75cd6959950a6d7a2fc9c398b0a07ec97dca28f1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400404d0(int param_1)

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


/* NanoCore 1.11, address 0x40040506.
 * REA evidence: ev_f0abc8ce09bc0102e5e030e9f672e2e6bb3846ae503974fd2d66323ac573ead7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40040506(int param_1)

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
    FUN_ram_40004564(*(undefined4 *)(param_1 + 0x54));
    *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x74) = 0;
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x40040636.
 * REA evidence: ev_ef94d0cff3e14e2b920882142fd0ee54f8ccb46d5150b74707445c62612ac648
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40040636(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  
  iVar2 = *(int *)(param_1 + 0x50);
  if (*(int *)(iVar2 + 0x7c) == 1) {
    if (*(char *)(iVar2 + 0x79) == '\0') {
      if (*(short *)(iVar2 + 0x70) != 0) {
        FUN_ram_40040f2c(iVar2 + 4,*(undefined4 *)(iVar2 + 0x6c),*(short *)(iVar2 + 0x70),0xffffffff
                        );
        *(undefined2 *)(*(int *)(param_1 + 0x50) + 0x70) = 0;
      }
      *(byte *)(*(int *)(param_1 + 0x50) + 0x78) = *(byte *)(*(int *)(param_1 + 0x50) + 0x78) | 2;
      FUN_ram_40040dd4();
      FUN_ram_40040df4(*(int *)(param_1 + 0x50) + 0x54,0xffffffff);
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


/* NanoCore 1.11, address 0x40040780.
 * REA evidence: ev_1405964e2728923fea90eb79e5cb782f18a83487ed3e1f75ccde4090b2ca9273
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40040780(int param_1,undefined4 param_2,ushort param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x1c) = 6;
  *(undefined1 **)(param_1 + 0x30) = &LAB_ram_400403e4;
  *(undefined1 **)(param_1 + 0x34) = &LAB_ram_4004034a;
  *(undefined1 **)(param_1 + 0x38) = &LAB_ram_40040740;
  *(undefined1 **)(param_1 + 0x3c) = &LAB_ram_400403d0;
  *(undefined1 **)(param_1 + 0x40) = &LAB_ram_40040542;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 **)(param_1 + 0x44) = &LAB_ram_400406b4;
  *(undefined4 *)(param_1 + 0x48) = param_4;
  iVar1 = FUN_ram_4000446c(param_1,param_2,param_3 | 4);
  if (iVar1 == 0) {
    FUN_ram_400044b0(param_1);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x400407f4.
 * REA evidence: ev_d1a92b9b886297e923d740a3d3a7f0733f62e2728cb6af18667b03547192e517
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400407f4(int param_1)

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
  iVar2 = FUN_ram_40041060(iVar7 + 4,&iStack_38,auStack_34);
  iVar3 = *(int *)(param_1 + 0x50);
  if (iVar2 == 0) {
    FUN_ram_4000504c(*(int *)(iVar7 + 0x60) + *(int *)(iVar3 + 0x74),0,uVar8);
    uVar10 = 0;
    uVar4 = 0;
    while (uVar10 < uVar8) {
      iVar2 = FUN_ram_40041060(*(int *)(param_1 + 0x50) + 4,&iStack_38,auStack_34);
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
        FUN_ram_400411ae(iVar2 + 4,&iStack_38,auStack_34,0);
        FUN_ram_40005de0(iStack_38);
        if (*(code **)(param_1 + 0x2c) != (code *)0x0) {
          (**(code **)(param_1 + 0x2c))(param_1,iStack_38);
        }
      }
    }
  }
  else {
    if ((*(byte *)(iVar3 + 0x78) & 2) != 0) {
      FUN_ram_40040e86(iVar3 + 0x54);
    }
    FUN_ram_4000504c(*(int *)(iVar7 + 0x60) + *(int *)(*(int *)(param_1 + 0x50) + 0x74),0,uVar8);
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


/* NanoCore 1.11, address 0x40040942.
 * REA evidence: ev_4091c25f12ba173501879d5e22cbecb97b8bfd3871b9795453ea1cc0b1e585a5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40040942(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_400045ce(*(undefined4 *)(param_1 + 0x54),0,param_2,param_3);
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4004096a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x28))(param_1,param_3);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40040976.
 * REA evidence: ev_3d112f65da529921d3eff71dc09a3444ef3384a8f747018ee7e39f51dcdc155d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40040976(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x28);
  if (pcVar1 != (code *)0x0) {
    uVar2 = FUN_ram_4004132c(param_1 + 0x4c);
    (*pcVar1)(param_1,uVar2);
  }
  if (*(int *)(param_1 + 0x5c) != param_1 + 0x5c) {
    FUN_ram_400065d4(*(int *)(param_1 + 0x5c) + -0x1c);
    FUN_ram_40006172();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40040b78.
 * REA evidence: ev_415128f00239d6e549b5a3bcdc68795f5e91df3dcfb0b5ae4fef4871f5f7e641
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40040b78(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     short param_5)

{
  *(int *)(param_1 + 0x60) = param_1 + 0x5c;
  *(int *)(param_1 + 0x5c) = param_1 + 0x5c;
  *(int *)(param_1 + 0x68) = param_1 + 100;
  *(int *)(param_1 + 100) = param_1 + 100;
  FUN_ram_4004131e(param_1 + 0x4c,param_4,(int)param_5);
  *(undefined4 *)(param_1 + 0x1c) = 0x10;
  *(undefined1 **)(param_1 + 0x3c) = &LAB_ram_40040aaa;
  *(undefined1 **)(param_1 + 0x40) = &LAB_ram_400409b8;
  *(undefined4 *)(param_1 + 0x58) = param_3;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 **)(param_1 + 0x44) = &LAB_ram_40040a78;
  FUN_ram_4000446c(param_1,param_2,3);
  return;
}


/* NanoCore 1.11, address 0x40040bf0.
 * REA evidence: ev_94b86fb74631eb63e1dee8a8b2f14bc7b7a24a7bd58f18ab98f58e873061f5b1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40040bf0(int param_1,undefined4 param_2)

{
  FUN_ram_4000492c(param_1 + 0x54,s_i2c_bus_lock_ram_4009936c,1);
  if (*(int *)(param_1 + 0x80) == 0) {
    *(undefined4 *)(param_1 + 0x80) = 1000;
  }
  FUN_ram_40040d92(param_1,param_2);
  return;
}


/* NanoCore 1.11, address 0x40040c2a.
 * REA evidence: ev_8c42ac82ffda0bd241598b23cb2a0e815057b17b881795ecae1cb034c7528802
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40040c2a(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_40004466();
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


/* NanoCore 1.11, address 0x40040c48.
 * REA evidence: ev_6ba984b8647cabcdea35bb04e165ccf1b746297a6afbe5741b5e7dd7736dd320
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40040c48(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 extraout_a3;
  undefined4 extraout_a4;
  
  uVar1 = 0;
  if (**(int **)(param_1 + 0x4c) != 0) {
    FUN_ram_400049c6(param_1 + 0x54,0xffffffff);
    uVar1 = (*(code *)**(undefined4 **)(param_1 + 0x4c))
                      (param_1,param_2,param_3,extraout_a3,extraout_a4,
                       (code *)**(undefined4 **)(param_1 + 0x4c));
    FUN_ram_40004ab8(param_1 + 0x54);
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x40040c8e.
 * REA evidence: ev_ea86ae9e2ec1e0bee0cecfc794ae9352102231f70ead8f337eefafc983005b1e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40040c8e(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x4c) + 8);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40040c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.11, address 0x40040c9a.
 * REA evidence: ev_4dc5d39ba363288935bf353608baf71c4f689733457a5a8cfac3a253075bd71c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40040c9a(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x4c) + 0xc);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40040ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x40040ca6.
 * REA evidence: ev_fd4c21c2967f0ff4fd66972fed191ec99b4a89c2a6aca54ee7d95241a5d8da26
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_40040ca6(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4,
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
  iVar1 = FUN_ram_40040c48(param_1,&uStack_1c,1);
  if (iVar1 == 0) {
    param_5 = 0;
  }
  return param_5;
}


/* NanoCore 1.11, address 0x40040cd0.
 * REA evidence: ev_4b7039f8e716768d1d63121fe2f072f50b8dfe9c38c6602be4f4d02bb53a671e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_40040cd0(undefined4 param_1,undefined2 param_2,ushort param_3,undefined4 param_4,
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
  iVar1 = FUN_ram_40040c48(param_1,&uStack_1c,1);
  if (iVar1 == 0) {
    param_5 = 0;
  }
  return param_5;
}


/* NanoCore 1.11, address 0x40040d92.
 * REA evidence: ev_91015a95b7625a62e72da88399d5e3e0ee7c652ec95fe336e935ddb33d1d7827
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40040d92(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = 8;
  *(undefined1 **)(param_1 + 0x3c) = &LAB_ram_40040d80;
  *(undefined1 **)(param_1 + 0x40) = &LAB_ram_40040d6e;
  *(int *)(param_1 + 0x48) = param_1;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 **)(param_1 + 0x44) = &LAB_ram_40040cfe;
  FUN_ram_4000446c(param_1,param_2,3);
  return 0;
}


/* NanoCore 1.11, address 0x40040dd4.
 * REA evidence: ev_fc3edc175a188ab564167619feeb425b176bf0577b31b1f2c7de5d6d79c75a02
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40040dd4(undefined4 *param_1)

{
  FUN_ram_400002f4();
  *param_1 = 0;
  param_1[2] = param_1 + 1;
  param_1[1] = param_1 + 1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.11, address 0x40040df4.
 * REA evidence: ev_473d3e499e881f099c65fd8e4b3fafece7a8bea44d8917461db8f2c69f1d22d1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40040df4(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int aiStack_24 [4];
  
  aiStack_24[0] = param_2;
  iVar1 = FUN_ram_40006464();
  uVar2 = FUN_ram_400002f4();
  if (*param_1 == 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0xfffffffe;
    if (aiStack_24[0] == 0) goto LAB_ram_40040e6c;
    *(undefined4 *)(iVar1 + 0x38) = 0;
    FUN_ram_40006512(iVar1);
    piVar3 = (int *)param_1[2];
    *piVar3 = iVar1 + 0x1c;
    *(int **)(iVar1 + 0x20) = piVar3;
    param_1[2] = iVar1 + 0x1c;
    *(int **)(iVar1 + 0x1c) = param_1 + 1;
    if (0 < aiStack_24[0]) {
      FUN_ram_400068a8(iVar1 + 0x54,0,aiStack_24);
      FUN_ram_40006784(iVar1 + 0x54);
    }
    FUN_ram_400002fa(uVar2);
    FUN_ram_40006172();
    uVar4 = *(undefined4 *)(iVar1 + 0x38);
    uVar2 = FUN_ram_400002f4();
  }
  *param_1 = 0;
LAB_ram_40040e6c:
  FUN_ram_400002fa(uVar2);
  return uVar4;
}


/* NanoCore 1.11, address 0x40040e86.
 * REA evidence: ev_6873e910a5ced96adbf6a2082b8fdb178e37c6957cf7d54af5a09bcf4ba58a6a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40040e86(int *param_1)

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
    FUN_ram_400065d4(piVar2 + -7);
    FUN_ram_400002fa(uVar1);
    FUN_ram_40006172();
    return;
  }
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.11, address 0x40040ee2.
 * REA evidence: ev_80fca87b2ca383dd1961df7193f6079463b19f298552a0fe77b14f5fa6a7776e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40040ee2(undefined4 *param_1,int param_2,undefined2 param_3,undefined4 param_4)

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
  iVar1 = FUN_ram_40005656(param_2 << 3);
  param_1[3] = iVar1;
  if (iVar1 == 0) {
    uVar2 = 0xfffffffb;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x40040f2c.
 * REA evidence: ev_07ad233d035dcc473f90d1138a61ed7e013564313805d7bce152a27a7da53871
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40040f2c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int aiStack_34 [3];
  
  aiStack_34[0] = param_4;
  iVar1 = FUN_ram_40006464();
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
        FUN_ram_400065d4(piVar3 + -7);
        FUN_ram_400002fa(uVar2);
        FUN_ram_40006172();
        return 0;
      }
      break;
    }
    if (aiStack_34[0] == 0) {
      iVar6 = -2;
      break;
    }
    *(undefined4 *)(iVar1 + 0x38) = 0;
    FUN_ram_40006512(iVar1);
    piVar3 = *(int **)(param_1 + 0x14);
    *piVar3 = iVar1 + 0x1c;
    *(int **)(iVar1 + 0x20) = piVar3;
    *(int *)(param_1 + 0x14) = iVar1 + 0x1c;
    *(int *)(iVar1 + 0x1c) = param_1 + 0x10;
    if (0 < aiStack_34[0]) {
      FUN_ram_400068a8(iVar1 + 0x54,0,aiStack_34);
      FUN_ram_40006784(iVar1 + 0x54);
    }
    FUN_ram_400002fa(uVar2);
    FUN_ram_40006172();
    iVar6 = *(int *)(iVar1 + 0x38);
    uVar2 = FUN_ram_400002f4();
  } while (iVar6 == 0);
  FUN_ram_400002fa(uVar2);
  if ((iVar6 == 0) && (*(code **)(param_1 + 0x20) != (code *)0x0)) {
    (**(code **)(param_1 + 0x20))(param_1,2);
  }
  return iVar6;
}


