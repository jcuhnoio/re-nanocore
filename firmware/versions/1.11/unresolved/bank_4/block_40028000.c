/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40028000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40028010.
 * REA evidence: ev_7b2221d5cb849942d98a5db2526595cffd13cfec683a1c713a05af4effcc2415
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40028010(char *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  
  if (param_1 == (char *)0x0) {
    return;
  }
  iVar1 = FUN_ram_400042ea();
  iVar4 = *(int *)(param_1 + 8);
  iVar2 = FUN_ram_40004352(300);
  if (*param_1 != '\0') {
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    if ((iVar1 - iVar4) - iVar2 < 0) goto LAB_ram_4002804e;
  }
  *(int *)(param_1 + 4) = iVar1;
LAB_ram_4002804e:
  *param_1 = '\x01';
  cVar3 = '\0';
  if ((-1 < param_2) && (cVar3 = 'd', param_2 < 0x65)) {
    cVar3 = (char)param_2;
  }
  param_1[1] = cVar3;
  iVar2 = FUN_ram_40004352(700);
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  *(int *)(param_1 + 8) = iVar2 + iVar1;
  return;
}


/* NanoCore 1.11, address 0x4002808e.
 * REA evidence: ev_a7e99c9e460174f9e5ea055d5c1972e02c01651e6dc36a928aa7b9247614bffa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002808e(undefined1 *param_1)

{
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = 0;
  }
  return;
}


/* NanoCore 1.11, address 0x40028096.
 * REA evidence: ev_92bc0abdd330663d7b5f5de32d643e939a4640fc42ca0cbb5e04fe9991a47d2d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40028096(char *param_1,undefined1 *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  int iVar5;
  char cVar6;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    iVar2 = FUN_ram_400042ea();
    uVar3 = FUN_ram_40004352(300);
    if (uVar3 == 0) {
      uVar3 = 1;
    }
    iVar5 = iVar2 - *(int *)(param_1 + 8);
    if ((int)(iVar5 - uVar3) < 0) {
      cVar6 = param_1[1];
      if (iVar5 < 0) {
        iVar5 = *(int *)(param_1 + 4);
        uVar3 = FUN_ram_40004352(300);
        iVar2 = iVar2 - iVar5;
        if (iVar2 < 1) {
          bVar1 = 0;
        }
        else {
          if (uVar3 == 0) {
            uVar3 = 1;
          }
          if (-1 < (int)(iVar2 - uVar3)) goto LAB_ram_40028148;
          if (uVar3 == 0) {
            bVar1 = 0xff;
          }
          else {
            bVar1 = (byte)((uint)(iVar2 * 0xff) / uVar3);
          }
        }
      }
      else if (iVar5 == 0) {
LAB_ram_40028148:
        bVar1 = 0xff;
      }
      else {
        if (uVar3 == 0) {
          bVar1 = 0xff;
        }
        else {
          bVar1 = (byte)((uint)(iVar5 * 0xff) / uVar3);
        }
        bVar1 = ~bVar1;
      }
      uVar4 = 1;
      goto LAB_ram_40028128;
    }
    *param_1 = '\0';
  }
  bVar1 = 0;
  cVar6 = 'd';
  uVar4 = 0;
LAB_ram_40028128:
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = uVar4;
    param_2[1] = cVar6;
    param_2[2] = bVar1;
  }
  return;
}


/* NanoCore 1.11, address 0x4002814e.
 * REA evidence: ev_76a95611e839bbb81a9a0eb52d73a32b5c59f0dcbcc1b54435ba6cffbb4907c0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002814e(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar1 = param_1 & 0xff;
    if (100 < param_1) {
      uVar1 = 100;
    }
    FUN_ram_400055da(param_2,param_3,&DAT_ram_40096af0,uVar1);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40028176.
 * REA evidence: ev_17ef6616a6b8860a00775adc263391beba4600ca18f6b6bc7a61dff5fce10da6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40028182) */

uint FUN_ram_40028176(int param_1,int param_2)

{
  return (param_1 * param_2 + 0x7fU) / 0xff & 0xff;
}


/* NanoCore 1.11, address 0x4002818c.
 * REA evidence: ev_fdf1ac0e2c6b676db92fc53b74fe355aa38bf539cbe2c494242889554373b915
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002818c(int param_1)

{
  if ((*(char *)(param_1 + 9) != '\0') && (DAT_ram_3006c42a != '\0')) {
    DAT_ram_3006c42a = DAT_ram_3006c42a + -1;
  }
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


/* NanoCore 1.11, address 0x400281c0.
 * REA evidence: ev_3e4c0592a2e3564135ac99cda41294d10e1cd4afaf0e0da7ee10ee943a40a753
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400281c0(undefined4 param_1,int param_2,int param_3,uint param_4,uint param_5,
                     uint param_6)

{
  thunk_FUN_ram_4002e176
            (param_1,param_3 << 7 | param_4,(param_5 & 0x7f) << 7 | param_6 & 0x7f,param_2 == 1);
  return;
}


/* NanoCore 1.11, address 0x400281ea.
 * REA evidence: ev_237953bcf64b8b997be53a2107ae81d8bb4bf5407357274ea01a20ff5d3613e2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400281ea(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0x10) {
    iVar1 = (uint)(param_1 == 1) * 0x180 + param_2 * 0x18;
    if (((*(char *)(iVar1 + 0x3006c129) != '\0') && (*(char *)(iVar1 + 0x3006c124) != '\0')) &&
       (*(char *)(iVar1 + 0x3006c125) != '\0')) {
      FUN_ram_400281c0(param_2 + 1U & 0xff,*(undefined4 *)(iVar1 + 0x3006c12c),
                       *(undefined1 *)(iVar1 + 0x3006c120),*(undefined1 *)(iVar1 + 0x3006c121),
                       *(undefined1 *)(iVar1 + 0x3006c128),0);
    }
    FUN_ram_4002818c(iVar1 + 0x3006c120);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40028254.
 * REA evidence: ev_a33ebff80df9d70fc1061da8ecd606cfa226a75e43072651f4a2c5b8dedb6258
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40028254(undefined4 param_1)

{
  char cVar1;
  char cVar2;
  
  cVar1 = '\0';
  do {
    cVar2 = cVar1 + '\x01';
    FUN_ram_400281ea(param_1,cVar1);
    cVar1 = cVar2;
  } while (cVar2 != '\x10');
  return;
}


/* NanoCore 1.11, address 0x4002827e.
 * REA evidence: ev_8196f83af3c4684d0057610a4a58def739befea96ea696cb2f9249ad72efacfc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002827e(void)

{
  DAT_ram_3006c42d = 0;
  FUN_ram_4000504c(0x3006c438,0,2);
  return;
}


/* NanoCore 1.11, address 0x40028296.
 * REA evidence: ev_29098a5b30b918817808c9a7e59ad6461ea57105651a2654d220f2280610d7e2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40028296(void)

{
  return 0;
}


/* NanoCore 1.11, address 0x4002829a.
 * REA evidence: ev_a96d6a12cf26fa639bf166e6358c89a668e9e6fe80d149bda07c3c4599a4ff0e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002829a(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_40028296();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 0x78;
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x40028918.
 * REA evidence: ev_f6e8f0bd80bd8a754a69c5c8dabee68eed0467d00138ae312eae4795d43cf7f3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40028918(void)

{
  if (DAT_ram_3006c0f4 != '\0') {
    FUN_ram_400048c4(0x3006c0f8);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40028a00.
 * REA evidence: ev_0643c2392dbd54522e8f4f3d9acc653c9b772e4653c1224567d67aae48ef7d6e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40028a00(void)

{
  _DAT_ram_3006cc3c = 0;
  _DAT_ram_3006cc3e = 0;
  DAT_ram_3006cc40 = 0;
  DAT_ram_3006c42d = 0;
  _DAT_ram_3006c434 = 0;
  _DAT_ram_3006c430 = 0;
  FUN_ram_4000504c(0x3006c438,0,2);
  FUN_ram_4000504c(0x3006c420,0,10);
  FUN_ram_4000504c(0x3006c120,0,0x300);
  DAT_ram_3006c42a = 0;
  return;
}


/* NanoCore 1.11, address 0x40028a74.
 * REA evidence: ev_87b3beca200bf6bb8cfd9d3ddf774a9e770ac7708eb87eb967c9eca4af76637d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40028a74(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_ram_3006c42a != '\0') {
    iVar3 = FUN_ram_400042ea();
    iVar2 = 0;
    while( true ) {
      uVar1 = 0;
      do {
        iVar4 = iVar2 * 0x180 + uVar1 * 0x18;
        if (*(char *)(iVar4 + 0x3006c129) != '\0') {
          if (*(int *)(iVar4 + 0x3006c134) <= iVar3 - *(int *)(iVar4 + 0x3006c130)) {
            FUN_ram_400281ea(iVar2,uVar1 & 0xff);
          }
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 != 0x10);
      if (iVar2 == 1) break;
      iVar2 = 1;
    }
  }
  FUN_ram_400248ba();
  return;
}


/* NanoCore 1.11, address 0x40028b04.
 * REA evidence: ev_14efdc02c6e6c4329cf87e63705426ac98eeaeb33676b891a112cbc6b9991697
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_40028b04(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return false;
  }
  FUN_ram_400002f4();
  iVar1 = 0;
  do {
    if (_DAT_ram_3006cc3c == _DAT_ram_3006cc3e) break;
    iVar1 = iVar1 + 1;
    *(undefined1 *)(param_1 + -1 + iVar1) = *(undefined1 *)(_DAT_ram_3006cc3c + 0x3006c43c);
    _DAT_ram_3006cc3c = _DAT_ram_3006cc3c + 1;
    if (0x7ff < _DAT_ram_3006cc3c) {
      _DAT_ram_3006cc3c = 0;
    }
  } while (param_2 != iVar1);
  FUN_ram_400002fa();
  if (iVar1 != 0) {
    nc_midi_parse_stream(1,param_1);
    FUN_ram_40028a74();
  }
  return iVar1 != 0;
}


/* NanoCore 1.11, address 0x40028bae.
 * REA evidence: ev_9492dab31d8906e4e0daec16c5c1a9614ae063f85bd525ff12207fa3f530bb63
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40028bae(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_90 [136];
  
  do {
    while( true ) {
      do {
        FUN_ram_40029028(2);
        iVar1 = FUN_ram_40028b04(auStack_90,0x80);
      } while (iVar1 != 0);
      uVar3 = FUN_ram_4002aa7e(auStack_90,0x80);
      if ((int)uVar3 == 0) break;
      nc_midi_parse_stream(0,auStack_90);
      FUN_ram_40028a74();
    }
    FUN_ram_40028a74(0,(int)((ulonglong)uVar3 >> 0x20),0);
    uVar2 = FUN_ram_40004352(0x14);
    FUN_ram_40004822(0x3006c0f8,uVar2);
  } while( true );
}


/* NanoCore 1.11, address 0x40028bfc.
 * REA evidence: ev_98d28eba7c3eec4735b15ee3adca4be118f24ef7ae371e67c5ddf275b2313ee5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40028bfc(void)

{
  int iVar1;
  
  if (DAT_ram_3006c42c != '\0') {
    return -(uint)(DAT_ram_3006c42b == '\0');
  }
  DAT_ram_3006c42c = 1;
  DAT_ram_3006c42b = '\0';
  FUN_ram_40028a00();
  iVar1 = FUN_ram_400047a4(0x3006c0f8,s_midiev_ram_40096af4,0,0);
  if (iVar1 == 0) {
    DAT_ram_3006c0f4 = 1;
    FUN_ram_40014172();
    FUN_ram_40013ec4(&LAB_ram_4002aaf6);
    FUN_ram_40024610(0);
    FUN_ram_40012e7e();
    if (_DAT_ram_3006c0f0 == 0) {
      _DAT_ram_3006c0f0 = FUN_ram_4003eee0(0x2000,0x20,1,FUN_ram_4003ef74);
    }
    if (_DAT_ram_3006c0f0 != 0) {
      iVar1 = FUN_ram_4000642e(0x3006c060,s_midi_rx_ram_40096afc,FUN_ram_40028bae,0,
                               _DAT_ram_3006c0f0,0x2000,0x12,10);
      if (iVar1 == 0) {
        iVar1 = FUN_ram_40006632(0x3006c060);
        if (iVar1 == 0) {
          DAT_ram_3006c42b = '\x01';
        }
        else {
          FUN_ram_4000646e(0x3006c060);
          FUN_ram_4003ef2a(_DAT_ram_3006c0f0,1,FUN_ram_4003efae);
          _DAT_ram_3006c0f0 = 0;
          DAT_ram_3006cc40 = 1;
        }
        return -(uint)(DAT_ram_3006c42b == '\0');
      }
      FUN_ram_4003ef2a(_DAT_ram_3006c0f0,1,FUN_ram_4003efae);
      _DAT_ram_3006c0f0 = 0;
    }
  }
  DAT_ram_3006cc40 = 1;
  return -1;
}


/* NanoCore 1.11, address 0x40028c1c.
 * REA evidence: ev_adad0a08bd921e47bc91acd0c2d2301c2d09f39c3c4bda2b5bf21e88896aebbf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40028c1c(void)

{
  int iVar1;
  undefined1 *in_a5;
  
  *in_a5 = 1;
  DAT_ram_3006c42b = '\0';
  FUN_ram_40028a00();
  iVar1 = FUN_ram_400047a4(0x3006c0f8,s_midiev_ram_40096af4,0,0);
  if (iVar1 == 0) {
    DAT_ram_3006c0f4 = 1;
    FUN_ram_40014172();
    FUN_ram_40013ec4(&LAB_ram_4002aaf6);
    FUN_ram_40024610(0);
    FUN_ram_40012e7e();
    if (_DAT_ram_3006c0f0 == 0) {
      _DAT_ram_3006c0f0 = FUN_ram_4003eee0(0x2000,0x20,1,FUN_ram_4003ef74);
    }
    if (_DAT_ram_3006c0f0 != 0) {
      iVar1 = FUN_ram_4000642e(0x3006c060,s_midi_rx_ram_40096afc,FUN_ram_40028bae,0,
                               _DAT_ram_3006c0f0,0x2000,0x12,10);
      if (iVar1 == 0) {
        iVar1 = FUN_ram_40006632(0x3006c060);
        if (iVar1 == 0) {
          DAT_ram_3006c42b = '\x01';
        }
        else {
          FUN_ram_4000646e(0x3006c060);
          FUN_ram_4003ef2a(_DAT_ram_3006c0f0,1,FUN_ram_4003efae);
          _DAT_ram_3006c0f0 = 0;
          DAT_ram_3006cc40 = 1;
        }
        return -(uint)(DAT_ram_3006c42b == '\0');
      }
      FUN_ram_4003ef2a(_DAT_ram_3006c0f0,1,FUN_ram_4003efae);
      _DAT_ram_3006c0f0 = 0;
    }
  }
  DAT_ram_3006cc40 = 1;
  return -1;
}


/* NanoCore 1.11, address 0x40028d48.
 * REA evidence: ev_10b8fbbbff504fe9c342794f69698181dd6a4597d4acd2c768c40a3cefae2db8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40028d48(uint param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((1 << (uVar1 & 0x1f) & param_1) != 0) {
      *(undefined4 *)(uVar1 * 4 + 0x3006cc48) = param_2;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 != 0x20);
  _DAT_ram_3006cc44 = _DAT_ram_3006cc44 | param_1;
  return;
}


/* NanoCore 1.11, address 0x40028d7a.
 * REA evidence: ev_c5181a8f7077fb3f97547f4d860b265d8dc8c7c86932d62cda7c7feea4d5e833
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40028d7a(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_400378d0(0xf);
  if ((iVar1 < 0) || (iVar1 = FUN_ram_4003888a(0x18), iVar1 < 0)) {
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_ram_400388ca(0x18);
    iVar1 = iVar1 >> 0x1f;
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x40028da4.
 * REA evidence: ev_febddb9eb88bd73d6ef6b8e4fcf577f4b05256247ae19967cfc4a7c20a6a2375
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40028da8) */

void FUN_ram_40028da4(uint param_1)

{
  uint local_20 [7];
  
  local_20[0] = param_1 / 1000;
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = local_20[0];
  FUN_ram_4003ea5a(0,local_20);
  FUN_ram_4003e9f6(0);
  FUN_ram_4003eb34(1,0);
  return;
}


/* NanoCore 1.11, address 0x40028dd4.
 * REA evidence: ev_e5537bfc3dacc40925eced0e0fcf19dbabcdbef51ed8ca8a67d7eefddc8db070
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40028dde) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40028dd4(void)

{
  if (_DAT_ram_3006cd58 == 0) {
    _DAT_ram_3006cd58 = 1;
  }
  FUN_ram_4003f100();
  FUN_ram_4003ec0e(0xc);
  FUN_ram_40028d7a();
  FUN_ram_40028da4(1000);
  FUN_ram_4003ff8a(50000);
  mstatus = mstatus & 0xfffffff7;
  FUN_ram_40028da4(0);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* NanoCore 1.11, address 0x40028e2c.
 * REA evidence: ev_837ac92b7656c8bb75b9aad10039a4c0c248d6289eb0f104e4f3809e00be9a87
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_40028e2c(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar2 = _DAT_ram_3006cd60;
  uVar1 = _DAT_ram_3006ccd0;
  uVar8 = 0;
  if (_DAT_ram_3006cd60 != 0) {
    uVar3 = ~(_DAT_ram_3006cd5c & _DAT_ram_3006cc44) & _DAT_ram_3006cd60;
    uVar4 = 0;
    uVar8 = uVar3;
    do {
      uVar9 = 1 << (uVar4 & 0x1f);
      if (((uVar2 & uVar9) != 0) && ((uVar3 & uVar9) == 0)) {
        iVar7 = *(int *)(uVar4 * 4 + 0x3006cc48);
        uVar5 = 30000;
        if ((uVar4 != 0) && ((uVar9 & 2) == 0)) {
          uVar5 = 5000;
        }
        iVar6 = FUN_ram_40004352(uVar5);
        if ((iVar6 == 0) || (iVar6 <= param_1 - iVar7)) {
          uVar8 = uVar8 | uVar9;
        }
        if ((uVar1 & uVar9) != 0) {
          iVar6 = *(int *)(uVar4 * 4 + 0x3006ccd4);
          iVar7 = FUN_ram_40004352(30000);
          if ((iVar7 == 0) || (iVar7 <= param_1 - iVar6)) {
            uVar8 = uVar8 | uVar9;
          }
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != 0x20);
  }
  return uVar8;
}


/* NanoCore 1.11, address 0x40028f22.
 * REA evidence: ev_dde3ef616452fb339bb01599b00b679fd3e9fa6eb2f6b480b72bbfc838066c2b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40028f22(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  do {
    if (_DAT_ram_3006cd58 == 0) {
      if (_DAT_ram_3006ccc8 == 0) {
        if ((_DAT_ram_3006cccc != 0) && (_DAT_ram_3006d1fc != 0)) {
          FUN_ram_400042ea();
          iVar1 = FUN_ram_40028e2c();
          if (iVar1 == 0) {
            iVar2 = FUN_ram_400042ea();
            iVar1 = _DAT_ram_3006cd54;
            iVar3 = FUN_ram_40004352(3000);
            if ((iVar3 == 0) || (iVar3 <= iVar2 - iVar1)) {
              FUN_ram_4003fd1c();
              FUN_ram_4003fd3c();
              FUN_ram_4003ecb8();
              _DAT_ram_3006ccc8 = 1;
              FUN_ram_4003e9f6(0);
              FUN_ram_4003eb78();
            }
          }
        }
      }
      else {
        FUN_ram_400042ea();
        uVar4 = FUN_ram_40028e2c();
        if (uVar4 == 0) {
          FUN_ram_4003e9f6();
          FUN_ram_4003eb78();
        }
        else if ((uVar4 & ~_DAT_ram_3006cd64) != 0) {
          _DAT_ram_3006cd64 = uVar4 & ~_DAT_ram_3006cd64 | _DAT_ram_3006cd64;
          FUN_ram_4003ec0e(0xc);
        }
      }
    }
    FUN_ram_400065c6(0xfa);
  } while( true );
}


