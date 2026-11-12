/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40038000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40038000.
 * REA evidence: ev_cd562efc11fb83dcf8d91197b235e8c8d100f5c2847a49084d3b7db73ee18876
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40038000(void)

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


/* NanoCore 1.11, address 0x40038032.
 * REA evidence: ev_875fd035fab65121d2b98585ee81aaaa56f2efa2ca3e5a4637d94d92e12de1f9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40038032(uint param_1,int param_2,uint param_3,int *param_4,uint param_5,uint *param_6,
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
        if ((uVar6 <= uVar4) || (uVar8 <= uVar4)) goto LAB_ram_40038068;
        uVar5 = 2;
      }
      *param_7 = uVar5;
      goto LAB_ram_4003806c;
    }
  }
LAB_ram_40038068:
  *param_7 = 0;
LAB_ram_4003806c:
  *param_4 = uVar7 - 1;
  *param_6 = uVar1;
  return;
}


/* NanoCore 1.11, address 0x400380d0.
 * REA evidence: ev_822e8ee394a18f5e5d0a39c393eede1560d730ac52bfc173eab2411c15e0a278
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_400380d0(int param_1,int param_2,uint *param_3)

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
    FUN_ram_40038032(param_2,uVar1,*(byte *)(param_1 + 0xf) + 1,&iStack_18,
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


/* NanoCore 1.11, address 0x4003820e.
 * REA evidence: ev_b889416d88e97227c3a889314ceee511da2d2427b1da8ef596af07b452971b01
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003820e(int param_1,int param_2,int param_3)

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
    FUN_ram_40038032(param_2,param_3,*(byte *)(param_1 + 0xf) + 1,&iStack_18,
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


/* NanoCore 1.11, address 0x4003888a.
 * REA evidence: ev_31512177a0a8182ffaa2c2da18c00bcdaba5fc69497a810925589f825a3a9e8b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003888a(uint param_1)

{
  if (param_1 < 0x35) {
    fence();
    fence();
    *(uint *)(*(int *)(&DAT_ram_40098f6c + param_1 * 0xc) + 0x18020000) =
         ~*(uint *)(&DAT_ram_40098f70 + param_1 * 0xc) &
         *(uint *)(*(int *)(&DAT_ram_40098f6c + param_1 * 0xc) + 0x18020000);
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.11, address 0x400388ca.
 * REA evidence: ev_42194d26c76299ba0224ccc816d81cbffed99bbadf1d7730dd1901041051a2de
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400388ca(uint param_1)

{
  if (param_1 < 0x35) {
    fence();
    fence();
    *(uint *)(*(int *)(&DAT_ram_40098f6c + param_1 * 0xc) + 0x18020000) =
         *(uint *)(*(int *)(&DAT_ram_40098f6c + param_1 * 0xc) + 0x18020000) |
         *(uint *)(&DAT_ram_40098f70 + param_1 * 0xc);
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.11, address 0x40038906.
 * REA evidence: ev_c4f5f6475fba6b3b6a0cffb52e1e66caa476973ee036e3b95ab01e57b133bddd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40038906(uint *param_1,uint param_2,uint param_3)

{
  fence();
  fence();
  *param_1 = (param_3 ^ *param_1) & param_2 ^ *param_1;
  return;
}


/* NanoCore 1.11, address 0x4003891a.
 * REA evidence: ev_751a3fb1e813fb1335cc24fe31794f7abf892d5c63b745b7ad3f97f37aa67ebd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003891a(uint *param_1,uint param_2)

{
  fence();
  fence();
  *param_1 = param_2 | *param_1;
  return;
}


/* NanoCore 1.11, address 0x4003892a.
 * REA evidence: ev_2b29ed4855d8fb0514076a2dff3de81507b99cb594c8dedc5545fa6d0738ed08
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003892a(int param_1,uint param_2,int param_3)

{
  param_1 = param_1 + 0x100;
  FUN_ram_40038906(param_1,0xff00,(param_2 & 0xff) << 8);
  FUN_ram_4003891a(param_1,1);
  FUN_ram_40038906(param_1,0xff000000,param_3 << 0x18);
  FUN_ram_4003891a(param_1,0x10000);
  return;
}


/* NanoCore 1.11, address 0x40038974.
 * REA evidence: ev_3705dd91c4429a7c5661bc7e8e8cb669f6d78699f8c1690fda8a4c5e1b2d150d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40038974(int param_1,int param_2,uint param_3)

{
  fence();
  *(uint *)(param_1 + 0x10c) = param_2 << 8 | param_3;
  return;
}


/* NanoCore 1.11, address 0x40038984.
 * REA evidence: ev_31ae31c27a2df8a72a2aa3983ba11af7ed80584e675845f7be31675d607e270f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40038984(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  fence();
  *(undefined4 *)(param_1 + 0x104) = param_2;
  for (iVar2 = 0; iVar2 != param_3; iVar2 = iVar2 + 1) {
    fence();
    *(uint *)(param_1 + 0x108) = (uint)*(byte *)(param_4 + iVar2);
  }
  FUN_ram_40038974(param_1,iVar2,1);
  iVar2 = FUN_ram_4003fffe();
  do {
    fence();
    if ((*(uint *)(param_1 + 0x124) & 0x12) == 2) {
      return;
    }
    iVar1 = FUN_ram_4003fffe();
  } while (-1 < (iVar2 + 1000000) - iVar1);
  fence();
  return;
}


/* NanoCore 1.11, address 0x40038a00.
 * REA evidence: ev_110ee1e427a04b3c71d885bcadb3a7474a7c6d3d9c308183d1304a3dac75fffa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40038a00(int param_1,int param_2,int param_3,uint param_4)

{
  fence();
  *(uint *)(param_1 + 0x204) = param_3 << 8 | param_4 | param_2 << 0x10;
  return;
}


/* NanoCore 1.11, address 0x40038a14.
 * REA evidence: ev_00e8e234f02db04aa2551a8c6fa2dc3ac871a13bffaa4e054d67dbbb1af4993f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40038a14(int param_1,uint param_2,uint param_3,int param_4)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_1 + 0x234);
  FUN_ram_40038906(puVar1,0xff0000,(param_2 & 0xff) << 0x10);
  FUN_ram_40038906(puVar1,0xff00,(param_3 & 0xff) << 8);
  if (param_4 != 0) {
    FUN_ram_4003891a(puVar1,1);
    return;
  }
  fence();
  fence();
  *puVar1 = *puVar1 & 0xfffffffe;
  return;
}


/* NanoCore 1.11, address 0x40038a70.
 * REA evidence: ev_bf60eaf4e9d1599ff79689c1d53b468b9b11c25ba15e5d9e5c72a4674f8fd9d1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40038a70(int param_1,uint param_2,int param_3)

{
  param_1 = param_1 + 0x208;
  FUN_ram_40038906(param_1,0xff00,(param_2 & 0xff) << 8);
  FUN_ram_4003891a(param_1,1);
  FUN_ram_40038906(param_1,0xff000000,param_3 << 0x18);
  FUN_ram_4003891a(param_1,0x10000);
  return;
}


/* NanoCore 1.11, address 0x40038aba.
 * REA evidence: ev_bd9273a1e2392297dc2018eba0ca36eaf8dc4c2f15d2aae6eabee1fb239426a0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40038aba(int param_1,int param_2,uint param_3)

{
  fence();
  *(uint *)(param_1 + 0x214) = param_2 << 8 | param_3;
  return;
}


/* NanoCore 1.11, address 0x40038aca.
 * REA evidence: ev_ae021435b33ce89cd38d1f283e0f69ff0c95ad0801eea4d509ebb6ce1967861d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40038aca(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  fence();
  *(undefined4 *)(param_1 + 0x20c) = param_2;
  for (iVar2 = 0; iVar2 != param_3; iVar2 = iVar2 + 1) {
    fence();
    *(uint *)(param_1 + 0x210) = (uint)*(byte *)(param_4 + iVar2);
  }
  FUN_ram_40038aba(param_1,iVar2,1);
  iVar2 = FUN_ram_4003fffe();
  do {
    fence();
    if ((*(uint *)(param_1 + 0x22c) & 0x12) == 2) {
      return;
    }
    iVar1 = FUN_ram_4003fffe();
  } while (-1 < (iVar2 + 1000000) - iVar1);
  fence();
  return;
}


/* NanoCore 1.11, address 0x40038b46.
 * REA evidence: ev_5da2f12024ca954fdc2bcd2b368655506253669e8efcd143a0e304423ab67b9e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40038b46(uint *param_1,uint param_2)

{
  fence();
  fence();
  *param_1 = ~param_2 & *param_1;
  return;
}


/* NanoCore 1.11, address 0x40038b5a.
 * REA evidence: ev_f38fd2a701f75051fcb380aafdbcff436bac7678d7197f92f383e78a25aa52e1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40038b5a(uint *param_1,uint param_2,uint param_3)

{
  fence();
  fence();
  *param_1 = (param_3 ^ *param_1) & param_2 ^ *param_1;
  return;
}


/* NanoCore 1.11, address 0x40038b6e.
 * REA evidence: ev_1d54b9253c5cbc6cb84ed6eb1e78cc744979493b58262c0121ba09192739c3bf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40038b6e(uint *param_1,uint param_2)

{
  fence();
  if (param_2 == 0) {
    FUN_ram_40032a1a(s_BUG__failure_at__s__d__s____ram_40097ad8,
                     s_bsp_artinchip_include_hal_aic_ha_ram_40097aa4,0x35,s_reg_set_bit_ram_40097b04
                    );
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  fence();
  *param_1 = param_2 | *param_1;
  return;
}


/* NanoCore 1.11, address 0x40038ba6.
 * REA evidence: ev_3baa9ddf6203aca2d2494890b6a7b91313337866cccbc62e4e06c3fc5ccca9c9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40038c2a) */
/* WARNING: Removing unreachable block (ram,0x40038bf8) */
/* WARNING: Removing unreachable block (ram,0x40038c14) */
/* WARNING: Removing unreachable block (ram,0x40038c42) */

void FUN_ram_40038ba6(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
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
  puVar1 = &DAT_ram_3004aa7c;
  if (param_2 != 0) {
    if (param_2 == 1) {
      puVar1 = (undefined4 *)&DAT_ram_3004aadc;
    }
    else if (param_2 == 2) {
      puVar1 = (undefined4 *)&DAT_ram_3004aa4c;
    }
    else if (param_2 == 3) {
      puVar1 = &DAT_ram_3004aaac;
    }
  }
  iVar9 = *(int *)(iVar7 * 4 + 0x40097c00);
  iVar5 = (param_5 << 7) / 100 + 0x40;
  iVar3 = iVar2 + 0x26;
  local_a0 = iVar3 * 8;
  iStack_94 = ((iVar6 << 7) / 100 + -0x40) * 0x800 + (iVar3 * -8 + 0x400) * 0x10;
  uStack_64 = 0x400;
  iVar3 = iVar5 * iVar3;
  iStack_8c = *(int *)(iVar7 * 4 + 0x40097b10) * iVar3 >> 0x10;
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
          iVar3 = iVar3 + (*(int *)((int)&DAT_ram_3004aa0c + iVar9 + iVar2) *
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


/* NanoCore 1.11, address 0x40038dfe.
 * REA evidence: ev_356017a49c4644ec6acfb42c9f98e34319a83877fde573bb6e822714225e8859
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40038dfe(int param_1,uint param_2)

{
  FUN_ram_40038b5a(param_1 + 0x1dc,0x1fff0000,(param_2 & 0x1fff) << 0x10);
  return;
}


/* NanoCore 1.11, address 0x40038e12.
 * REA evidence: ev_90ddab4494cda3b7fc603aee1c07d139e32d9d32a51ae25101c48c361b962594
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40038e12(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_ram_40038b6e(param_1 + 0x170,0x10000);
    return;
  }
  FUN_ram_40038b46(param_1 + 0x170,0x10000);
  return;
}


/* NanoCore 1.11, address 0x40038e24.
 * REA evidence: ev_4df98c1d9de1e85bc6059e6563cb7990322426db7afd86031474ef90367f3c5c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40038e24(int param_1,undefined4 param_2)

{
  fence();
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}


/* NanoCore 1.11, address 0x40038e2e.
 * REA evidence: ev_851df516562118c21ad54a07309bdf744e29b3b33f391b978afe1814d926126a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40038e2e(int param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  fence();
  *(uint *)(param_1 + 0xc) = (~param_3 & 3) << 8 | ~param_4 & 3 | (~param_2 & 3) << 0x10;
  if (param_5 != 0) {
    FUN_ram_40038b6e(param_1 + 0x14,0x80000000);
    FUN_ram_40038b6e(param_1,1);
    return;
  }
  FUN_ram_40038b46(param_1,1);
  return;
}


/* NanoCore 1.11, address 0x40038e80.
 * REA evidence: ev_33ea972dea286536602da104afe5f5798014a060023a09292fa7328030afdcb1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40038e80(int param_1,uint param_2)

{
  FUN_ram_40038b5a(param_1 + 0x1d0,0x30,(param_2 & 3) << 4);
  return;
}


/* NanoCore 1.11, address 0x40038e94.
 * REA evidence: ev_e3e6ad58b4e4d996bf475c328208acb8eef62c2df579fdab3fa5ab66119945f4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40038e94(undefined4 param_1,int *param_2)

{
  FUN_ram_40038b5a(param_1,0xf3fff3ff,
                   (param_2[1] & 0xfU) << 0xc |
                   *param_2 << 0x1c | param_2[3] & 0x3ffU | (param_2[2] & 0x3ffU) << 0x10);
  return;
}


/* NanoCore 1.11, address 0x40038ec2.
 * REA evidence: ev_1d0d3ee34ef0e5bde7c604d56702ee4395a038272d619780af19bc613b96089f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40038ec2(int param_1,int param_2,int param_3,uint param_4)

{
  param_1 = param_1 + 0x890;
  if (param_3 != 0) {
    FUN_ram_40038b6e(param_1,0x8000);
  }
  if (param_2 != 0) {
    FUN_ram_40038b6e(param_1,0x4000);
  }
  FUN_ram_40038b5a(param_1,0x3ff,param_4 & 0x3ff);
  return;
}


/* NanoCore 1.11, address 0x40038f02.
 * REA evidence: ev_43215f8f8c543d5236d25130f60c53a5e3805193002f75a746550cdc04237b08
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40038f02(int param_1)

{
  FUN_ram_40038ec2(param_1,1,1,0x40,0x1f);
  FUN_ram_40038e94(param_1 + 0x880,&DAT_ram_3004a9cc);
  FUN_ram_40038e94(param_1 + 0x884,&DAT_ram_3004a9dc);
  FUN_ram_40038e94(param_1 + 0x888,&DAT_ram_3004a9ec);
  FUN_ram_40038e94(param_1 + 0x88c,&DAT_ram_3004a9fc);
  return;
}


/* NanoCore 1.11, address 0x40038f6c.
 * REA evidence: ev_c29d57a0f465294ba5c6a3da6a228432741b8c4e5332332fecc3a79ea502bc04
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40038f6c(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                     undefined4 param_7,undefined4 param_8,undefined4 param_9,uint param_10,
                     uint param_11)

{
  FUN_ram_40038b5a(param_1 + 0x20,0x7f00,(param_4 & 0x7f) << 8);
  fence();
  *(uint *)(param_1 + 0x24) = (param_3 & 0x1fff) << 0x10 | param_2 & 0x1fff;
  fence();
  *(uint *)(param_1 + 0x30) = (param_6 & 0x1fff) << 0x10 | param_5 & 0x1fff;
  fence();
  *(undefined4 *)(param_1 + 0x40) = param_7;
  fence();
  *(undefined4 *)(param_1 + 0x44) = param_8;
  fence();
  *(undefined4 *)(param_1 + 0x48) = param_9;
  fence();
  *(uint *)(param_1 + 0x114) = (param_11 & 0x1fff) << 0x10 | param_10 & 0x1fff;
  return;
}


