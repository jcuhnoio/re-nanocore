/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40004000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x400042ea.
 * REA evidence: ev_6ddc0621d882b8f96f5df501347a612e31cc79a06ce0b6dfd80219a950eda021
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400042ea(void)

{
  return DAT_ram_30049958;
}


/* NanoCore 1.11, address 0x400042f4.
 * REA evidence: ev_36b8f99f7f95c0258e1703045ef933a24a8dca2c72df69f387e3463e945551bc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400042f4(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (_DAT_ram_3004c70c != (code *)0x0) {
    (*_DAT_ram_3004c70c)();
  }
  uVar1 = FUN_ram_400002f4();
  DAT_ram_30049958 = DAT_ram_30049958 + 1;
  iVar2 = FUN_ram_40006464();
  iVar3 = *(int *)(iVar2 + 0x50) + -1;
  *(int *)(iVar2 + 0x50) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(iVar2 + 0x4c);
    *(byte *)(iVar2 + 0x3c) = *(byte *)(iVar2 + 0x3c) | 8;
    FUN_ram_400002fa(uVar1);
    FUN_ram_40006172();
  }
  else {
    FUN_ram_400002fa(uVar1);
  }
  FUN_ram_40006916();
  return;
}


/* NanoCore 1.11, address 0x40004352.
 * REA evidence: ev_a3b743dcbff90c73576f5fe17c9383c8c12bfa4f5fed64880052544b682a2a4d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4000435e) */
/* WARNING: Removing unreachable block (ram,0x4000435a) */
/* WARNING: Removing unreachable block (ram,0x4000436a) */

int FUN_ram_40004352(int param_1)

{
  if (param_1 < 0) {
    return -1;
  }
  return ((param_1 % 1000) * 1000 + 999) / 1000 + (param_1 / 1000) * 1000;
}


/* NanoCore 1.11, address 0x40004378.
 * REA evidence: ev_a0fc936ecb516c351b1f199111129647a16d415c7583375079130f09932d9bf2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40004378(void)

{
  return DAT_ram_30049958;
}


/* NanoCore 1.11, address 0x4000438a.
 * REA evidence: ev_3cb5d049934f621d8a418de845e997a4248c72a496157c7abfc1bbf7d33805bf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000438a(void)

{
  return 0;
}


/* NanoCore 1.11, address 0x4000438e.
 * REA evidence: ev_e2d8b4d4658d3d285939c12c1d740912c2373e6e3a4a2d63129a4f3926baa82e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000438e(void)

{
  return 0;
}


/* NanoCore 1.11, address 0x40004392.
 * REA evidence: ev_10034c374093ec19510e5146b5327c9edb039f5a42a78cfb6936ea77fdb04813
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40004392(void)

{
  undefined **ppuVar1;
  
  for (ppuVar1 = &PTR_FUN_ram_4000438a_ram_40093758; ppuVar1 < &PTR_FUN_ram_4000438e_ram_4009377c;
      ppuVar1 = ppuVar1 + 1) {
    (*(code *)*ppuVar1)();
  }
  return;
}


/* NanoCore 1.11, address 0x400043c0.
 * REA evidence: ev_de2b9ef342c854c9de9979aabc84ce47aa1c85ab8e4b7240daa018bdfb0e600a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400043c0(void)

{
  undefined **ppuVar1;
  
  for (ppuVar1 = &PTR_FUN_ram_4000438e_ram_4009377c; ppuVar1 < &PTR_LAB_ram_40004386_ram_400937e0;
      ppuVar1 = ppuVar1 + 1) {
    (*(code *)*ppuVar1)();
  }
  return;
}


/* NanoCore 1.11, address 0x400043ee.
 * REA evidence: ev_758218954816a7c8ca4cf4c6663ea764cd5c19eb4cf59e390396e4a7daeb70b0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400043ee(void)

{
  FUN_ram_400043c0();
  FUN_ram_40012e24();
  return;
}


/* NanoCore 1.11, address 0x400043fc.
 * REA evidence: ev_4ec88bdad5fcf05fac62a4f17c0a78e9baca9aefe570acdde27de68d4bbaf217
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400043fc(void)

{
  FUN_ram_400064b8(&DAT_ram_40093ec0,FUN_ram_400043ee,0,0x800,10,0x14);
  FUN_ram_40006632();
  return;
}


/* NanoCore 1.11, address 0x40004428.
 * REA evidence: ev_a7a0745ef9e9196e428c2e1578a8c3756f41c259f85f8ec3c90920419518212c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40004428(void)

{
  FUN_ram_400002f4();
  FUN_ram_4003efe0();
  FUN_ram_40005248();
  thunk_FUN_ram_40005246();
  FUN_ram_40006b62();
  FUN_ram_4000602e();
  FUN_ram_400043fc();
  FUN_ram_40006b70();
  FUN_ram_400046ba();
  FUN_ram_40006130();
  return 0;
}


/* NanoCore 1.11, address 0x40004458.
 * REA evidence: ev_97deedd35e0f49cf6310abf245390e5da64fd2b7c71b3ff9b28dd2ce79053e80
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40004458(void)

{
  FUN_ram_40004428();
  return 0;
}


/* NanoCore 1.11, address 0x40004466.
 * REA evidence: ev_32af5422ce0cb907a12446305e668252af0eea42e82f17ab8174b0c8eb09dd22
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40004466(undefined4 param_1)

{
  FUN_ram_40005fdc(param_1,9);
  return;
}


/* NanoCore 1.11, address 0x4000446c.
 * REA evidence: ev_a9dd8b22c7405d37e0581cefae06ee3545c3b72db81b93322786d2659c8a7ddf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000446c(int param_1,undefined4 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  iVar2 = FUN_ram_40004466(param_2);
  if (iVar2 == 0) {
    FUN_ram_40005e80(param_1,9,param_2);
    uVar1 = 0;
    *(undefined2 *)(param_1 + 0x20) = param_3;
    *(undefined1 *)(param_1 + 0x24) = 0;
    *(undefined2 *)(param_1 + 0x22) = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x40004480.
 * REA evidence: ev_202227dd2f981c77b44d8a223a031e141462f157255d1767cb69b9191d1bd27e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40004480(int param_1,undefined4 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_ram_40004466(param_2);
  if (iVar2 == 0) {
    FUN_ram_40005e80(param_1,9,param_2);
    uVar1 = 0;
    *(undefined2 *)(param_1 + 0x20) = param_3;
    *(undefined1 *)(param_1 + 0x24) = 0;
    *(undefined2 *)(param_1 + 0x22) = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x400044b0.
 * REA evidence: ev_5fb16f3a146e35348da5a811d0a3ce49050c19b4b874be8fc2c3fec1b60427f7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400044b0(int param_1)

{
  int iVar1;
  
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
    iVar1 = 0;
    if (((*(ushort *)(param_1 + 0x20) & 0x10) == 0) &&
       (iVar1 = (**(code **)(param_1 + 0x30))(), iVar1 == 0)) {
      *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 0x10;
    }
    return iVar1;
  }
  return 0;
}


/* NanoCore 1.11, address 0x400044e8.
 * REA evidence: ev_9aeb2c23e1d458535553cead7597c7fc573612e0932237d96d191fb81b469d55
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400044e8(int param_1,ushort param_2)

{
  int iVar1;
  
  if ((*(ushort *)(param_1 + 0x20) & 0x10) == 0) {
    if ((*(code **)(param_1 + 0x30) != (code *)0x0) &&
       (iVar1 = (**(code **)(param_1 + 0x30))(), iVar1 != 0)) {
      return iVar1;
    }
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 0x10;
  }
  if (((*(ushort *)(param_1 + 0x20) & 8) == 0) ||
     (iVar1 = -7, (*(ushort *)(param_1 + 0x22) & 8) == 0)) {
    if (*(code **)(param_1 + 0x34) == (code *)0x0) {
      *(ushort *)(param_1 + 0x22) = param_2 & 0xf0f;
      iVar1 = 0;
    }
    else {
      iVar1 = (**(code **)(param_1 + 0x34))(param_1);
      if ((iVar1 != 0) && (iVar1 != -6)) {
        return iVar1;
      }
    }
    *(ushort *)(param_1 + 0x22) = *(ushort *)(param_1 + 0x22) | 8;
    *(char *)(param_1 + 0x24) = *(char *)(param_1 + 0x24) + '\x01';
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x40004564.
 * REA evidence: ev_0bbbfeb0f9eb5496464b8ab4d70c36395e9a3b6e8968ab1e9a662b64c37f9b08
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40004564(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 0x24);
  if (cVar1 == '\0') {
    return -1;
  }
  *(char *)(param_1 + 0x24) = cVar1 + -1;
  iVar2 = 0;
  if (cVar1 == '\x01') {
    if ((*(code **)(param_1 + 0x38) == (code *)0x0) ||
       (iVar2 = (**(code **)(param_1 + 0x38))(), iVar2 == 0)) {
      iVar2 = 0;
    }
    else if (iVar2 != -6) {
      return iVar2;
    }
    *(undefined2 *)(param_1 + 0x22) = 0;
  }
  return iVar2;
}


/* NanoCore 1.11, address 0x400045a8.
 * REA evidence: ev_b993e99ab33f00766df06f5b7284ccb4a04228c6ddbf229a0d8fe98f0106a32a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400045a8(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x24) == '\0') {
    uVar1 = 0xffffffff;
  }
  else {
    if (*(code **)(param_1 + 0x3c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x400045c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(param_1 + 0x3c))();
      return uVar1;
    }
    uVar1 = 0xfffffffa;
  }
  FUN_ram_40005004(uVar1);
  return 0;
}


/* NanoCore 1.11, address 0x400045ce.
 * REA evidence: ev_c9b7f76f20c04657a672df7bbb33c7ee5e5a785fd7aea75d33b64b68983e3a5f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400045ce(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x24) == '\0') {
    uVar1 = 0xffffffff;
  }
  else {
    if (*(code **)(param_1 + 0x40) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x400045ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(param_1 + 0x40))();
      return uVar1;
    }
    uVar1 = 0xfffffffa;
  }
  FUN_ram_40005004(uVar1);
  return 0;
}


/* NanoCore 1.11, address 0x400045f4.
 * REA evidence: ev_1f053efbe9ab3bdd3e50e825b4d76e4944d1b3f492250b076640c007e2eef937
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400045f4(int param_1)

{
  undefined4 uVar1;
  
  if (*(code **)(param_1 + 0x44) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x400045f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x44))();
    return uVar1;
  }
  return 0xfffffffa;
}


/* NanoCore 1.11, address 0x400045fe.
 * REA evidence: ev_42aa754e891e000e9c5a10d85de53e35df3f804d50a3731bbd022cad43152f80
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400045fe(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return 0;
}


/* NanoCore 1.11, address 0x40004604.
 * REA evidence: ev_5a9a224b4ecd044661429630e3a3539d0bab1f5eab0dab0a4df6e2a5766dcaca
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40004604(int param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_LOOP_ram_3004995c;
  puVar1 = (undefined4 *)(PTR_LOOP_ram_3004995c + 4);
  PTR_LOOP_ram_3004995c = (undefined *)(param_1 + 0x1c);
  *puVar1 = (undefined *)(param_1 + 0x1c);
  *(undefined **)(param_1 + 0x1c) = puVar2;
  *(undefined ***)(param_1 + 0x20) = &PTR_LOOP_ram_3004995c;
  return;
}


/* NanoCore 1.11, address 0x4000461c.
 * REA evidence: ev_6c1eab2337d54d1d94f90e91a19fe2f04278286e43011fa9a2456e58ca0ec69f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined * FUN_ram_4000461c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  
  puVar1 = PTR_LOOP_ram_3004995c;
  puVar2 = (undefined *)0x0;
  if ((undefined **)PTR_LOOP_ram_3004995c != &PTR_LOOP_ram_3004995c) {
    FUN_ram_400002f4();
    puVar2 = puVar1 + -0x1c;
    iVar3 = *(int *)puVar1;
    piVar4 = *(int **)(puVar1 + 4);
    *(int **)(iVar3 + 4) = piVar4;
    *piVar4 = iVar3;
    *(undefined **)(puVar1 + 4) = puVar1;
    *(undefined **)puVar1 = puVar1;
    FUN_ram_400002fa();
  }
  return puVar2;
}


/* NanoCore 1.11, address 0x40004658.
 * REA evidence: ev_52cfc2e8d9aeac536942b405709c2ed0142b51f8c777df2373c307bf71344516
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40004658(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  
  do {
    iVar1 = 0;
    do {
      pcVar3 = *(code **)(iVar1 * 4 + 0x3004c7a0);
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 4);
LAB_ram_40004684:
    iVar1 = FUN_ram_4000461c();
    if (iVar1 != 0) {
      pcVar3 = *(code **)(iVar1 + 0x88);
      iVar2 = FUN_ram_40005fd4();
      if (iVar2 == 1) break;
      if (pcVar3 != (code *)0x0) goto LAB_ram_400046a0;
      goto LAB_ram_400046a4;
    }
  } while( true );
  FUN_ram_40005ef4(iVar1);
  if (pcVar3 != (code *)0x0) {
LAB_ram_400046a0:
    (*pcVar3)(iVar1);
LAB_ram_400046a4:
    if (iVar2 == 0) {
      FUN_ram_400056b4(*(undefined4 *)(iVar1 + 0x30));
      FUN_ram_40005f98(iVar1);
    }
  }
  goto LAB_ram_40004684;
}


/* NanoCore 1.11, address 0x400046ba.
 * REA evidence: ev_4c197f912f607845ab37b4379596a3b5c4a4ff6952b5effc1439f13d94e497a5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400046ba(void)

{
  undefined1 auStack_20 [24];
  
  FUN_ram_400055fc(auStack_20,s_tidle_d_ram_40093ec8,0);
  FUN_ram_4000642e(0x3004c710,auStack_20,FUN_ram_40004658,0,0x3004c7b0,0x400,0x1f,0x20);
  FUN_ram_40006632(0x3004c710);
  return;
}


/* NanoCore 1.11, address 0x4000470a.
 * REA evidence: ev_5d61c9075f9b82e5d659646fb25e687a3f43117409f64dca265896518d595b16
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000470a(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  while (param_1 != (int *)*param_1) {
    uVar1 = FUN_ram_400002f4();
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + 0x1c) = 0xffffffff;
    FUN_ram_400065d4(iVar2 + -0x1c);
    FUN_ram_400002fa(uVar1);
  }
  return;
}


/* NanoCore 1.11, address 0x40004742.
 * REA evidence: ev_35147109b958832023aebd2d2614676c3c80d6d5d3c920953e5c25c15758d417
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40004742(int param_1)

{
  FUN_ram_400065d4(param_1 + -0x1c);
  return;
}


/* NanoCore 1.11, address 0x40004748.
 * REA evidence: ev_9982aa539dff93b7170aee59644c3a3113bd87d6d671f381b42b14194ace907a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40004748(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  
  FUN_ram_40006512(param_2);
  if (param_3 != 0) {
    if (param_3 != 1) {
      return;
    }
    for (puVar2 = (undefined4 *)*param_1; param_1 != puVar2; puVar2 = (undefined4 *)*puVar2) {
      if (*(byte *)(param_2 + 0x3d) < *(byte *)((int)puVar2 + 0x21)) {
        piVar1 = (int *)puVar2[1];
        *piVar1 = param_2 + 0x1c;
        *(int **)(param_2 + 0x20) = piVar1;
        puVar2[1] = param_2 + 0x1c;
        *(undefined4 **)(param_2 + 0x1c) = puVar2;
        return;
      }
    }
  }
  piVar1 = (int *)param_1[1];
  *piVar1 = param_2 + 0x1c;
  *(int **)(param_2 + 0x20) = piVar1;
  param_1[1] = param_2 + 0x1c;
  *(undefined4 **)(param_2 + 0x1c) = param_1;
  return;
}


/* NanoCore 1.11, address 0x400047a4.
 * REA evidence: ev_df931a3977055bb3cc59eee87910277a710d2ffda5f75c5cf02847f5a7d34e40
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400047a4(int param_1,undefined4 param_2,undefined2 param_3,undefined1 param_4)

{
  FUN_ram_40005e80(param_1,2,param_2);
  *(undefined2 *)(param_1 + 0x24) = param_3;
  *(int *)(param_1 + 0x20) = param_1 + 0x1c;
  *(int *)(param_1 + 0x1c) = param_1 + 0x1c;
  *(undefined1 *)(param_1 + 0x11) = param_4;
  return 0;
}


/* NanoCore 1.11, address 0x400047d8.
 * REA evidence: ev_163beb2c4a606633f685bf5493c624b064c21b0ed1b5588bb490b336a3136cad
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400047d8(undefined4 param_1,undefined2 param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = FUN_ram_40005f2a(2,param_1);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x20) = iVar1 + 0x1c;
    *(int *)(iVar1 + 0x1c) = iVar1 + 0x1c;
    *(undefined2 *)(iVar1 + 0x24) = param_2;
    *(undefined1 *)(iVar1 + 0x11) = param_3;
  }
  return;
}


/* NanoCore 1.11, address 0x40004806.
 * REA evidence: ev_21300aaa54d5f1b5fbf24c113bfa812f62864980607495b9871031d037d2eb30
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40004806(int param_1)

{
  FUN_ram_4000470a(param_1 + 0x1c);
  FUN_ram_40005f98(param_1);
  return 0;
}


/* NanoCore 1.11, address 0x40004822.
 * REA evidence: ev_7926fb6e324845cda67685bdbb42813dc925e62be7ff8bda3b5dbdf40e41db8e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40004822(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int aiStack_24 [4];
  
  aiStack_24[0] = param_2;
  if (_DAT_ram_3004cc88 != (code *)0x0) {
    (*_DAT_ram_3004cc88)();
  }
  uVar1 = FUN_ram_400002f4();
  if (*(short *)(param_1 + 0x24) == 0) {
    if (aiStack_24[0] == 0) {
      FUN_ram_400002fa();
      return -2;
    }
    iVar2 = FUN_ram_40006464();
    *(undefined4 *)(iVar2 + 0x38) = 0;
    FUN_ram_40004748(param_1 + 0x1c,iVar2,*(undefined1 *)(param_1 + 0x11));
    if (0 < aiStack_24[0]) {
      FUN_ram_400068a8(iVar2 + 0x54,0,aiStack_24);
      FUN_ram_40006784(iVar2 + 0x54);
    }
    FUN_ram_400002fa(uVar1);
    FUN_ram_40006172();
    if (*(int *)(iVar2 + 0x38) != 0) {
      return *(int *)(iVar2 + 0x38);
    }
  }
  else {
    *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + -1;
    FUN_ram_400002fa();
  }
  if (_DAT_ram_3004cc84 != (code *)0x0) {
    (*_DAT_ram_3004cc84)(param_1);
  }
  return 0;
}


/* NanoCore 1.11, address 0x400048c0.
 * REA evidence: ev_5c6711966e5c213491357b3b200365ef6c8a07f21ce5f7a6d339f7891ce85330
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400048c0(undefined4 param_1)

{
  FUN_ram_40004822(param_1,0);
  return;
}


/* NanoCore 1.11, address 0x400048c4.
 * REA evidence: ev_cfbc950693cbf7a502f8885a9378559bdcfb5606097ffe7644d844220823c4db
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_400048c4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (_DAT_ram_3004cc80 != (code *)0x0) {
    (*_DAT_ram_3004cc80)();
  }
  uVar2 = FUN_ram_400002f4();
  piVar3 = *(int **)(param_1 + 0x1c);
  if (piVar3 == (int *)(param_1 + 0x1c)) {
    if (*(short *)(param_1 + 0x24) == -1) {
      FUN_ram_400002fa();
      return -3;
    }
    *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + 1;
    iVar1 = 0;
  }
  else {
    FUN_ram_40004742(piVar3);
    iVar1 = 1;
  }
  FUN_ram_400002fa(uVar2);
  if (iVar1 == 1) {
    FUN_ram_40006172();
    iVar1 = 0;
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x4000492c.
 * REA evidence: ev_d26acef9ec5b5773eedfbd7332b8dbf5673b279646a3686bfbaa814751f88b85
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000492c(int param_1,undefined4 param_2)

{
  FUN_ram_40005e80(param_1,3,param_2);
  *(int *)(param_1 + 0x20) = param_1 + 0x1c;
  *(int *)(param_1 + 0x1c) = param_1 + 0x1c;
  *(undefined4 *)(param_1 + 0x24) = 0xff0001;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x11) = 1;
  return 0;
}


/* NanoCore 1.11, address 0x40004960.
 * REA evidence: ev_8e31313e330e13bd9162995b2fe63529c7dc524c0741d5de4ee835e8d139117b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40004960(int param_1)

{
  FUN_ram_4000470a(param_1 + 0x1c);
  FUN_ram_40005ef4(param_1);
  return 0;
}


/* NanoCore 1.11, address 0x4000497c.
 * REA evidence: ev_747c5a8894fcb81a967ecc1a5d91cd892cd0b71f3dd4007b769977ecb4f441b0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000497c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_40005f2a(3,param_1);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x20) = iVar1 + 0x1c;
    *(int *)(iVar1 + 0x1c) = iVar1 + 0x1c;
    *(undefined4 *)(iVar1 + 0x24) = 0xff0001;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined1 *)(iVar1 + 0x11) = 1;
  }
  return;
}


/* NanoCore 1.11, address 0x400049aa.
 * REA evidence: ev_ce116082072d432a0a1b1e6291d6fe1b9f3e7962382f058701524f0b3505a579
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400049aa(int param_1)

{
  FUN_ram_4000470a(param_1 + 0x1c);
  FUN_ram_40005f98(param_1);
  return 0;
}


/* NanoCore 1.11, address 0x400049c6.
 * REA evidence: ev_38fbdd45fd3580afda66fa93d973b18da8a691b309f3bd484dee8e1894d01538
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_400049c6(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int aiStack_24 [4];
  
  aiStack_24[0] = param_2;
  iVar1 = FUN_ram_40006464();
  uVar2 = FUN_ram_400002f4();
  if (_DAT_ram_3004cc88 != (code *)0x0) {
    (*_DAT_ram_3004cc88)(param_1);
  }
  iVar3 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(iVar1 + 0x38) = 0;
  if (iVar3 != iVar1) {
    if (*(short *)(param_1 + 0x24) == 0) {
      if (aiStack_24[0] == 0) {
        *(undefined4 *)(iVar1 + 0x38) = 0xfffffffe;
        FUN_ram_400002fa(uVar2);
        return -2;
      }
      if (*(byte *)(iVar1 + 0x3d) < *(byte *)(iVar3 + 0x3d)) {
        FUN_ram_40006660(iVar3,2,iVar1 + 0x3d);
      }
      FUN_ram_40004748(param_1 + 0x1c,iVar1,*(undefined1 *)(param_1 + 0x11));
      if (0 < aiStack_24[0]) {
        FUN_ram_400068a8(iVar1 + 0x54,0,aiStack_24);
        FUN_ram_40006784(iVar1 + 0x54);
      }
      FUN_ram_400002fa(uVar2);
      FUN_ram_40006172();
      if (*(int *)(iVar1 + 0x38) != 0) {
        return *(int *)(iVar1 + 0x38);
      }
      uVar2 = FUN_ram_400002f4();
      goto LAB_ram_40004a0c;
    }
    *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + -1;
    *(int *)(param_1 + 0x28) = iVar1;
    *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(iVar1 + 0x3d);
  }
  if (*(char *)(param_1 + 0x27) == -1) {
    FUN_ram_400002fa(uVar2);
    return -3;
  }
  *(char *)(param_1 + 0x27) = *(char *)(param_1 + 0x27) + '\x01';
LAB_ram_40004a0c:
  FUN_ram_400002fa(uVar2);
  if (_DAT_ram_3004cc84 != (code *)0x0) {
    (*_DAT_ram_3004cc84)(param_1);
  }
  return 0;
}


/* NanoCore 1.11, address 0x40004ab8.
 * REA evidence: ev_bf4a3f08a36956572a94c716253d06e2413dea93e12b5650af30fddca56ebb36
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40004ab8(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  iVar2 = FUN_ram_40006464();
  uVar3 = FUN_ram_400002f4();
  if (_DAT_ram_3004cc80 != (code *)0x0) {
    (*_DAT_ram_3004cc80)(param_1);
  }
  if (*(int *)(param_1 + 0x28) != iVar2) {
    *(undefined4 *)(iVar2 + 0x38) = 0xffffffff;
    FUN_ram_400002fa(uVar3);
    return -1;
  }
  cVar1 = *(char *)(param_1 + 0x27);
  *(char *)(param_1 + 0x27) = cVar1 + -1;
  if (cVar1 == '\x01') {
    if (*(char *)(param_1 + 0x26) != *(char *)(iVar2 + 0x3d)) {
      FUN_ram_40006660(iVar2,2,param_1 + 0x26);
    }
    piVar4 = *(int **)(param_1 + 0x1c);
    if (piVar4 == (int *)(param_1 + 0x1c)) {
      if (*(short *)(param_1 + 0x24) != -1) {
        *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + 1;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined1 *)(param_1 + 0x26) = 0xff;
        goto LAB_ram_40004b86;
      }
    }
    else {
      *(int **)(param_1 + 0x28) = piVar4 + -7;
      *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)((int)piVar4 + 0x21);
      if (*(char *)(param_1 + 0x27) != -1) {
        *(char *)(param_1 + 0x27) = *(char *)(param_1 + 0x27) + '\x01';
        FUN_ram_40004742();
        iVar2 = 1;
        goto LAB_ram_40004b56;
      }
    }
    FUN_ram_400002fa(uVar3);
    iVar2 = -3;
  }
  else {
LAB_ram_40004b86:
    iVar2 = 0;
LAB_ram_40004b56:
    FUN_ram_400002fa(uVar3);
    if (iVar2 == 1) {
      FUN_ram_40006172();
      iVar2 = 0;
    }
  }
  return iVar2;
}


/* NanoCore 1.11, address 0x40004b94.
 * REA evidence: ev_988b4274b478e4e3d869ac05f34cd4bbcf8397c1df83e22b6c44d40487d4f3ad
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40004b94(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_40005f2a(4,param_1);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x11) = param_2;
    *(int *)(iVar1 + 0x20) = iVar1 + 0x1c;
    *(int *)(iVar1 + 0x1c) = iVar1 + 0x1c;
    *(undefined4 *)(iVar1 + 0x24) = 0;
  }
  return;
}


/* NanoCore 1.11, address 0x40004bbe.
 * REA evidence: ev_cb6f629b7f4a611ba38018d754d9dc421148114d9e5b02a37089e5eea614f36c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40004bbe(int param_1,uint param_2)

{
  byte bVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  
  iVar4 = -1;
  if (param_2 != 0) {
    uVar5 = FUN_ram_400002f4();
    pcVar3 = _DAT_ram_3004cc80;
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | param_2;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(param_1);
    }
    iVar4 = 0;
    piVar7 = (int *)*(int *)(param_1 + 0x1c);
joined_r0x40004bf6:
    while (piVar2 = piVar7, (int *)(param_1 + 0x1c) != piVar2) {
      bVar1 = *(byte *)(piVar2 + 0xb);
      if ((bVar1 & 1) == 0) goto LAB_ram_40004c46;
      piVar7 = (int *)*piVar2;
      if (piVar2[10] == (*(uint *)(param_1 + 0x24) & piVar2[10])) goto LAB_ram_40004c12;
    }
    FUN_ram_400002fa(uVar5);
    if (iVar4 == 1) {
      FUN_ram_40006172();
      iVar4 = 0;
    }
  }
  return iVar4;
LAB_ram_40004c46:
  if ((bVar1 & 2) == 0) {
    FUN_ram_400002fa(uVar5);
    return -10;
  }
  piVar7 = (int *)*piVar2;
  uVar6 = piVar2[10] & *(uint *)(param_1 + 0x24);
  if (uVar6 != 0) {
    piVar2[10] = uVar6;
LAB_ram_40004c12:
    if ((bVar1 & 4) != 0) {
      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & ~piVar2[10];
    }
    FUN_ram_400065d4(piVar2 + -7);
    iVar4 = 1;
  }
  goto joined_r0x40004bf6;
}


/* NanoCore 1.11, address 0x40004c76.
 * REA evidence: ev_ef01b46f900295f7b1d1f2e2764c7c5d822fe0fc1e083f2428fa2bbd2109a69b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40004c76(int param_1,uint param_2,byte param_3,int param_4,uint *param_5)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int aiStack_24 [2];
  
  if (param_2 == 0) {
    return -1;
  }
  aiStack_24[0] = param_4;
  iVar2 = FUN_ram_40006464();
  pcVar1 = _DAT_ram_3004cc88;
  *(undefined4 *)(iVar2 + 0x38) = 0;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1);
  }
  uVar3 = FUN_ram_400002f4();
  if ((param_3 & 1) == 0) {
    if (((param_3 & 2) != 0) && ((*(uint *)(param_1 + 0x24) & param_2) != 0)) goto LAB_ram_40004cc2;
  }
  else if ((*(uint *)(param_1 + 0x24) & param_2) == param_2) {
LAB_ram_40004cc2:
    if (param_5 != (uint *)0x0) {
      *param_5 = *(uint *)(param_1 + 0x24) & param_2;
    }
    uVar4 = *(uint *)(param_1 + 0x24);
    *(byte *)(iVar2 + 0x48) = param_3;
    *(uint *)(iVar2 + 0x44) = uVar4 & param_2;
    if ((param_3 & 4) != 0) {
      *(uint *)(param_1 + 0x24) = ~param_2 & uVar4;
    }
    goto LAB_ram_40004cf0;
  }
  if (aiStack_24[0] == 0) {
    *(undefined4 *)(iVar2 + 0x38) = 0xfffffffe;
    FUN_ram_400002fa(uVar3);
    return -2;
  }
  *(uint *)(iVar2 + 0x44) = param_2;
  *(byte *)(iVar2 + 0x48) = param_3;
  FUN_ram_40004748(param_1 + 0x1c,iVar2,*(undefined1 *)(param_1 + 0x11));
  if (0 < aiStack_24[0]) {
    FUN_ram_400068a8(iVar2 + 0x54,0,aiStack_24);
    FUN_ram_40006784(iVar2 + 0x54);
  }
  FUN_ram_400002fa(uVar3);
  FUN_ram_40006172();
  if (*(int *)(iVar2 + 0x38) != 0) {
    return *(int *)(iVar2 + 0x38);
  }
  uVar3 = FUN_ram_400002f4();
  if (param_5 != (uint *)0x0) {
    *param_5 = *(uint *)(iVar2 + 0x44);
  }
LAB_ram_40004cf0:
  FUN_ram_400002fa(uVar3);
  if (_DAT_ram_3004cc84 != (code *)0x0) {
    (*_DAT_ram_3004cc84)(param_1);
  }
  return *(int *)(iVar2 + 0x38);
}


/* NanoCore 1.11, address 0x40004d8a.
 * REA evidence: ev_025dc7a7f91774a1a561c2757f5cdd70d0462df7a06f29dcce504953c44958e8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40004d8a(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_400002f4();
  DAT_ram_3004cbb8 = DAT_ram_3004cbb8 + '\x01';
  if (_DAT_ram_3004cbb0 != (code *)0x0) {
    (*_DAT_ram_3004cbb0)();
  }
  FUN_ram_400002fa(uVar1);
  return;
}


/* NanoCore 1.11, address 0x40004dbc.
 * REA evidence: ev_ee27a3cde3c45b648cda98b1b09fa3c2260745d881f3814aa2400c71a51b8494
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40004dbc(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_400002f4();
  if (_DAT_ram_3004cbb4 != (code *)0x0) {
    (*_DAT_ram_3004cbb4)();
  }
  DAT_ram_3004cbb8 = DAT_ram_3004cbb8 + -1;
  FUN_ram_400002fa(uVar1);
  return;
}


/* NanoCore 1.11, address 0x40004dee.
 * REA evidence: ev_18c7ecc12d424081a51773dd656988dd2a66d96eeb06556b7da95ebc29528937
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40004dee(void)

{
  undefined1 uVar1;
  
  FUN_ram_400002f4();
  uVar1 = DAT_ram_3004cbb8;
  FUN_ram_400002fa();
  return uVar1;
}


/* NanoCore 1.11, address 0x40004e0e.
 * REA evidence: ev_2094af804ea55cfc4ffc45774cf8a50b9cfbe6d5fce5e1adee8bff18f0fe61c6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40004eee) */

char * FUN_ram_40004e0e(char *param_1,char *param_2,uint param_3,int param_4,int param_5,int param_6
                       ,uint param_7,int param_8)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  char acStack_11 [17];
  
  pcVar9 = s_0123456789abcdef_ram_40094058;
  if ((param_7 & 0x40) != 0) {
    pcVar9 = s_0123456789ABCDEF_ram_40094044;
  }
  uVar1 = param_7 & 0x10;
  if (uVar1 == 0) {
    cVar2 = ' ';
    if ((param_7 & 1) != 0) {
      cVar2 = '0';
    }
  }
  else {
    param_7 = param_7 & 0xfffffffe;
    cVar2 = ' ';
  }
  if ((param_7 & 2) == 0) {
    iVar3 = 0;
LAB_ram_40004e5c:
    if (param_3 == 0) {
      acStack_11[1] = 0x30;
      iVar7 = 1;
      goto LAB_ram_40004e68;
    }
  }
  else {
    if (param_8 == 0x68) {
      if (-1 < (short)param_3) goto LAB_ram_40004f08;
      param_3 = param_3 * -0x10000 >> 0x10;
      iVar3 = 0x2d;
      goto LAB_ram_40004e5c;
    }
    if (-1 < (int)param_3) {
LAB_ram_40004f08:
      iVar3 = 0x2b;
      if ((param_7 & 4) == 0) {
        iVar3 = ((param_7 & 0xf) >> 3) << 5;
      }
      goto LAB_ram_40004e5c;
    }
    param_3 = -param_3;
    iVar3 = 0x2d;
  }
  iVar8 = 0;
  do {
    if (param_4 == 10) {
      uVar6 = param_3 % 10;
      param_3 = param_3 / 10;
    }
    else {
      uVar6 = param_3 & 0xf;
      param_3 = param_3 >> 4;
    }
    iVar7 = iVar8 + 1;
    acStack_11[iVar8 + 1] = pcVar9[uVar6];
    iVar8 = iVar7;
  } while (param_3 != 0);
LAB_ram_40004e68:
  iVar8 = param_6;
  if (param_6 <= iVar7) {
    iVar8 = iVar7;
  }
  param_5 = param_5 - iVar8;
  if ((param_7 & 0x11) == 0) {
    pcVar9 = param_1;
    if ((iVar3 != 0) && (0 < param_5)) {
      param_5 = param_5 + -1;
    }
    for (; 0 < (int)(param_1 + (param_5 - (int)pcVar9)); pcVar9 = pcVar9 + 1) {
      if (pcVar9 < param_2) {
        *pcVar9 = ' ';
      }
    }
    iVar4 = param_5;
    if (param_5 < 0) {
      iVar4 = 0;
    }
    param_1 = param_1 + iVar4;
    param_5 = (param_5 + -1) - iVar4;
  }
  if (iVar3 != 0) {
    if (param_1 < param_2) {
      *param_1 = (char)iVar3;
    }
    param_5 = param_5 + -1;
    param_1 = param_1 + 1;
  }
  pcVar9 = param_1;
  if (uVar1 == 0) {
    for (; 0 < (int)(param_1 + (param_5 - (int)pcVar9)); pcVar9 = pcVar9 + 1) {
      if (pcVar9 < param_2) {
        *pcVar9 = cVar2;
      }
    }
    iVar3 = param_5;
    if (param_5 < 0) {
      iVar3 = 0;
    }
    param_1 = param_1 + iVar3;
    param_5 = (param_5 + -1) - iVar3;
    pcVar9 = param_1;
  }
  for (; iVar7 < (int)(pcVar9 + (iVar8 - (int)param_1)); param_1 = param_1 + 1) {
    if (param_1 < param_2) {
      *param_1 = '0';
    }
  }
  iVar3 = 0;
  if (iVar7 <= iVar8) {
    iVar3 = iVar8 - iVar7;
  }
  pcVar9 = pcVar9 + iVar3;
  while ((pcVar5 = pcVar9, iVar7 + -1 != -1 && (param_6 != 0))) {
    if (pcVar9 < param_2) {
      *pcVar9 = acStack_11[iVar7];
    }
    pcVar9 = pcVar9 + 1;
    iVar7 = iVar7 + -1;
  }
  for (; 0 < (int)(pcVar9 + (param_5 - (int)pcVar5)); pcVar5 = pcVar5 + 1) {
    if (pcVar5 < param_2) {
      *pcVar5 = ' ';
    }
  }
  if (param_5 < 0) {
    param_5 = 0;
  }
  return pcVar9 + param_5;
}


/* NanoCore 1.11, address 0x40004fc2.
 * REA evidence: ev_585e3f6bbf22b10a27f61496a3e51067dfb0dd0587ea0c502babb0afe4e2ee2c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40004fc2(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40006464();
  if (iVar1 != 0) {
    FUN_ram_400049c6(0x3004cbc0,0xffffffff);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40004fe4.
 * REA evidence: ev_ae7abc920bbdba5ec80eb38546ee9d0a29f9304b8d5fe6faad5f2256c548d5b5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40004fe4(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40006464();
  if (iVar1 != 0) {
    FUN_ram_40004ab8(0x3004cbc0);
    return;
  }
  return;
}


