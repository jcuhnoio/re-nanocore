/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40025000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4002507a.
 * REA evidence: ev_8615421cb820c2dd0ff50dd995e5220f5463389cd370e54fd73c740ab7e52aea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002507a(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  float fVar2;
  
  fVar2 = (float)FUN_ram_40024e6e();
  uVar1 = FUN_ram_40024e92(fVar2 * DAT_ram_40094658);
  FUN_ram_400055da(param_1,param_2,&DAT_ram_40095178,uVar1);
  return;
}


/* NanoCore 1.11, address 0x400250b0.
 * REA evidence: ev_e49f20ee9922071664cd219b0835f3860fa54609a9e6cb7e645d04686ac681c4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400250be) */
/* WARNING: Removing unreachable block (ram,0x400250c2) */

void FUN_ram_400250b0(undefined4 param_1,undefined4 param_2,uint param_3,char *param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = ((int)param_3 >> 0x1f ^ param_3) - ((int)param_3 >> 0x1f);
  iVar2 = iVar3 / 10;
  iVar3 = iVar3 % 10;
  pcVar1 = s_PRE___ram_40096fa4 + 4;
  if (-1 < (int)param_3) {
    pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
  }
  if ((param_4 != (char *)0x0) && (*param_4 != '\0')) {
    FUN_ram_400055da(param_1,param_2,s__s_ld__ld__s_ram_400955bc,pcVar1,iVar2,iVar3);
    return;
  }
  FUN_ram_400055da(param_1,param_2,s__s_ld__ld_ram_4009517c,pcVar1,iVar2,iVar3);
  return;
}


/* NanoCore 1.11, address 0x400250fc.
 * REA evidence: ev_48ef3772f14b2591334f444c0ed447c2c446845e68bde5b6788ddea0a59660fc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4002510c) */
/* WARNING: Removing unreachable block (ram,0x40025110) */

void FUN_ram_400250fc(undefined4 param_1,undefined4 param_2,uint param_3,char *param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = ((int)param_3 >> 0x1f ^ param_3) - ((int)param_3 >> 0x1f);
  iVar2 = iVar3 / 100;
  iVar3 = iVar3 % 100;
  pcVar1 = s_PRE___ram_40096fa4 + 4;
  if (-1 < (int)param_3) {
    pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
  }
  if ((param_4 != (char *)0x0) && (*param_4 != '\0')) {
    FUN_ram_400055da(param_1,param_2,s__s_ld__02ld__s_ram_400955cc,pcVar1,iVar2,iVar3);
    return;
  }
  FUN_ram_400055da(param_1,param_2,s__s_ld__02ld_ram_40095188,pcVar1,iVar2,iVar3);
  return;
}


/* NanoCore 1.11, address 0x4002514a.
 * REA evidence: ev_e4f2375cb0a3bb93e76ddda4df8ef11490665fe85a16a314a089c96e2342e415
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

float FUN_ram_4002514a(undefined8 param_1,float param_2,float param_3)

{
  undefined4 uVar1;
  float fVar2;
  
  if ((0.0 < param_2) && (param_2 < param_3)) {
    uVar1 = FUN_ram_40024e6e();
    fVar2 = (float)FUN_ram_40000d44(param_3 / param_2,uVar1);
    param_2 = param_2 * fVar2;
  }
  return param_2;
}


/* NanoCore 1.11, address 0x4002518c.
 * REA evidence: ev_a25ba848e55036f1dcb58905f924cec7537a919bc5364935afdf41ad60f86da4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002518c(int *param_1,byte *param_2)

{
  if ((*param_1 == 8) && (*param_1 = 0, 1 < *param_2)) {
    *param_2 = 0;
  }
  return;
}


/* NanoCore 1.11, address 0x400251a8.
 * REA evidence: ev_f0beaf2f4b86a0402e01ddaf02d5a1a6e4d17c6d99cd58dc5ad2a2b5b2ffdbc1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char * FUN_ram_400251a8(uint param_1)

{
  if (param_1 < 10) {
    return (&PTR_DAT_ram_40095014_ram_40096200)[param_1];
  }
  return s_ep__02x_clear_halt_ram_40094730 + 0x14;
}


/* NanoCore 1.11, address 0x400251c6.
 * REA evidence: ev_1150b6d69e12d2fa3c022b870a0a5ab6cc97494b6660458694a3743aa10cd216
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400251c6(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar1 = 0;
    do {
      iVar2 = strcmp(param_1,(&PTR_DAT_ram_40095014_ram_40096200)[iVar1]);
      if (iVar2 == 0) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 10);
  }
  return 0xff;
}


/* NanoCore 1.11, address 0x40025208.
 * REA evidence: ev_1a85d6aa28b1faa79f352bf5f73f394afbcce86b2bb768eabb65ca845faf0199
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char * FUN_ram_40025208(uint param_1)

{
  if (param_1 < 10) {
    return (&PTR_DAT_ram_40095fd8_ram_40096228)[param_1];
  }
  return s_ep__02x_clear_halt_ram_40094730 + 0x14;
}


/* NanoCore 1.11, address 0x40025226.
 * REA evidence: ev_ba750f85148ebc3fbef5263b4dce5c5df7b1cf242d46377ae179037e69d7e25d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40025226(uint param_1)

{
  if (param_1 < 10) {
    return *(undefined1 *)((int)&DAT_ram_40096074 + param_1 + 4);
  }
  return 1;
}


/* NanoCore 1.11, address 0x4002523e.
 * REA evidence: ev_aeb5bb20280956c826964bba0604d5fa54930a109e22a9622c91d2e9f1bbcc75
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002523e(int param_1,uint param_2)

{
  uint uVar1;
  
  if (param_1 == 6) {
    if (param_2 < 8) {
      if (param_2 == 4) {
        param_2 = 2;
      }
    }
    else {
      param_2 = 6;
    }
  }
  else if (param_1 == 7) {
    if (2 < param_2) {
      param_2 = 2;
    }
    param_2 = param_2 & 0xff;
  }
  else {
    if (param_1 != 5) {
      uVar1 = FUN_ram_40025226();
      if ((uVar1 < 2) || (uVar1 <= param_2)) {
        param_2 = 0;
      }
      return param_2;
    }
    if ((((4 < param_2) && (param_2 != 10)) && (param_2 != 0xb)) &&
       ((param_2 != 0xc && (param_2 != 0x11)))) {
      param_2 = 0;
    }
  }
  return param_2;
}


/* NanoCore 1.11, address 0x40025294.
 * REA evidence: ev_950b63439caafbf9979e504fee572c9a5d65c33bd4e71fd80cbc54f097efaad0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40025294(undefined4 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_ram_40025226();
  if ((uVar1 < 2) || (uVar1 <= param_2)) {
    param_2 = 0;
  }
  return param_2;
}


/* NanoCore 1.11, address 0x400252b8.
 * REA evidence: ev_6079b1527f9585cb92d686baad1598e96f8a5c7fbe47f2f7c67cf19ed7094ae8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400252b8(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 5) {
    uVar1 = FUN_ram_40025226();
    return uVar1;
  }
  return 9;
}


/* NanoCore 1.11, address 0x400252c6.
 * REA evidence: ev_cdffdefea461bf20e413280f1c8c5945490e5263af96273dbec27f50f5a6b675
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_400252c6(int param_1,uint param_2)

{
  uint uVar1;
  
  if (param_1 != 5) {
    uVar1 = FUN_ram_4002523e();
    return uVar1;
  }
  if (param_2 < 9) {
    return (uint)(byte)(&DAT_ram_400961f4)[param_2];
  }
  return 0;
}


/* NanoCore 1.11, address 0x400252e8.
 * REA evidence: ev_9062e058a542fb20a3e59b8e2284971a36910d55f880dad7e2b8a8a32dca2f93
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_400252e8(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = FUN_ram_400252b8();
  uVar1 = 0;
  while( true ) {
    if (uVar1 == uVar2) {
      return 0xffffffff;
    }
    iVar3 = FUN_ram_400252c6(param_1,uVar1);
    if (iVar3 == param_2) break;
    uVar1 = uVar1 + 1 & 0xff;
  }
  return uVar1;
}


