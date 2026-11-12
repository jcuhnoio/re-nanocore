/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4002b000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4002b120.
 * REA evidence: ev_4c67fa43eefe10632896e0e45456cbadb0bc2683baddd79f2cb5cbaaf80c1bfc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002b120(void)

{
  char cVar1;
  undefined1 uStack_14;
  char cStack_13;
  
  if (DAT_ram_30049e40 != '\x02') {
    DAT_ram_30049e40 = '\x02';
    DAT_ram_300794d0 = '\0';
    FUN_ram_4002990e();
  }
  if (DAT_ram_300794d0 != DAT_ram_30049e40) {
    cVar1 = '\x01';
    if (DAT_ram_30049e40 != '\x01') {
      cVar1 = '\x02';
    }
    uStack_14 = 3;
    if (_DAT_ram_30079554 != 0) {
      cStack_13 = cVar1;
      nc_radio_send_control_if_ready(&uStack_14,2);
      DAT_ram_300794d0 = cVar1;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4002b19c.
 * REA evidence: ev_b4786750e26bcb70ad5ce7283a9cffc31e1fbe473f2f10f20c3ec7789178b0fe
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002b19c(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  do {
    while (_DAT_ram_30079554 != 0) {
LAB_ram_4002b1f2:
      iVar2 = FUN_ram_400299f4();
      iVar1 = _DAT_ram_30079560;
      uVar3 = 0x14;
      if (iVar2 == 0) {
        uVar3 = 4;
      }
      if (_DAT_ram_30079560 != 0) {
        uVar3 = FUN_ram_40004352(uVar3);
        FUN_ram_40004822(iVar1,uVar3);
      }
      FUN_ram_4002a03a(0);
    }
    _DAT_ram_30079554 = FUN_ram_40004466(s_uart5_ram_40096da4);
    if (_DAT_ram_30079554 != 0) {
      iVar1 = FUN_ram_40029c36();
      if (iVar1 == 0) {
        DAT_ram_300794d0 = 0;
        FUN_ram_4002b120();
        goto LAB_ram_4002b1f2;
      }
      _DAT_ram_30079554 = 0;
    }
    FUN_ram_400065c6(10);
  } while( true );
}


/* NanoCore 1.11, address 0x4002b218.
 * REA evidence: ev_fb22dc2b0fcf582fb1d8cffaa12f85459dc203b79039c34976e97dfa846d07c6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_ram_4002b120(void)

{
  char cVar1;
  undefined1 uStack_14;
  char cStack_13;
  
  if (DAT_ram_30049e40 != '\x02') {
    DAT_ram_30049e40 = '\x02';
    DAT_ram_300794d0 = '\0';
    FUN_ram_4002990e();
  }
  if (DAT_ram_300794d0 != DAT_ram_30049e40) {
    cVar1 = '\x01';
    if (DAT_ram_30049e40 != '\x01') {
      cVar1 = '\x02';
    }
    uStack_14 = 3;
    if (_DAT_ram_30079554 != 0) {
      cStack_13 = cVar1;
      nc_radio_send_control_if_ready(&uStack_14,2);
      DAT_ram_300794d0 = cVar1;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4002b21c.
 * REA evidence: ev_8771f5db5658c4afebc90374b0321e11120133952d4d1e292e811d17ea6a4630
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002b21c(int param_1)

{
  *(undefined4 *)(param_1 + 0x89d0) = 0;
  *(undefined4 *)(param_1 + 0x89d4) = 0;
  *(undefined4 *)(param_1 + 0x89d8) = 0;
  return;
}


/* NanoCore 1.11, address 0x4002b22e.
 * REA evidence: ev_3b56fca809d1f2f5009d68973a628fb563cd27d8d2cf96f76d97a786726e49ea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002b22e(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    FUN_ram_400002f4();
    iVar4 = *(int *)(param_1 + 0x89d8);
    iVar2 = *(int *)(param_1 + 0x89d0);
    FUN_ram_400002fa();
    uVar1 = 0xffffffff;
    if (param_3 <= 0x89d0U - iVar4) {
      uVar3 = 0x89d0U - iVar2;
      if (param_3 < 0x89d0U - iVar2) {
        uVar3 = param_3;
      }
      FUN_ram_4000304c(param_1 + iVar2,param_2,uVar3);
      if (uVar3 < param_3) {
        FUN_ram_4000304c(param_1,param_2 + uVar3,param_3 - uVar3);
      }
      uVar3 = iVar2 + param_3;
      if (0x89cf < uVar3) {
        uVar3 = uVar3 - 0x89d0;
      }
      FUN_ram_400002f4();
      *(uint *)(param_1 + 0x89d0) = uVar3;
      *(uint *)(param_1 + 0x89d8) = param_3 + *(int *)(param_1 + 0x89d8);
      FUN_ram_400002fa();
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.11, address 0x4002b2e2.
 * REA evidence: ev_c4c566c6dc85f5df78e36e2f18e119cd50fda6f90d8bbe346f684e0cab9f3cd6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002b2e2(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    FUN_ram_400002f4();
    uVar2 = *(uint *)(param_1 + 0x89d8);
    iVar1 = *(int *)(param_1 + 0x89d4);
    FUN_ram_400002fa();
    if (uVar2 < param_3) {
      param_3 = uVar2;
    }
    if (param_3 != 0) {
      uVar2 = 0x89d0U - iVar1;
      if (param_3 < 0x89d0U - iVar1) {
        uVar2 = param_3;
      }
      FUN_ram_4000304c(param_2,param_1 + iVar1,uVar2);
      if (uVar2 < param_3) {
        FUN_ram_4000304c(param_2 + uVar2,param_1,param_3 - uVar2);
      }
      uVar2 = iVar1 + param_3;
      if (0x89cf < uVar2) {
        uVar2 = uVar2 - 0x89d0;
      }
      FUN_ram_400002f4();
      *(uint *)(param_1 + 0x89d4) = uVar2;
      *(uint *)(param_1 + 0x89d8) = *(int *)(param_1 + 0x89d8) - param_3;
      FUN_ram_400002fa();
      return param_3;
    }
  }
  return 0;
}


/* NanoCore 1.11, address 0x4002b392.
 * REA evidence: ev_f7cd2ea1d460bb191dd71ccc76795f5443a756f254266dabf981b28ee7020e2f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002b392(int param_1)

{
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  if ((*(byte *)(param_1 + 0xe) & 0xfb) == 1) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    return;
  }
  if (*(byte *)(param_1 + 0xe) == 3) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    return;
  }
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  return;
}


/* NanoCore 1.11, address 0x4002b3c4.
 * REA evidence: ev_e41c361d60965eea2a9b7d536547814f3c76c6e63696db9b4db5afeade522adf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002b3c4(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (DAT_ram_3007aa90 == '\x02') {
    return;
  }
  FUN_ram_400002f4();
  if (DAT_ram_3007aa90 == '\0') {
    DAT_ram_3007aa90 = 1;
    FUN_ram_400002fa();
    uVar3 = 0;
    do {
      uVar4 = (uVar3 & 0xff) << 8;
      iVar1 = 8;
      do {
        uVar2 = uVar4 << 1;
        if ((short)uVar4 < 0) {
          uVar2 = uVar2 ^ 0x1021;
        }
        uVar4 = uVar2 & 0xffff;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      *(short *)(uVar3 * 2 + 0x3007aa94) = (short)uVar2;
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x100);
    FUN_ram_400002f4();
    DAT_ram_3007aa90 = 2;
    FUN_ram_400002fa();
    return;
  }
  FUN_ram_400002fa();
  do {
  } while (DAT_ram_3007aa90 != '\x02');
  return;
}


/* NanoCore 1.11, address 0x4002b46c.
 * REA evidence: ev_035fa8b1a8399a7f5c35184efc1e1ea81bebf1da5ac6e113cfdf88224d5b2440
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002b46c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  FUN_ram_4002b3c4();
  for (iVar1 = 0; param_3 != iVar1; iVar1 = iVar1 + 1) {
  }
  return;
}


/* NanoCore 1.11, address 0x4002b4b0.
 * REA evidence: ev_c04e9196ea41bea3de2ede440a69537eaf16750afa8d1f10b8a7a2847ad2fee4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002b4b0(undefined1 *param_1,uint param_2,undefined1 param_3,undefined4 param_4,
                     int param_5,int param_6)

{
  undefined2 uVar1;
  uint uVar2;
  
  if (((param_1 == (undefined1 *)0x0) || (uVar2 = param_6 + 8, param_2 < uVar2)) ||
     ((param_6 != 0 && (param_5 == 0)))) {
    uVar2 = 0;
  }
  else {
    FUN_ram_4002b3c4();
    *param_1 = 0xa5;
    param_1[4] = (char)param_4;
    param_1[1] = param_3;
    param_1[2] = (char)param_6;
    param_1[3] = (char)((uint)param_6 >> 8);
    param_1[5] = (char)((uint)param_4 >> 8);
    if (param_6 != 0) {
      FUN_ram_4000304c(param_1 + 6,param_5,param_6);
    }
    uVar1 = FUN_ram_4002b46c(0xffff,param_1,param_6 + 6);
    param_1[param_6 + 6] = (char)uVar1;
    param_1[param_6 + 7] = (char)((ushort)uVar1 >> 8);
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x4002b53e.
 * REA evidence: ev_dcfb6dafd14f311e4d722f82589cd1b2102ffba406e00b641c3507b28c8ad7f0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002b53e(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_4002b3c4();
  *param_1 = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1028) = param_2;
  *(undefined4 *)(param_1 + 0x102c) = param_3;
  return;
}


/* NanoCore 1.11, address 0x4002b574.
 * REA evidence: ev_f47c2f95a9d73a0727b81cac6fe397c203f34be4ec1ab357c2cc1e79d46318ff
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002b574(char *param_1,int param_2,uint param_3)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  short sVar7;
  char cVar8;
  uint uVar9;
  code *pcVar10;
  char *pcVar11;
  char acStack_3c [2];
  ushort uStack_3a;
  undefined2 uStack_38;
  char *pcStack_34;
  
  uVar3 = 0;
  FUN_ram_4002b3c4();
  do {
    if (param_3 <= uVar3) {
      return;
    }
    cVar8 = *param_1;
    bVar2 = *(byte *)(param_2 + uVar3);
    uVar9 = (uint)bVar2;
    pcVar11 = (char *)(param_2 + uVar3);
    if (cVar8 == '\0') {
      if (uVar9 == 0xa5) {
        param_1[8] = '\x01';
        uVar1 = _DAT_ram_3007ab48;
        param_1[9] = '\0';
        param_1[0] = '\x01';
        param_1[1] = -0x5b;
        *(ushort *)(param_1 + 0x10) = uVar1 ^ 0xff00;
      }
    }
    else if (cVar8 == '\x01') {
      uVar1 = *(ushort *)(param_1 + 8);
      uVar6 = uVar1 + 1;
      *(short *)(param_1 + 8) = (short)(uVar6 * 0x10000 >> 0x10);
      param_1[uVar1 + 1] = bVar2;
      *(ushort *)(param_1 + 0x10) =
           *(ushort *)(param_1 + 0x10) << 8 ^
           *(ushort *)((uVar9 ^ *(ushort *)(param_1 + 0x10) >> 8) * 2 + 0x3007aa94);
      if ((uVar6 & 0xffff) == 6) {
        param_1[0xe] = param_1[2];
        uVar1 = CONCAT11(param_1[4],param_1[3]);
        *(ushort *)(param_1 + 10) = uVar1;
        *(ushort *)(param_1 + 0xc) = CONCAT11(param_1[6],param_1[5]);
        if (0x1000 < uVar1) goto LAB_ram_4002b666;
        param_1[0x16] = '\0';
        param_1[0x17] = '\0';
        if (uVar1 == 0) {
LAB_ram_4002b672:
          param_1[0x14] = '\0';
          param_1[0x15] = '\0';
          param_1[0x12] = '\0';
          param_1[0x13] = '\0';
          cVar8 = '\x03';
        }
        else {
          cVar8 = '\x02';
        }
        *param_1 = cVar8;
      }
    }
    else if (cVar8 == '\x02') {
      uVar9 = (uint)*(ushort *)(param_1 + 0x16);
      if (uVar9 < 0x1000) {
        uVar6 = param_3 - uVar3;
        uVar4 = *(ushort *)(param_1 + 10) - uVar9;
        if ((uVar9 != 0) || (uVar6 < uVar4 + 2)) {
          if (uVar4 <= uVar6) {
            uVar6 = uVar4;
          }
          FUN_ram_4000304c(param_1 + uVar9 + 0x28,pcVar11,uVar6);
          uVar4 = (uint)*(ushort *)(param_1 + 0x10);
          for (uVar9 = 0; uVar6 != uVar9; uVar9 = uVar9 + 1) {
            uVar4 = (uVar4 << 8 ^
                    (uint)*(ushort *)((uVar4 >> 8 ^ (uint)(byte)pcVar11[uVar9]) * 2 + 0x3007aa94)) &
                    0xffff;
          }
          *(short *)(param_1 + 0x10) = (short)uVar4;
          uVar1 = *(ushort *)(param_1 + 0x16);
          *(short *)(param_1 + 0x16) = (short)((uVar1 + uVar6) * 0x10000 >> 0x10);
          uVar3 = (uVar3 - 1) + uVar6;
          if ((uint)*(ushort *)(param_1 + 10) == (uVar1 + uVar6 & 0xffff)) goto LAB_ram_4002b672;
          goto LAB_ram_4002b5fe;
        }
        uVar6 = (uint)*(ushort *)(param_1 + 0x10);
        for (uVar9 = 0; uVar4 != uVar9; uVar9 = uVar9 + 1) {
          uVar6 = (uVar6 << 8 ^
                  (uint)*(ushort *)((uVar6 >> 8 ^ (uint)(byte)pcVar11[uVar9]) * 2 + 0x3007aa94)) &
                  0xffff;
        }
        iVar5 = uVar4 + uVar3;
        *(short *)(param_1 + 0x10) = (short)uVar6;
        uVar3 = iVar5 + 1;
        if (CONCAT11(*(undefined1 *)(param_2 + uVar3),*(undefined1 *)(param_2 + iVar5)) == uVar6) {
          pcVar10 = *(code **)(param_1 + 0x1028);
          if (pcVar10 != (code *)0x0) {
            acStack_3c[0] = param_1[0xe];
            uStack_38 = *(undefined2 *)(param_1 + 0xc);
            uStack_3a = *(ushort *)(param_1 + 10);
            pcStack_34 = pcVar11;
LAB_ram_4002b6ea:
            (*pcVar10)(acStack_3c,*(undefined4 *)(param_1 + 0x102c));
          }
        }
        else {
LAB_ram_4002b7c2:
          FUN_ram_4002b392(param_1);
        }
      }
LAB_ram_4002b666:
      *param_1 = '\0';
    }
    else if (cVar8 == '\x03') {
      if (*(short *)(param_1 + 0x14) != 0) {
        uVar9 = uVar9 << 8 | (uint)*(ushort *)(param_1 + 0x12);
      }
      sVar7 = *(short *)(param_1 + 0x14) + 1;
      *(short *)(param_1 + 0x12) = (short)uVar9;
      *(short *)(param_1 + 0x14) = sVar7;
      if (sVar7 == 2) {
        if (*(ushort *)(param_1 + 0x10) != uVar9) goto LAB_ram_4002b7c2;
        pcVar10 = *(code **)(param_1 + 0x1028);
        if (pcVar10 != (code *)0x0) {
          acStack_3c[0] = param_1[0xe];
          uStack_3a = *(ushort *)(param_1 + 10);
          uStack_38 = *(undefined2 *)(param_1 + 0xc);
          pcStack_34 = param_1 + 0x28;
          goto LAB_ram_4002b6ea;
        }
        goto LAB_ram_4002b666;
      }
    }
LAB_ram_4002b5fe:
    uVar3 = uVar3 + 1;
  } while( true );
}


/* NanoCore 1.11, address 0x4002b7f8.
 * REA evidence: ev_5058788028b4d1550c3c8329214e689531343ff2f6af263ea1a170c979e78170
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_4002b7f8(undefined4 param_1,int *param_2,undefined4 param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_2[2];
  if (uVar2 < (uint)param_2[1]) {
    uVar1 = param_2[1] - uVar2;
    if (param_4 < uVar1) {
      uVar1 = param_4;
    }
    iVar3 = FUN_ram_4002bf02(uVar2 + *param_2,param_3,uVar1);
    if (iVar3 != 0) {
      *param_5 = 0;
      return 1;
    }
    param_2[2] = param_2[2] + uVar1;
    *param_5 = uVar1;
  }
  else {
    *param_5 = 0;
  }
  return 0;
}


/* NanoCore 1.11, address 0x4002b94a.
 * REA evidence: ev_e793c51fadd5516e371681bcaf290510fdbd7ccaa10957893744b2e3e8ca6d76
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002b94a(void)

{
  FUN_ram_4004b1c8(&DAT_ram_3007ac94);
  DAT_ram_3007ac94 = 0x55;
  _DAT_ram_3007aca0 = &LAB_ram_4002b864;
  _DAT_ram_3007aca4 = &LAB_ram_4002b84c;
  _DAT_ram_3007aca8 = FUN_ram_4002b7f8;
  _DAT_ram_3007acb0 = &LAB_ram_4002b7ca;
  _DAT_ram_3007ac98 = 0;
  _DAT_ram_3007acb4 = &LAB_ram_4002b7f0;
  FUN_ram_4004b1d2();
  return;
}


/* NanoCore 1.11, address 0x4002b9a8.
 * REA evidence: ev_76a348e48a2c94c261fce7883d28acb7c5cd12ab35127d45052af2774f786bf2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002b9a8(void)

{
  if (_DAT_ram_3007ad10 != 0) {
    FUN_ram_40004ab8(0x3007ace4);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4002b9c0.
 * REA evidence: ev_2b9a2d308b7f814f50fb825a2a9c207cfbdf93921cf4ac4c7d7f8e4ef2198ef7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4002b9c0(void)

{
  int iVar1;
  uint uVar2;
  int aiStack_14 [3];
  
  iVar1 = FUN_ram_40006c6e();
  if ((iVar1 == 0) && (iVar1 = FUN_ram_40006c3a(), iVar1 < 1)) {
    return 0;
  }
  if (_DAT_ram_3007ad18 != 0) {
    aiStack_14[0] = 0;
    uVar2 = FUN_ram_40006f3e(aiStack_14);
    if (((uVar2 != 0) && (uVar2 <= _DAT_ram_3007ad18)) &&
       (_DAT_ram_3007ad18 < uVar2 + aiStack_14[0] * 0x40)) {
      return _DAT_ram_3007ad18;
    }
  }
  _DAT_ram_3007ad18 = FUN_ram_40006eee(s_ui_asset_ram_40094c3c);
  return _DAT_ram_3007ad18;
}


/* NanoCore 1.11, address 0x4002ba1a.
 * REA evidence: ev_2d81a8ff7aecafb20d33245dfd6a08e5041ffa50329df3ffa7e0a013635d0308
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002ba1a(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  while( true ) {
    if (param_4 == 0) {
      return 0;
    }
    uVar1 = param_4;
    if (0x1000 < param_4) {
      uVar1 = 0x1000;
    }
    uVar2 = FUN_ram_40006f52(param_1,param_2,param_3,uVar1);
    if (uVar1 != uVar2) break;
    param_4 = param_4 - uVar1;
    param_2 = param_2 + uVar1;
    param_3 = param_3 + uVar1;
  }
  return 0xfffffff8;
}


/* NanoCore 1.11, address 0x4002ba66.
 * REA evidence: ev_0205a4e9211ef3e7a822a2bca8d090834de7d499299d5d50795d1520a8406fe0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002ba66(void)

{
  int iVar1;
  
  if ((_DAT_ram_3007ad10 == 0) &&
     (iVar1 = FUN_ram_4000492c(0x3007ace4,s_uiast_ram_40096dbc,1), iVar1 == 0)) {
    _DAT_ram_3007ad10 = 1;
  }
  return 0;
}


/* NanoCore 1.11, address 0x4002ba9e.
 * REA evidence: ev_e2e6eb02e763e0c77c86f771037867d4e28c5772732d54407b44b236bcf4e47b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002ba9e(void)

{
  if (_DAT_ram_3007ad10 != 0) {
    FUN_ram_400049c6(0x3007ace4,0xffffffff);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4002bab8.
 * REA evidence: ev_936a02c90dcca1559ab023aabee3fd7b65c02e6af9fbe7e29a6fd736dd485f41
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002bab8(void)

{
  FUN_ram_4002ba9e();
  DAT_ram_3007acd8 = 0;
  FUN_ram_4000504c(0x3007acc8,0,0x10);
  _DAT_ram_3007ad14 = 0;
  FUN_ram_4002b9a8();
  return;
}


/* NanoCore 1.11, address 0x4002bae8.
 * REA evidence: ev_89efb460642b7122827a22fa56312c4fe1710b73364f45ddd89ccf146a9b1da9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002bae8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0xfffffff6;
  }
  iVar1 = FUN_ram_4002b9c0();
  if (iVar1 != 0) {
    uVar2 = FUN_ram_4002ba1a(iVar1,0,param_1,0x10);
    return uVar2;
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x4002bb10.
 * REA evidence: ev_095711b41def31b91902a8353fade0646a9a9e3e600a5e005f4eda4495982189
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002bb10(int param_1)

{
  int iVar1;
  int *piVar2;
  int local_20;
  uint uStack_1c;
  
  piVar2 = &local_20;
  iVar1 = FUN_ram_4002bae8(&local_20);
  if (iVar1 == 0) {
    iVar1 = FUN_ram_4002b9c0();
    if (iVar1 == 0) {
      DAT_ram_3007acd8 = 0;
      FUN_ram_4000304c(0x3007acc8,&local_20,0x10);
      if (param_1 == 0) {
        return 0;
      }
      goto LAB_ram_4002bb4e;
    }
    if ((((0x10 < *(uint *)(iVar1 + 0x38)) && (local_20 == 0x55494131)) && (uStack_1c != 0)) &&
       (uStack_1c <= *(uint *)(iVar1 + 0x38) - 0x10)) {
      FUN_ram_4000304c(0x3007acc8,&local_20,0x10);
      if (param_1 != 0) {
        FUN_ram_4000304c(param_1,&local_20,0x10);
      }
      return 1;
    }
    FUN_ram_4000304c(0x3007acc8,&local_20,0x10);
    DAT_ram_3007acd8 = 2;
  }
  else {
    DAT_ram_3007acd8 = 0;
    FUN_ram_4000504c(0x3007acc8,0,0x10);
  }
  if (param_1 == 0) {
    return 0;
  }
  piVar2 = (int *)0x3007acc8;
LAB_ram_4002bb4e:
  FUN_ram_4000304c(param_1,piVar2,0x10);
  return 0;
}


/* NanoCore 1.11, address 0x4002bbda.
 * REA evidence: ev_9dd86ce357732a4a63df07c9943261d8cc24908d5266f7634242f26786b98ef6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4002bbda(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_140 [4];
  uint uStack_13c;
  int iStack_138;
  uint uStack_130;
  int iStack_12c;
  
  puVar5 = auStack_140;
  iVar2 = FUN_ram_4002bb10(auStack_140);
  if (iVar2 == 0) {
    if (DAT_ram_3007acd8 == '\x02') {
      FUN_ram_400227cc();
    }
    if (param_1 != 0) {
      puVar5 = (undefined1 *)0x3007acc8;
LAB_ram_4002bc56:
      FUN_ram_4000304c(param_1,puVar5,0x10);
      return iVar2;
    }
  }
  else {
    iVar3 = FUN_ram_4002b9c0();
    if (iVar3 == 0) {
      DAT_ram_3007acd8 = '\0';
    }
    else {
      iVar8 = 0x10;
      iVar1 = 0;
      for (uVar6 = uStack_13c; uVar6 != 0; uVar6 = uVar6 - uVar7) {
        uVar7 = uVar6;
        if (0x100 < uVar6) {
          uVar7 = 0x100;
        }
        iVar4 = FUN_ram_4002ba1a(iVar3,iVar8,&uStack_130,uVar7);
        if (iVar4 != 0) goto LAB_ram_4002bc7c;
        iVar1 = FUN_ram_40007554(iVar1,&uStack_130,uVar7);
        iVar8 = iVar8 + uVar7;
      }
      if ((iVar1 != 0) && (iStack_138 == iVar1)) {
        uStack_130 = uStack_13c;
        iStack_12c = iVar1;
        FUN_ram_40022702(&uStack_130);
        FUN_ram_4000304c(0x3007acc8,auStack_140,0x10);
        DAT_ram_3007acd8 = '\x01';
        if (param_1 == 0) {
          DAT_ram_3007acd8 = 1;
          return iVar2;
        }
        goto LAB_ram_4002bc56;
      }
LAB_ram_4002bc7c:
      DAT_ram_3007acd8 = '\x02';
      FUN_ram_400227cc();
    }
    if (param_1 != 0) {
      FUN_ram_4000304c(param_1,auStack_140,0x10);
    }
  }
  return 0;
}


/* NanoCore 1.11, address 0x4002bcfc.
 * REA evidence: ev_803557735a399c7515a1663c7417f05869537e42d8bdbc82ee529a13ff2ed8cf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002bcfc(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iStack_28;
  int iStack_24;
  undefined1 auStack_20 [4];
  int iStack_1c;
  int iStack_18;
  
  cVar1 = DAT_ram_3007acd8;
  if (DAT_ram_3007acd8 != '\0') {
    if (param_1 != 0) {
      FUN_ram_4000304c(param_1,0x3007acc8,0x10);
    }
    return (uint)(cVar1 == '\x01');
  }
  uVar2 = FUN_ram_4002bb10(auStack_20);
  if (uVar2 == 0) {
    if (DAT_ram_3007acd8 == '\x02') {
      FUN_ram_400227cc();
    }
    if (param_1 == 0) {
      return 0;
    }
    puVar4 = (undefined1 *)0x3007acc8;
  }
  else {
    iVar3 = FUN_ram_400226d8(&iStack_28);
    if (((iVar3 != 0) || (iStack_28 != iStack_1c)) || (iStack_24 != iStack_18)) {
      uVar2 = FUN_ram_4002bbda(param_1);
      return uVar2;
    }
    FUN_ram_4000304c(0x3007acc8,auStack_20,0x10);
    DAT_ram_3007acd8 = '\x01';
    if (param_1 == 0) {
      DAT_ram_3007acd8 = 1;
      return uVar2;
    }
    puVar4 = auStack_20;
  }
  FUN_ram_4000304c(param_1,puVar4,0x10);
  return uVar2;
}


/* NanoCore 1.11, address 0x4002bda6.
 * REA evidence: ev_2d86996d9654c3650b7fefb5a014107be02f5808f24e7aa97786f7788cdc725a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002bda6(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_40 [4];
  int iStack_3c;
  undefined1 auStack_30 [28];
  
  FUN_ram_4002ba9e();
  if ((_DAT_ram_3007acdc == 0) || (_DAT_ram_3007ad14 == 0)) {
    if (param_1 == 0) {
      iVar4 = FUN_ram_4002bcfc(auStack_40);
      if (iVar4 != 0) goto LAB_ram_4002be2a;
    }
    else {
      iVar4 = FUN_ram_4002bb10(auStack_30);
      if (iVar4 == 0) {
        FUN_ram_4000304c(auStack_40,0x3007acc8,0x10);
        FUN_ram_4002b9a8();
        return 0;
      }
      FUN_ram_4000304c(0x3007acc8,auStack_30,0x10);
      DAT_ram_3007acd8 = 1;
      FUN_ram_4000304c(auStack_40,auStack_30,0x10);
LAB_ram_4002be2a:
      iVar4 = FUN_ram_4002b9c0();
      if ((iVar4 != 0) && (uVar3 = iStack_3c + 0x10, uVar3 <= *(uint *)(iVar4 + 0x38))) {
        if ((_DAT_ram_3007acdc == 0) ||
           (iVar5 = _DAT_ram_3007acdc, uVar1 = _DAT_ram_3007ace0, _DAT_ram_3007ace0 < uVar3)) {
          iVar5 = FUN_ram_4002c2b6(uVar3);
          if (iVar5 == 0) {
            if (_DAT_ram_3007acdc != 0) {
              FUN_ram_4002c30c();
              _DAT_ram_3007acdc = 0;
              _DAT_ram_3007ace0 = 0;
              iVar5 = FUN_ram_4002c2b6(uVar3);
              if (iVar5 != 0) goto LAB_ram_4002be72;
            }
            goto LAB_ram_4002bea4;
          }
LAB_ram_4002be72:
          uVar1 = uVar3;
          if (_DAT_ram_3007acdc != 0) {
            FUN_ram_4002c30c();
          }
        }
        _DAT_ram_3007ace0 = uVar1;
        _DAT_ram_3007acdc = iVar5;
        iVar4 = FUN_ram_4002ba1a(iVar4,0,_DAT_ram_3007acdc,uVar3);
        _DAT_ram_3007ad14 = uVar3;
        if (iVar4 == 0) goto LAB_ram_4002bdd0;
        _DAT_ram_3007ad14 = 0;
      }
    }
LAB_ram_4002bea4:
    FUN_ram_4002b9a8();
    uVar2 = 0;
  }
  else {
LAB_ram_4002bdd0:
    FUN_ram_4002b9a8();
    uVar2 = 1;
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x4002beb6.
 * REA evidence: ev_551dfe3f5bc9f02bdd825cc97ba32260dee35d79fec40ac0484dc98fd4a56961
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002beb6(uint param_1)

{
  int iVar1;
  undefined1 auStack_20 [12];
  uint uStack_14;
  
  param_1 = param_1 & 0xffffff;
  iVar1 = FUN_ram_4002bcfc(auStack_20);
  if (((iVar1 != 0) || (iVar1 = FUN_ram_4002bb10(auStack_20), iVar1 != 0)) &&
     ((uStack_14 & 0xff000000) == 0x1000000)) {
    param_1 = uStack_14 & 0xffffff;
  }
  return param_1;
}


/* NanoCore 1.11, address 0x4002befc.
 * REA evidence: ev_22eab1490a52bc15e9480106d25a867ad53c8c46c85745eb67fb116644284d29
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002befc(void)

{
  FUN_ram_4002bda6(0);
  return;
}


/* NanoCore 1.11, address 0x4002bf02.
 * REA evidence: ev_4681948d4876ccde75e82364316e38462cc3f562a5352cbbd6a4e8205903a137
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002bf02(uint param_1,int param_2,uint param_3)

{
  int iVar1;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    return 0xfffffff6;
  }
  FUN_ram_4002ba9e();
  if ((_DAT_ram_3007acdc == 0) || (_DAT_ram_3007ad14 == 0)) {
    FUN_ram_4002b9a8();
    iVar1 = FUN_ram_4002b9c0();
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    iVar1 = FUN_ram_4002ba1a(iVar1,param_1,param_2,param_3);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    if ((param_1 <= _DAT_ram_3007ad14) && (param_3 <= _DAT_ram_3007ad14 - param_1)) {
      memcpy(param_2,_DAT_ram_3007acdc + param_1,param_3);
      FUN_ram_4002b9a8();
      return 0;
    }
    FUN_ram_4002b9a8();
  }
  return 0xfffffff8;
}


/* NanoCore 1.11, address 0x4002bf80.
 * REA evidence: ev_99dec3dd1911336a81b2c0c59abf9f55f0a8d487246abd6ae7f42fd1f8c88c1c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002bf80(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_5c [16];
  int iStack_4c;
  uint uStack_48;
  undefined1 auStack_3c [16];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (param_1 == 0) {
    return 0xfffffff6;
  }
  uVar2 = 0xfffffff6;
  if (param_2 != (undefined4 *)0x0) {
    iVar3 = FUN_ram_4002bcfc(auStack_5c);
    if (iVar3 != 0) {
      iVar3 = FUN_ram_4002bf02(0x10,&iStack_4c,0x10);
      if (iVar3 != 0) {
        return 0xfffffff8;
      }
      if (iStack_4c == 0x494e4458) {
        for (uVar1 = 0; uVar1 < uStack_48; uVar1 = uVar1 + 1) {
          iVar3 = FUN_ram_4002bf02(uVar1 * 0x1c + 0x20,auStack_3c,0x1c);
          if (iVar3 != 0) {
            return 0xfffffff8;
          }
          iVar3 = FUN_ram_400051f8(auStack_3c,param_1,0x10);
          if (iVar3 == 0) {
            *param_2 = uStack_2c;
            param_2[1] = uStack_28;
            param_2[2] = uStack_24;
            return 0;
          }
        }
      }
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


