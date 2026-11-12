/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40023000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40023088.
 * REA evidence: ev_8ccbcc533c76b945072b8de77324c759f35ae966db0844605d4d14b3f016dc3c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40023088(uint param_1,undefined1 param_2)

{
  if (param_1 < 10) {
    (&DAT_ram_3006a538)[param_1] = param_2;
    return 0;
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x400230a2.
 * REA evidence: ev_fe080b2032ea7d1912451e2c9c98435c6fbaffdb9321f76f894feee942e24dd2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_400230a2(uint param_1)

{
  if (param_1 < 10) {
    return (&DAT_ram_3006a538)[param_1] != '\0';
  }
  return false;
}


/* NanoCore 1.10, address 0x400230be.
 * REA evidence: ev_7720b8dfda2789ad909df95371d7029ef9370bec028b71c01c94b3fe03cf234e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400230be(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (9 < param_1) {
    return 0xffffffff;
  }
  uVar2 = FUN_ram_40024f3e();
  uVar3 = _DAT_ram_3006a6fc;
  uVar1 = _DAT_ram_3006a700;
  if ((param_1 == 9) && (DAT_ram_3006a7a5 != uVar2)) {
    memset(&DAT_ram_3006a6f4,0,0x30);
    uVar3 = (undefined4)_DAT_ram_4009281c;
    _DAT_ram_3006a6f4 = uVar3;
    uVar1 = uVar3;
    if (uVar2 < 5) {
      if (uVar2 < 3) {
        if (uVar2 == 1) {
          _DAT_ram_3006a6f4 = DAT_ram_40092864;
        }
        else if (uVar2 != 2) goto LAB_ram_40023146;
        _DAT_ram_3006a6f8 = uVar3;
        uVar3 = _DAT_ram_3006a6fc;
        uVar1 = _DAT_ram_3006a700;
      }
      else {
        _DAT_ram_3006a6f4 = DAT_ram_40092864;
        _DAT_ram_3006a6f8 = DAT_ram_40092864;
        uVar1 = _DAT_ram_3006a700;
      }
    }
  }
LAB_ram_40023146:
  _DAT_ram_3006a700 = uVar1;
  _DAT_ram_3006a6fc = uVar3;
  (&DAT_ram_3006a79c)[param_1] = (char)uVar2;
  return 0;
}


/* NanoCore 1.10, address 0x4002317e.
 * REA evidence: ev_b32289c1765a374ab2fa5ad29570fe6f18aa7364aae5f801933be71c4ffd8b41
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002317e(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 10) {
    uVar1 = FUN_ram_40024f3e(param_1,(&DAT_ram_3006a79c)[param_1]);
    (&DAT_ram_3006a79c)[param_1] = (char)uVar1;
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.10, address 0x400231b0.
 * REA evidence: ev_fa900f10369969bce42d69495af2c9f0044b76eab733ad566ec04d4bce8efd2d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400231b0(ulonglong param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  
  if (param_2 < 10) {
    uVar1 = 0xffffffff;
    if (param_3 < 0xc) {
      if ((float)param_1 < 0.0) {
        param_1 = 0;
      }
      else if (DAT_ram_4009281c < (float)param_1) {
        param_1 = (ulonglong)(uint)DAT_ram_4009281c;
      }
      *(ulonglong *)((param_3 + param_2 * 0xc) * 4 + 0x3006a544) = param_1;
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x400231fe.
 * REA evidence: ev_fd360584d32ee2295abbe6e4c7eb8c6b73ec69050f82268970ff68ad9f8aa083
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined8 FUN_ram_400231fe(uint param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_1 < 10) && (param_2 < 0xc)) {
    uVar1 = *(undefined8 *)((param_2 + param_1 * 0xc) * 4 + 0x3006a544);
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x40023224.
 * REA evidence: ev_be78807df11e60742f52dbe6cfaf00792ac7ab26d0af254b4a5241a8e7246e4d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40023224(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


/* NanoCore 1.10, address 0x40023228.
 * REA evidence: ev_32b27cbeff60595a563f254d3e6793c77cb3e9830217d0e0bc67b4dd5a3b77bd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40023228(void)

{
  return;
}


/* NanoCore 1.10, address 0x4002322a.
 * REA evidence: ev_bbbc020ecca6bca4b86c9e00dedef702dae6879c14ad508f131fef23ec3c9738
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002322a(void)

{
  return 0;
}


/* NanoCore 1.10, address 0x4002322e.
 * REA evidence: ev_e5e0064e1c1d6f1e5a1acddcc54a034708efd229fe2115456b13cd5cfe315c02
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002322e(void)

{
  return;
}


/* NanoCore 1.10, address 0x40023230.
 * REA evidence: ev_ba292bcac6ff9e1a17ce9980a56850a63b6aa928b695d2dd740e6020e670cc5d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40023230(uint param_1)

{
  if (param_1 < 8) {
    return (&DAT_ram_40093778)[param_1];
  }
  return 0;
}


/* NanoCore 1.10, address 0x40023248.
 * REA evidence: ev_c072c86dbf39f66b83ded1d8f4c350b88091fce7a573478e86a2fa3ece86e945
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40023248(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 < 10) {
    uVar1 = FUN_ram_400230a2();
    iVar2 = FUN_ram_40023088(param_1,param_2);
    if (iVar2 == 0) {
      iVar2 = thunk_FUN_ram_40014772();
      if (iVar2 == 0) {
        return 0;
      }
      FUN_ram_40023224(param_1,param_2);
      switch(param_1) {
      case 1:
        iVar2 = FUN_ram_4000b88e();
        break;
      case 2:
        iVar2 = FUN_ram_4000b4fe();
        break;
      case 3:
        iVar2 = FUN_ram_4000bcb0();
        break;
      case 4:
        iVar2 = FUN_ram_4000beb2();
        break;
      case 5:
        iVar2 = FUN_ram_4000c41a();
        break;
      case 6:
        iVar2 = FUN_ram_4000c63e();
        break;
      case 7:
        iVar2 = FUN_ram_4000c824();
        break;
      case 8:
        iVar2 = FUN_ram_4000cb1c();
        break;
      case 9:
        iVar2 = FUN_ram_4000c9a2();
        break;
      default:
        iVar2 = FUN_ram_4000bd34();
      }
      if (iVar2 == 0) {
        FUN_ram_400147c0();
        FUN_ram_40023228(param_1);
        return 0;
      }
      FUN_ram_40023088(param_1,uVar1);
      thunk_FUN_ram_40014772();
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x40023302.
 * REA evidence: ev_bb863ebb57256e1518f9661d7ee497c002bd50e4741988c66436f5e3ba04bf2c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40023302(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (9 < param_1) {
    return 0xffffffff;
  }
  uVar1 = FUN_ram_4002317e();
  iVar2 = FUN_ram_400230be(param_1,param_2);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  FUN_ram_4002317e(param_1);
  switch(param_1) {
  case 1:
    iVar2 = FUN_ram_4000b7ae();
    break;
  case 2:
  case 3:
    goto switchD_ram_40023346_caseD_2;
  case 4:
    iVar2 = FUN_ram_4000c01e();
    break;
  case 5:
    iVar2 = FUN_ram_4000c5a8();
    break;
  case 6:
    iVar2 = FUN_ram_4000c7ce();
    break;
  case 7:
    iVar2 = FUN_ram_4000c994();
    break;
  case 8:
    iVar2 = FUN_ram_4000cc88();
    break;
  case 9:
    iVar2 = FUN_ram_4000cb0e();
    break;
  default:
    iVar2 = FUN_ram_4000bea4();
  }
  if (iVar2 == 0) {
switchD_ram_40023346_caseD_2:
    iVar2 = FUN_ram_4002322a(param_1,0);
    if (iVar2 == 0) {
      FUN_ram_400147c0();
      return 0;
    }
  }
  else {
    iVar2 = thunk_FUN_ram_40014772();
    if (iVar2 == 0) {
      uVar1 = FUN_ram_4002322a(param_1,1);
      return uVar1;
    }
    FUN_ram_400230be(param_1,uVar1);
    thunk_FUN_ram_40014772();
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x4002330c.
 * REA evidence: ev_0fc04df242e992c6ece6fb11bcd2d68fe6c3a29d8903b6fa6f0fe1d84c36e68b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002330c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_ram_4002317e();
  iVar2 = FUN_ram_400230be(param_1,param_2);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  FUN_ram_4002317e(param_1);
  switch(param_1) {
  case 1:
    iVar2 = FUN_ram_4000b7ae();
    break;
  case 2:
  case 3:
    goto switchD_ram_40023346_caseD_2;
  case 4:
    iVar2 = FUN_ram_4000c01e();
    break;
  case 5:
    iVar2 = FUN_ram_4000c5a8();
    break;
  case 6:
    iVar2 = FUN_ram_4000c7ce();
    break;
  case 7:
    iVar2 = FUN_ram_4000c994();
    break;
  case 8:
    iVar2 = FUN_ram_4000cc88();
    break;
  case 9:
    iVar2 = FUN_ram_4000cb0e();
    break;
  default:
    iVar2 = FUN_ram_4000bea4();
  }
  if (iVar2 == 0) {
switchD_ram_40023346_caseD_2:
    iVar2 = FUN_ram_4002322a(param_1,0);
    if (iVar2 == 0) {
      FUN_ram_400147c0();
      return 0;
    }
  }
  else {
    iVar2 = thunk_FUN_ram_40014772();
    if (iVar2 == 0) {
      uVar1 = FUN_ram_4002322a(param_1,1);
      return uVar1;
    }
    FUN_ram_400230be(param_1,uVar1);
    thunk_FUN_ram_40014772();
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x400233ba.
 * REA evidence: ev_c38ab32f13437d2fd76c5a7c016947813f89e1cebe1dce0674513173b25f45ad
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400233ba(float param_1,uint param_2,undefined4 param_3)

{
  undefined4 in_register_00000100;
  int iVar1;
  
  if (param_2 < 10) {
    if (param_1 < 0.0) {
      param_1 = 0.0;
    }
    else if (DAT_ram_4009281c < param_1) {
      param_1 = DAT_ram_4009281c;
    }
    FUN_ram_400231fe(param_2,param_3);
    iVar1 = FUN_ram_400231b0(param_1,param_2,param_3);
    if (iVar1 == 0) {
      switch(param_2) {
      case 1:
        iVar1 = FUN_ram_4000ba90();
        break;
      case 2:
        iVar1 = FUN_ram_4000cc96();
        break;
      case 3:
        iVar1 = FUN_ram_4000cd46();
        break;
      case 4:
        iVar1 = FUN_ram_4000bf6a();
        break;
      case 5:
        iVar1 = FUN_ram_4000c4f8();
        break;
      case 6:
        iVar1 = FUN_ram_4000cddc();
        break;
      case 7:
        iVar1 = FUN_ram_4000c8dc();
        break;
      case 8:
        iVar1 = FUN_ram_4000cbd2();
        break;
      case 9:
        iVar1 = FUN_ram_4000ca58(param_1,param_3);
        break;
      default:
        iVar1 = FUN_ram_4000bdee(param_1,param_3);
      }
      if (iVar1 != 0) {
        FUN_ram_400231b0(in_register_00000100,param_2,param_3);
        return iVar1;
      }
      FUN_ram_4002322e(param_2,param_3);
      return 0;
    }
  }
  return -1;
}


/* NanoCore 1.10, address 0x400234a2.
 * REA evidence: ev_f8ff435592821d0685cfdcc827de5fe679c6421b0c6e2c717c41eb0d9cd49cb1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400234a2(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uStack_34;
  undefined1 local_30 [8];
  undefined1 auStack_28 [20];
  
  uStack_34 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (iVar2 = FUN_ram_40022d0e(), iVar2 == 0)) {
    iVar2 = thunk_FUN_ram_40014772();
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = FUN_ram_40022cde(local_30,8,&uStack_34);
    if ((iVar2 == 0) && (7 < uStack_34)) {
      iVar2 = 0;
      do {
        uVar1 = FUN_ram_40023230(local_30[iVar2]);
        auStack_28[iVar2] = uVar1;
        iVar2 = iVar2 + 1;
      } while (iVar2 != 8);
      iVar2 = FUN_ram_4000ce94(auStack_28,8);
      if (iVar2 != 0) {
        return iVar2;
      }
      FUN_ram_400147c0();
      return 0;
    }
  }
  return -1;
}


/* NanoCore 1.10, address 0x40023514.
 * REA evidence: ev_80be92b3e397bba95bb801a9d77e4908dd1f53934756dec48e0a7f6e2230dd7a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40023552) */
/* WARNING: Removing unreachable block (ram,0x40023558) */
/* WARNING: Removing unreachable block (ram,0x40023562) */
/* WARNING: Removing unreachable block (ram,0x40023570) */

undefined4 FUN_ram_40023514(int param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  if (((param_1 != 0) && (*(code **)(param_1 + 0x10) != (code *)0x0)) && (param_2 != 0)) {
    (**(code **)(param_1 + 0x10))(*param_4,param_2,param_3);
    return 0;
  }
  return 0;
}


/* NanoCore 1.10, address 0x40023576.
 * REA evidence: ev_1fc26262bba4ebf3392dabd67c7e60d6645013a88b8fa5541c749ae7dd12b98b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400235b8) */
/* WARNING: Removing unreachable block (ram,0x400235be) */
/* WARNING: Removing unreachable block (ram,0x400235e0) */
/* WARNING: Removing unreachable block (ram,0x400235c8) */
/* WARNING: Removing unreachable block (ram,0x400235d6) */
/* WARNING: Removing unreachable block (ram,0x400235da) */

undefined4 FUN_ram_40023576(void)

{
  return 0;
}


/* NanoCore 1.10, address 0x400235e6.
 * REA evidence: ev_29147cdc635e33b5615c5911707f87f5abe8191edcd34284d2d437c19b7127e3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400235e6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = FUN_ram_40023302(param_2,param_4);
  if (iVar3 == 0) {
    (**(code **)(param_1 + 4))(param_3,param_4);
    uVar4 = FUN_ram_400262d0(param_2,param_4,1);
    if (0xc < uVar4) {
      uVar4 = 0xc;
    }
    for (uVar1 = 0; (uVar4 & 0xff) != uVar1; uVar1 = uVar1 + 1 & 0xff) {
      iVar3 = FUN_ram_40026450(param_2,param_4,uVar1,1);
      if (iVar3 == 0xff) {
        return;
      }
      iVar3 = FUN_ram_400233ba(*(undefined8 *)(param_5 + iVar3 * 4),param_2,iVar3);
      if (iVar3 != 0) {
        return;
      }
    }
    iVar3 = 0;
    do {
      iVar2 = iVar3 + 1;
      (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_5 + iVar3 * 4),param_3,iVar3);
      iVar3 = iVar2;
    } while (iVar2 != 0xc);
  }
  return;
}


/* NanoCore 1.10, address 0x40023692.
 * REA evidence: ev_c0532538e135c45eeaaef6c1e8a83301d36bf4c4f89fde91443b206fd2e48c59
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40023692(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 8) {
    uVar1 = FUN_ram_40024ea8();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.10, address 0x400236a0.
 * REA evidence: ev_bef20f8f6a379d574a87ecffa0274b94087c7400cc69f0ff917a357cf1746a24
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400236a0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_40023692(param_2);
  if (((param_1 != (undefined4 *)0x0) && (iVar1 != 0)) && ((code *)*param_1 != (code *)0x0)) {
    uVar2 = (*(code *)*param_1)();
    uVar2 = FUN_ram_400262d0(param_2,uVar2,1);
    return uVar2;
  }
  return 0;
}


/* NanoCore 1.10, address 0x400236da.
 * REA evidence: ev_c9556df6400a6e5b6437572496a67ae904aa14445c0588a8d28a4bd4b43fd0ac
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_400236da(int *param_1,undefined1 *param_2,uint param_3,undefined1 *param_4,uint param_5,
                undefined4 *param_6,uint *param_7,undefined1 *param_8)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 in_register_00000100;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  code *pcVar14;
  uint *puVar15;
  undefined8 uVar16;
  undefined1 local_ac [12];
  uint local_a0 [12];
  byte local_70;
  undefined7 uStack_6f;
  
  if (param_8 == (undefined1 *)0x0) {
    return 0;
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
  }
  if (param_7 != (uint *)0x0) {
    *param_7 = 0;
  }
  if ((((param_1 == (int *)0x0) || (param_2 == (undefined1 *)0x0)) || (param_3 == 0)) ||
     ((param_4 == (undefined1 *)0x0 || (param_5 < 0x10)))) {
    uVar4 = 1;
LAB_ram_40023c7a:
    *param_8 = uVar4;
    return 1;
  }
  uVar4 = *param_2;
  *param_4 = uVar4;
  switch(uVar4) {
  case 0:
    if (param_3 != 1) {
LAB_ram_400236fe:
      *param_8 = 1;
      return 1;
    }
    param_4[1] = 4;
    param_4[2] = 0xff;
    param_4[3] = 3;
    param_4[4] = 8;
    *param_8 = 0;
    if (param_6 != (undefined4 *)0x0) {
      *param_6 = param_4;
    }
    uVar12 = 5;
    goto joined_r0x40023b30;
  case 1:
    if (param_3 == 7) {
      uVar4 = param_2[1];
      bVar3 = param_2[2];
      iVar9 = FUN_ram_40023692(uVar4);
      if (iVar9 != 0) {
        if ((((*param_1 == 0) || (param_1[4] == 0)) || (param_1[5] == 0)) || (param_1[6] == 0))
        goto LAB_ram_400238e0;
        iVar8 = FUN_ram_40023576(param_2 + 3,&local_70);
        if (iVar8 == 0) break;
        uVar6 = (*(code *)*param_1)(iVar9);
        uVar12 = FUN_ram_400262d0(uVar4,uVar6,1);
        if (bVar3 < uVar12) {
          iVar8 = FUN_ram_40026450(uVar4,uVar6,(uint)bVar3,1);
          if ((iVar8 == 0xff) ||
             (iVar5 = FUN_ram_40023514(param_1,iVar9,iVar8,&local_70), iVar5 == 0)) break;
          iVar5 = FUN_ram_400233ba(CONCAT71(uStack_6f,local_70),uVar4,iVar8);
          if (iVar5 == 0) {
            (*(code *)param_1[6])(CONCAT71(uStack_6f,local_70),iVar9,iVar8);
            (*(code *)param_1[5])(iVar9,iVar8);
            param_4[1] = uVar4;
            param_4[2] = bVar3;
            param_4[3] = (char)in_register_00000100;
            param_4[4] = (char)((uint)in_register_00000100 >> 8);
            param_4[5] = (char)((uint)in_register_00000100 >> 0x10);
            param_4[6] = (char)((uint)in_register_00000100 >> 0x18);
            *param_8 = 0;
            if (param_6 != (undefined4 *)0x0) {
              *param_6 = param_4;
            }
            uVar12 = 7;
            goto joined_r0x40023b30;
          }
        }
      }
      goto LAB_ram_400237be;
    }
    break;
  case 2:
    if (param_3 == 3) {
      uVar12 = 0;
    }
    else if (((param_3 < 4) || (uVar12 = (uint)(byte)param_2[3], (uVar12 + 1) * 4 != param_3)) ||
            (0xc < uVar12)) break;
    uVar4 = param_2[1];
    uVar1 = param_2[2];
    iVar9 = FUN_ram_40023692(uVar4);
    if (iVar9 != 0) {
      if (((*param_1 == 0) || (param_1[1] == 0)) ||
         ((param_1[4] == 0 || ((param_1[5] == 0 || (param_1[6] == 0)))))) goto LAB_ram_400238e0;
      uVar6 = FUN_ram_40024f3e(uVar4,uVar1);
      uVar13 = FUN_ram_400262d0(uVar4,uVar6,1);
      if (uVar12 <= uVar13) {
        iVar8 = 0;
        uVar7 = (*(code *)*param_1)(iVar9);
        pbVar10 = &local_70;
        do {
          uVar16 = (*(code *)param_1[5])(iVar9,iVar8,(code *)param_1[5]);
          iVar8 = iVar8 + 1;
          *(undefined8 *)pbVar10 = uVar16;
          pbVar10 = pbVar10 + 4;
        } while (iVar8 != 0xc);
        puVar15 = local_a0;
        uVar13 = 0;
        puVar11 = puVar15;
        do {
          param_2 = param_2 + 4;
          if (uVar12 <= (uVar13 & 0xff)) {
            iVar8 = FUN_ram_40023302(uVar4,uVar6);
            if (iVar8 != 0) goto LAB_ram_400237be;
            (*(code *)param_1[1])(iVar9,uVar6);
            uVar13 = 0;
            goto LAB_ram_4002398c;
          }
          iVar8 = FUN_ram_40026450(uVar4,uVar6,uVar13 & 0xff,1);
          local_ac[uVar13] = (char)iVar8;
          if (iVar8 == 0xff) break;
          uVar13 = uVar13 + 1;
          iVar8 = FUN_ram_40023576(param_2,puVar11);
          puVar11 = puVar11 + 1;
        } while (iVar8 != 0);
        break;
      }
    }
    goto LAB_ram_400237be;
  case 3:
    if (param_3 != 3) goto LAB_ram_400236fe;
    uVar4 = param_2[1];
    cVar2 = param_2[2];
    iVar9 = FUN_ram_40023692(uVar4);
    if (iVar9 != 0) {
      if ((param_1[2] == 0) || (param_1[3] == 0)) goto LAB_ram_400238e0;
      iVar8 = FUN_ram_40023248(uVar4);
      if (iVar8 == 0) {
        (*(code *)param_1[3])(iVar9,cVar2 != '\0');
        param_4[1] = uVar4;
        uVar4 = (*(code *)param_1[2])(iVar9);
        param_4[2] = uVar4;
        goto LAB_ram_400239aa;
      }
    }
LAB_ram_400237be:
    uVar4 = 3;
    goto LAB_ram_400237c0;
  case 4:
    if (param_3 != 2) goto LAB_ram_400236fe;
    if ((param_1[7] != 0) && ((code *)param_1[8] != (code *)0x0)) {
      bVar3 = param_2[1];
      if (100 < bVar3) {
        bVar3 = 100;
      }
      (*(code *)param_1[8])(bVar3);
      uVar4 = (*(code *)param_1[7])();
      param_4[1] = uVar4;
LAB_ram_40023aaa:
      *param_8 = 0;
      if (param_6 != (undefined4 *)0x0) {
        *param_6 = param_4;
      }
      if (param_7 == (uint *)0x0) {
        return 1;
      }
      uVar12 = 2;
      goto LAB_ram_4002379c;
    }
    goto LAB_ram_400238e0;
  case 5:
    local_a0[0] = 0;
    if (((param_3 != 1) && (param_2[1] == '\b')) && (param_3 == 10)) {
      if (param_1[9] != 0) {
        iVar9 = FUN_ram_400234a2(param_2 + 2,8);
        if (iVar9 == 0) {
          (*(code *)param_1[9])(param_2 + 2,8);
          iVar9 = FUN_ram_40022cde(&local_70,8,local_a0);
          if ((iVar9 == 0) && (7 < local_a0[0])) {
            FUN_ram_40022dda(&local_70,8);
            param_4[1] = 8;
            FUN_ram_4000305c(param_4 + 2,&local_70,8);
            *param_8 = 0;
            if (param_6 != (undefined4 *)0x0) {
              *param_6 = param_4;
            }
            uVar12 = 10;
            goto joined_r0x40023b30;
          }
        }
        goto LAB_ram_400237be;
      }
      goto LAB_ram_400238e0;
    }
    break;
  case 6:
    if (param_3 != 2) goto LAB_ram_400236fe;
    if (((code *)param_1[10] != (code *)0x0) && (param_1[0xb] != 0)) {
      uVar12 = (uint)(byte)param_2[1];
      iVar9 = (*(code *)param_1[10])(uVar12);
      if (iVar9 == 0) {
        pcVar14 = (code *)param_1[0xb];
LAB_ram_40023b58:
        uVar13 = (*pcVar14)();
        if (uVar12 == uVar13) {
          param_4[1] = (char)uVar12;
          goto LAB_ram_40023aaa;
        }
      }
      goto LAB_ram_400237be;
    }
    goto LAB_ram_400238e0;
  case 7:
    if (param_3 != 2) goto LAB_ram_400236fe;
    if (((code *)param_1[0xc] != (code *)0x0) && (param_1[0xd] != 0)) {
      uVar12 = (uint)(byte)param_2[1];
      iVar9 = (*(code *)param_1[0xc])(uVar12);
      if (iVar9 == 0) {
        pcVar14 = (code *)param_1[0xd];
        goto LAB_ram_40023b58;
      }
      goto LAB_ram_400237be;
    }
LAB_ram_400238e0:
    uVar4 = 0x7e;
    goto LAB_ram_400237c0;
  case 8:
    if (param_3 != 1) {
      pcVar14 = (code *)param_1[0xe];
      if ((pcVar14 == (code *)0x0) || (param_1[0xf] == 0)) goto LAB_ram_400238e0;
      uVar12 = (uint)(byte)param_2[1];
      if ((uVar12 < 0x11) && ((uVar12 + 2 == param_3 && (0x11 < param_5)))) {
        if (uVar12 != 0) {
          FUN_ram_4000305c(&local_70,param_2 + 2,uVar12);
        }
        (&local_70)[uVar12] = 0;
        (*pcVar14)(&local_70);
        local_70 = 0;
        (*(code *)param_1[0xf])(&local_70,0x11);
        uVar12 = 0;
        do {
          uVar13 = uVar12 & 0xff;
          if ((&local_70)[uVar12] == 0) goto LAB_ram_40023bec;
          uVar12 = uVar12 + 1;
        } while (uVar12 != 0x10);
        uVar13 = 0x10;
LAB_ram_40023bec:
        param_4[1] = (char)uVar13;
        if (uVar13 != 0) {
          FUN_ram_4000305c(param_4 + 2,&local_70,uVar13);
        }
        *param_8 = 0;
        if (param_6 != (undefined4 *)0x0) {
          *param_6 = param_4;
        }
        if (param_7 == (uint *)0x0) {
          return 1;
        }
        *param_7 = uVar13 + 2 & 0xff;
        return 1;
      }
    }
    break;
  case 9:
    if (param_3 == 2) {
      if ((code *)param_1[0x10] != (code *)0x0) {
        bVar3 = param_2[1];
        if ((bVar3 < 0x40) && (iVar9 = (*(code *)param_1[0x10])(bVar3), iVar9 == 0)) {
          local_70 = bVar3;
          if (((code *)param_1[0x11] != (code *)0x0) &&
             ((iVar9 = (*(code *)param_1[0x11])(&local_70), iVar9 != 0 || (0x3f < local_70)))) {
            local_70 = bVar3;
          }
          FUN_ram_40022dc0(local_70);
          param_4[1] = local_70;
          goto LAB_ram_40023aaa;
        }
        goto LAB_ram_400237be;
      }
      goto LAB_ram_400238e0;
    }
    break;
  default:
    uVar4 = 0x7e;
    goto LAB_ram_40023c7a;
  }
LAB_ram_400237a8:
  uVar4 = 1;
LAB_ram_400237c0:
  *param_8 = uVar4;
  return 1;
  while( true ) {
    iVar8 = FUN_ram_40023514(param_1,iVar9,local_ac[uVar13]);
    uVar13 = uVar13 + 1;
    if (iVar8 == 0) break;
LAB_ram_4002398c:
    if (uVar12 <= (uVar13 & 0xff)) {
      uVar13 = 0;
      goto LAB_ram_4002399a;
    }
  }
  FUN_ram_400235e6(param_1,uVar4,iVar9,uVar7,&local_70);
  goto LAB_ram_400237a8;
LAB_ram_4002399a:
  if (uVar12 <= (uVar13 & 0xff)) goto code_r0x400239a2;
  uVar1 = local_ac[uVar13];
  iVar8 = FUN_ram_400233ba(*puVar15,uVar4);
  if (iVar8 != 0) {
    FUN_ram_400235e6(param_1,uVar4,iVar9,uVar7,&local_70);
    goto LAB_ram_400237be;
  }
  uVar13 = uVar13 + 1;
  (*(code *)param_1[6])(*puVar15,iVar9,uVar1);
  puVar15 = puVar15 + 1;
  goto LAB_ram_4002399a;
code_r0x400239a2:
  param_4[1] = uVar4;
  param_4[2] = (char)uVar6;
LAB_ram_400239aa:
  *param_8 = 0;
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = param_4;
  }
  uVar12 = 3;
joined_r0x40023b30:
  if (param_7 == (uint *)0x0) {
    return 1;
  }
LAB_ram_4002379c:
  *param_7 = uVar12;
  return 1;
}


/* NanoCore 1.10, address 0x40023c86.
 * REA evidence: ev_c4bffb17ae3514ca3ab4e6b273660e0a23936408fbaf90ad68c2ed6593eac96c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40023c86(void)

{
  DAT_ram_30046790 = 0xff;
  _DAT_ram_3006a7a8 = 0;
  return;
}


/* NanoCore 1.10, address 0x40023c9a.
 * REA evidence: ev_16523aa5387e0b1c092a999ada4a1628c46e6ac535c360638bcd353841f5d281
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40023c9a(uint param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 < 3) {
    DAT_ram_30046790 = (undefined1)param_1;
    iVar1 = FUN_ram_400042fa();
    iVar2 = FUN_ram_40004362(5000);
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    _DAT_ram_3006a7a8 = iVar2 + iVar1;
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40023cd6.
 * REA evidence: ev_17c446da2e5e15ce997b02f495a5e0222efc72d91f7a1eeea92d57200287c09e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_40023cd6(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _DAT_ram_3006a7a8;
  if (DAT_ram_30046790 != -1) {
    iVar2 = FUN_ram_400042fa();
    return 0 < iVar1 - iVar2;
  }
  return false;
}


/* NanoCore 1.10, address 0x40023d0c.
 * REA evidence: ev_5d59cfcd459f1dea6390a6fda9a2f21dcb1fef8d94535353f20f19a0158e4207
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40023d0c(void)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = FUN_ram_40023cd6();
  uVar2 = 0xff;
  if (iVar1 != 0) {
    uVar2 = DAT_ram_30046790;
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x40023d2a.
 * REA evidence: ev_83c9cf8ff36cc8b83e38eb533c8bf64ed59ff2489db5e861d0db02635e84f7ea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40023d2a(void)

{
  return 5000;
}


/* NanoCore 1.10, address 0x40023d32.
 * REA evidence: ev_c0c2cd7dfea57c6cfcb082a35dc21802ec62017a59437f836b268f2fa6d4115b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40023d32(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = FUN_ram_40023d0c();
  if (uVar1 != 0xff) {
    if (uVar1 == 1) {
      if (param_2 != 0) {
        return 1;
      }
    }
    else if ((uVar1 & 0xfd) == 0) {
      if (param_1 != 0) {
        return uVar1;
      }
      return 0xff;
    }
  }
  return -(param_1 ^ 1) & 0xff;
}


/* NanoCore 1.10, address 0x40023d7e.
 * REA evidence: ev_8344b42a65919f96f5c33f9e6e05bde597d08be83158d0fd6196a5fd8aac4767
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40023d7e(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5)

{
  undefined1 uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  uVar3 = _DAT_ram_3006a7ca;
  uVar2 = _DAT_ram_3006a7c8;
  if (param_1 != (undefined4 *)0x0) {
    uVar8 = (uint)_DAT_ram_3006a7ca;
    uVar9 = 4;
    if (uVar8 != 0) {
      uVar9 = uVar8;
    }
    uVar7 = 4;
    if (_DAT_ram_3006a7c8 != 0) {
      uVar7 = (uint)_DAT_ram_3006a7c8;
    }
    uVar6 = 0x3c0;
    if (uVar9 < 0xf01) {
      if (uVar9 == 0) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = 0xf00 / uVar9;
      }
    }
    uVar9 = 0x3c0;
    if ((uVar8 - 1 & 0xffff) < 0xf00) {
      if (uVar8 == 0) {
        uVar9 = 0xffffffff;
      }
      else {
        uVar9 = 0xf00 / uVar8;
      }
    }
    uVar10 = (ulonglong)_DAT_ram_3006a7d0;
    *param_1 = _DAT_ram_3006a7cc;
    uVar4 = _DAT_ram_3006a7e4;
    uVar5 = _DAT_ram_3006a7e0;
    *(undefined1 *)(param_1 + 6) = DAT_ram_3006a7c1;
    uVar1 = DAT_ram_3006a7c2;
    param_1[2] = uVar5;
    param_1[3] = uVar4;
    *(undefined1 *)((int)param_1 + 0x19) = uVar1;
    uVar1 = DAT_ram_3006a7c3;
    param_1[4] = param_2;
    param_1[5] = param_3;
    *(undefined1 *)((int)param_1 + 0x1a) = uVar1;
    uVar1 = DAT_ram_3006a7c4;
    *(ulonglong *)(param_1 + 8) = uVar10;
    *(ushort *)(param_1 + 9) = uVar2;
    *(undefined1 *)((int)param_1 + 0x1b) = uVar1;
    uVar1 = DAT_ram_3006a7c5;
    *(ushort *)((int)param_1 + 0x26) = uVar3;
    param_1[0xe] = param_4;
    *(undefined1 *)(param_1 + 7) = uVar1;
    uVar4 = _DAT_ram_3006a7ec;
    uVar5 = _DAT_ram_3006a7e8;
    param_1[10] = 0x3c0;
    param_1[0xc] = uVar5;
    param_1[0xd] = uVar4;
    param_1[0xf] = param_5;
    uVar8 = FUN_ram_40003f50(uVar5,uVar4,uVar7 * uVar6,0);
    if (uVar9 == 0) {
      uVar9 = 0xffffffff;
    }
    else {
      uVar9 = uVar8 / uVar9;
    }
    param_1[0x10] = uVar8;
    uVar5 = FUN_ram_40003bac(uVar5,uVar4,uVar7 * uVar6,0);
    param_1[0x12] = uVar5;
    param_1[0x11] = uVar9;
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40023e8e.
 * REA evidence: ev_4401329235a82da0abc3019d45da97b05d2158f0038f9085813853570fd395b4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40023e8e(void)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (_DAT_ram_3006a7ec < 0x28) {
    uVar1 = FUN_ram_40003bac(_DAT_ram_3006a7e8,_DAT_ram_3006a7ec,0x28,0);
  }
  _DAT_ram_3006a7fc = uVar1;
  return;
}


/* NanoCore 1.10, address 0x40023ec0.
 * REA evidence: ev_2d4fdf68b93290ea95d6390e328c32dea3acf1f854d5c4674fb40ece32233ca4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40023ec0(void)

{
  uRam3006a7dc = _DAT_ram_3006a7d8;
  _DAT_ram_3006a7f0 = _DAT_ram_3006a7e8;
  _DAT_ram_3006a7f4 = _DAT_ram_3006a7ec;
  _DAT_ram_3006a7d8 = _DAT_ram_3006a7d4;
  return;
}


/* NanoCore 1.10, address 0x40023ed6.
 * REA evidence: ev_3f03c77d2b0ff237a24ee09aacce6ae383af186c1a963cd9b92d8da446e3a903
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40023ed6(void)

{
  DAT_ram_3006ad04 = 0;
  _DAT_ram_3006ad08 = 0;
  _DAT_ram_3006ad0c = 0;
  return;
}


/* NanoCore 1.10, address 0x40023eec.
 * REA evidence: ev_1c607460460b7ae05062dac43049fcdec7dfd38f517f21043cb5d56fd36c7d01
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40023eec(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  for (uVar1 = 0; uVar1 < _DAT_ram_3006ad02; uVar1 = uVar1 + 1 & 0xffff) {
    if (((&DAT_ram_3006a802)[uVar1 * 5] == '\0') || ((&DAT_ram_3006a801)[uVar1 * 5] == -4)) {
      if (uVar1 != uVar2) {
        FUN_ram_4000305c(&DAT_ram_3006a801 + uVar2 * 5,&DAT_ram_3006a801 + uVar1 * 5,5);
      }
      uVar2 = uVar2 + 1 & 0xffff;
    }
  }
  _DAT_ram_3006ad02 = (short)uVar2;
  return;
}


/* NanoCore 1.10, address 0x40023f68.
 * REA evidence: ev_d00746c441a0038f99547fdb94c54cf67c3043112cebb860177f79c8465983b8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40023f68(char param_1)

{
  if (DAT_ram_3006a7c4 != param_1) {
    if ((DAT_ram_3006a7c4 == '\0') && (DAT_ram_3006a7c1 != '\0')) {
      FUN_ram_40023e8e();
    }
    else {
      _DAT_ram_3006a7fc = 0;
    }
  }
  DAT_ram_3006a7c4 = param_1;
  DAT_ram_3006a7c2 = 1;
  return;
}


/* NanoCore 1.10, address 0x40023fae.
 * REA evidence: ev_3e7f81cf312b9311af4d7f012939802eca4632133db8d7383080e00772c03ad8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_ram_40023fae(undefined8 param_1,uint param_2,uint param_3)

{
  if (((_DAT_ram_3006a7b0 != param_2) || (_DAT_ram_3006a7b4 != param_3)) ||
     ((float)_DAT_ram_3006a7ac != (float)param_1)) {
    _DAT_ram_3006a7b8 =
         (ulonglong)
         (uint)(((float)param_2 * (float)param_1 * DAT_ram_400937ac) /
               ((float)param_3 * DAT_ram_400936e0));
    _DAT_ram_3006a7ac = param_1;
    _DAT_ram_3006a7b4 = param_3;
  }
  return _DAT_ram_3006a7b8;
}


