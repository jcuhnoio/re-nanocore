/* NanoCore 1.12 analysis module: unresolved/bank_4/block_4002c000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4002c064.
 * REA evidence: ev_e472a41f00798a5e1917704117df11cf67243e9346fe4de295c28d5c3c947eea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002c064(int param_1,int param_2,uint param_3)

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
      FUN_ram_4000303c(param_2,param_1 + iVar1,uVar2);
      if (uVar2 < param_3) {
        FUN_ram_4000303c(param_2 + uVar2,param_1,param_3 - uVar2);
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


/* NanoCore 1.12, address 0x4002c114.
 * REA evidence: ev_6a9a25dccd1a02c17d297b54206c17eebbb3c683ed9b84878f31cd5a4c159af8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002c114(int param_1)

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


/* NanoCore 1.12, address 0x4002c146.
 * REA evidence: ev_09385bcae139a337e4a45b09b718ebf6f0dab9955b3a17e1652303e7c32d5214
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002c146(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (DAT_ram_30079ac4 == '\x02') {
    return;
  }
  FUN_ram_400002f4();
  if (DAT_ram_30079ac4 == '\0') {
    DAT_ram_30079ac4 = 1;
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
      *(short *)(uVar3 * 2 + 0x30079ac8) = (short)uVar2;
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x100);
    FUN_ram_400002f4();
    DAT_ram_30079ac4 = 2;
    FUN_ram_400002fa();
    return;
  }
  FUN_ram_400002fa();
  do {
  } while (DAT_ram_30079ac4 != '\x02');
  return;
}


/* NanoCore 1.12, address 0x4002c1ee.
 * REA evidence: ev_00429b2df62ab98441896d11af4d93eb903db17aa3985dc25e3f2fe6ca8dd69c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002c1ee(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  FUN_ram_4002c146();
  for (iVar1 = 0; param_3 != iVar1; iVar1 = iVar1 + 1) {
  }
  return;
}


/* NanoCore 1.12, address 0x4002c232.
 * REA evidence: ev_e7b2106f579cbc6dd976a9236d5b2fe4cff24ad373554f3520103d4f829a169b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002c232(undefined1 *param_1,uint param_2,undefined1 param_3,undefined4 param_4,
                     int param_5,int param_6)

{
  undefined2 uVar1;
  uint uVar2;
  
  if (((param_1 == (undefined1 *)0x0) || (uVar2 = param_6 + 8, param_2 < uVar2)) ||
     ((param_6 != 0 && (param_5 == 0)))) {
    uVar2 = 0;
  }
  else {
    FUN_ram_4002c146();
    *param_1 = 0xa5;
    param_1[4] = (char)param_4;
    param_1[1] = param_3;
    param_1[2] = (char)param_6;
    param_1[3] = (char)((uint)param_6 >> 8);
    param_1[5] = (char)((uint)param_4 >> 8);
    if (param_6 != 0) {
      FUN_ram_4000303c(param_1 + 6,param_5,param_6);
    }
    uVar1 = FUN_ram_4002c1ee(0xffff,param_1,param_6 + 6);
    param_1[param_6 + 6] = (char)uVar1;
    param_1[param_6 + 7] = (char)((ushort)uVar1 >> 8);
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x4002c2c0.
 * REA evidence: ev_81f99928307d5f4d1e7bc868051ed1bb7f31ad9ae9005321a7bac966c95d403f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002c2c0(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_4002c146();
  *param_1 = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1028) = param_2;
  *(undefined4 *)(param_1 + 0x102c) = param_3;
  return;
}


/* NanoCore 1.12, address 0x4002c2f6.
 * REA evidence: ev_1bae307ed4ab209483bdc9f4dd3d83b724fae574c3fb6771e5e0b92e62dcf7c7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002c2f6(char *param_1,int param_2,uint param_3)

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
  FUN_ram_4002c146();
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
        uVar1 = _DAT_ram_30079b7c;
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
           *(ushort *)((uVar9 ^ *(ushort *)(param_1 + 0x10) >> 8) * 2 + 0x30079ac8);
      if ((uVar6 & 0xffff) == 6) {
        param_1[0xe] = param_1[2];
        uVar1 = CONCAT11(param_1[4],param_1[3]);
        *(ushort *)(param_1 + 10) = uVar1;
        *(ushort *)(param_1 + 0xc) = CONCAT11(param_1[6],param_1[5]);
        if (0x1000 < uVar1) goto LAB_ram_4002c3e8;
        param_1[0x16] = '\0';
        param_1[0x17] = '\0';
        if (uVar1 == 0) {
LAB_ram_4002c3f4:
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
          FUN_ram_4000303c(param_1 + uVar9 + 0x28,pcVar11,uVar6);
          uVar4 = (uint)*(ushort *)(param_1 + 0x10);
          for (uVar9 = 0; uVar6 != uVar9; uVar9 = uVar9 + 1) {
            uVar4 = (uVar4 << 8 ^
                    (uint)*(ushort *)((uVar4 >> 8 ^ (uint)(byte)pcVar11[uVar9]) * 2 + 0x30079ac8)) &
                    0xffff;
          }
          *(short *)(param_1 + 0x10) = (short)uVar4;
          uVar1 = *(ushort *)(param_1 + 0x16);
          *(short *)(param_1 + 0x16) = (short)((uVar1 + uVar6) * 0x10000 >> 0x10);
          uVar3 = (uVar3 - 1) + uVar6;
          if ((uint)*(ushort *)(param_1 + 10) == (uVar1 + uVar6 & 0xffff)) goto LAB_ram_4002c3f4;
          goto LAB_ram_4002c380;
        }
        uVar6 = (uint)*(ushort *)(param_1 + 0x10);
        for (uVar9 = 0; uVar4 != uVar9; uVar9 = uVar9 + 1) {
          uVar6 = (uVar6 << 8 ^
                  (uint)*(ushort *)((uVar6 >> 8 ^ (uint)(byte)pcVar11[uVar9]) * 2 + 0x30079ac8)) &
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
LAB_ram_4002c46c:
            (*pcVar10)(acStack_3c,*(undefined4 *)(param_1 + 0x102c));
          }
        }
        else {
LAB_ram_4002c544:
          FUN_ram_4002c114(param_1);
        }
      }
LAB_ram_4002c3e8:
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
        if (*(ushort *)(param_1 + 0x10) != uVar9) goto LAB_ram_4002c544;
        pcVar10 = *(code **)(param_1 + 0x1028);
        if (pcVar10 != (code *)0x0) {
          acStack_3c[0] = param_1[0xe];
          uStack_3a = *(ushort *)(param_1 + 10);
          uStack_38 = *(undefined2 *)(param_1 + 0xc);
          pcStack_34 = param_1 + 0x28;
          goto LAB_ram_4002c46c;
        }
        goto LAB_ram_4002c3e8;
      }
    }
LAB_ram_4002c380:
    uVar3 = uVar3 + 1;
  } while( true );
}


/* NanoCore 1.12, address 0x4002c57a.
 * REA evidence: ev_a02c6e645206e942a6d64139860272381ad2c2769fb2ce7c10c37838be864f60
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_4002c57a(undefined4 param_1,int *param_2,undefined4 param_3,uint param_4,uint *param_5)

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
    iVar3 = FUN_ram_4002cd84(uVar2 + *param_2,param_3,uVar1);
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


/* NanoCore 1.12, address 0x4002c6d0.
 * REA evidence: ev_c66c6bf83c406b97a3886b4a281bc162aa79e68a7acb6242797c9749968d3777
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002c6d0(void)

{
  FUN_ram_4004b2c0(&DAT_ram_30079cc8);
  DAT_ram_30079cc8 = 0x55;
  _DAT_ram_30079cd4 = &LAB_ram_4002c5e6;
  _DAT_ram_30079cd8 = &LAB_ram_4002c5ce;
  _DAT_ram_30079cdc = FUN_ram_4002c57a;
  _DAT_ram_30079ce4 = &LAB_ram_4002c54c;
  _DAT_ram_30079ccc = 0;
  _DAT_ram_30079ce8 = &LAB_ram_4002c572;
  FUN_ram_4004b2ca();
  return;
}


/* NanoCore 1.12, address 0x4002c72e.
 * REA evidence: ev_6794f9101757cfcfa7de565d8d853a92910baa62b0625d938d034e01d434e8be
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002c72e(void)

{
  if (_DAT_ram_30079d50 != 0) {
    FUN_ram_40004b14(0x30079d24);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4002c746.
 * REA evidence: ev_5c34e5a75c58ae33ccf1cac40eab89f135ffd79118fc75c2f778efffc37f30c9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4002c746(void)

{
  int iVar1;
  uint uVar2;
  int aiStack_14 [3];
  
  iVar1 = FUN_ram_40006b6e();
  if ((iVar1 == 0) && (iVar1 = FUN_ram_40006b3a(), iVar1 < 1)) {
    return 0;
  }
  if (_DAT_ram_30079d58 != 0) {
    aiStack_14[0] = 0;
    uVar2 = FUN_ram_40006e3c(aiStack_14);
    if (((uVar2 != 0) && (uVar2 <= _DAT_ram_30079d58)) &&
       (_DAT_ram_30079d58 < uVar2 + aiStack_14[0] * 0x40)) {
      return _DAT_ram_30079d58;
    }
  }
  _DAT_ram_30079d58 = FUN_ram_40006dec(s_ui_asset_ram_40099d90);
  return _DAT_ram_30079d58;
}


/* NanoCore 1.12, address 0x4002c7a0.
 * REA evidence: ev_ae41e74500d7efa839e4a9557c22eeaf3c10ecbb1ce5b45e28efc8268876df23
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002c7a0(undefined4 param_1,int param_2,int param_3,uint param_4)

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
    uVar2 = fal_partition_read(param_1,param_2,param_3,uVar1);
    if (uVar1 != uVar2) break;
    param_4 = param_4 - uVar1;
    param_2 = param_2 + uVar1;
    param_3 = param_3 + uVar1;
  }
  return 0xfffffff8;
}


/* NanoCore 1.12, address 0x4002c7ec.
 * REA evidence: ev_e0d387dd299bf03fc9f15ac55d1adfd97a8b539f85343d895d176d7b2afcd8fd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002c7ec(void)

{
  int iVar1;
  
  if ((_DAT_ram_30079d50 == 0) &&
     (iVar1 = FUN_ram_40004988(0x30079d24,s_uiast_ram_4009c064,1), iVar1 == 0)) {
    _DAT_ram_30079d50 = 1;
  }
  return 0;
}


/* NanoCore 1.12, address 0x4002c824.
 * REA evidence: ev_bcfeb5b861fa195385f320106928658a5933fad37a4a83c50932696891bdf5a0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002c824(void)

{
  if (_DAT_ram_30079d50 != 0) {
    FUN_ram_40004a22(0x30079d24,0xffffffff);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4002c83e.
 * REA evidence: ev_89ca448ed69e5920b141548a8c7228b72c75f316fc1768a3c68895d2a4d437ee
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4002c8b6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002c83e(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int local_30;
  uint uStack_2c;
  
  uVar3 = 1;
  if (_DAT_ram_30079d60 != 0) {
    if ((_DAT_ram_30079d18 == 0) && (uVar3 = 0, 0x1f < _DAT_ram_30079d54)) {
      memcpy(&local_30,_DAT_ram_30079d1c + 0x10,0x10);
      if (((local_30 == 0x494e4458) && (uStack_2c <= (_DAT_ram_30079d54 - 0x20) / 0x1c)) &&
         ((uVar2 = uStack_2c * 0x1c + 0x20, iVar4 = _DAT_ram_30079d10, uVar1 = _DAT_ram_30079d14,
          uVar2 <= _DAT_ram_30079d14 ||
          (iVar4 = FUN_ram_4002d170(_DAT_ram_30079d10,uVar2), uVar1 = uVar2, iVar4 != 0)))) {
        _DAT_ram_30079d14 = uVar1;
        _DAT_ram_30079d10 = iVar4;
        memcpy(_DAT_ram_30079d10,_DAT_ram_30079d1c,uVar2);
        uVar3 = 1;
        _DAT_ram_30079d18 = uVar2;
      }
      else {
        uVar3 = 0;
      }
    }
    return uVar3;
  }
  return uVar3;
}


/* NanoCore 1.12, address 0x4002c904.
 * REA evidence: ev_58c081da020a354bd2885123d0055ded473e26ba628f9d6b752c7856ce55c062
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002c904(void)

{
  FUN_ram_4002c824();
  DAT_ram_30079d0c = 0;
  FUN_ram_40004f92(0x30079cfc,0,0x10);
  _DAT_ram_30079d54 = 0;
  _DAT_ram_30079d18 = 0;
  FUN_ram_4002c72e();
  return;
}


/* NanoCore 1.12, address 0x4002c93c.
 * REA evidence: ev_92df7b8554141ec2aa3314d3ba0a094aab66c62df1a7e994c24e170e8f158dc3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002c93c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0xfffffff6;
  }
  iVar1 = FUN_ram_4002c746();
  if (iVar1 != 0) {
    uVar2 = FUN_ram_4002c7a0(iVar1,0,param_1,0x10);
    return uVar2;
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x4002c964.
 * REA evidence: ev_ef2cae3eedad304b06f1febe58ff7e7f9c51d53bb12f63ac2a6959e16f04ee36
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002c964(int param_1)

{
  int iVar1;
  int *piVar2;
  int local_20;
  uint uStack_1c;
  
  piVar2 = &local_20;
  iVar1 = FUN_ram_4002c93c(&local_20);
  if (iVar1 == 0) {
    iVar1 = FUN_ram_4002c746();
    if (iVar1 == 0) {
      DAT_ram_30079d0c = 0;
      FUN_ram_4000303c(0x30079cfc,&local_20,0x10);
      if (param_1 == 0) {
        return 0;
      }
      goto LAB_ram_4002c9a2;
    }
    if ((((0x10 < *(uint *)(iVar1 + 0x38)) && (local_20 == 0x55494131)) && (uStack_1c != 0)) &&
       (uStack_1c <= *(uint *)(iVar1 + 0x38) - 0x10)) {
      FUN_ram_4000303c(0x30079cfc,&local_20,0x10);
      if (param_1 != 0) {
        FUN_ram_4000303c(param_1,&local_20,0x10);
      }
      return 1;
    }
    FUN_ram_4000303c(0x30079cfc,&local_20,0x10);
    DAT_ram_30079d0c = 2;
  }
  else {
    DAT_ram_30079d0c = 0;
    FUN_ram_40004f92(0x30079cfc,0,0x10);
  }
  if (param_1 == 0) {
    return 0;
  }
  piVar2 = (int *)0x30079cfc;
LAB_ram_4002c9a2:
  FUN_ram_4000303c(param_1,piVar2,0x10);
  return 0;
}


/* NanoCore 1.12, address 0x4002ca2e.
 * REA evidence: ev_779989459673ec7c4a80cbc835d22de90ca67defe1f30ed097774a76430f7401
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4002ca2e(int param_1)

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
  iVar2 = FUN_ram_4002c964(auStack_140);
  if (iVar2 == 0) {
    if (DAT_ram_30079d0c == '\x02') {
      FUN_ram_40022cc4();
    }
    if (param_1 != 0) {
      puVar5 = (undefined1 *)0x30079cfc;
LAB_ram_4002caaa:
      FUN_ram_4000303c(param_1,puVar5,0x10);
      return iVar2;
    }
  }
  else {
    iVar3 = FUN_ram_4002c746();
    if (iVar3 == 0) {
      DAT_ram_30079d0c = '\0';
    }
    else {
      iVar8 = 0x10;
      iVar1 = 0;
      for (uVar6 = uStack_13c; uVar6 != 0; uVar6 = uVar6 - uVar7) {
        uVar7 = uVar6;
        if (0x100 < uVar6) {
          uVar7 = 0x100;
        }
        iVar4 = FUN_ram_4002c7a0(iVar3,iVar8,&uStack_130,uVar7);
        if (iVar4 != 0) goto LAB_ram_4002cad0;
        iVar1 = FUN_ram_40007450(iVar1,&uStack_130,uVar7);
        iVar8 = iVar8 + uVar7;
      }
      if ((iVar1 != 0) && (iStack_138 == iVar1)) {
        uStack_130 = uStack_13c;
        iStack_12c = iVar1;
        FUN_ram_40022bfa(&uStack_130);
        FUN_ram_4000303c(0x30079cfc,auStack_140,0x10);
        DAT_ram_30079d0c = '\x01';
        if (param_1 == 0) {
          DAT_ram_30079d0c = 1;
          return iVar2;
        }
        goto LAB_ram_4002caaa;
      }
LAB_ram_4002cad0:
      DAT_ram_30079d0c = '\x02';
      FUN_ram_40022cc4();
    }
    if (param_1 != 0) {
      FUN_ram_4000303c(param_1,auStack_140,0x10);
    }
  }
  return 0;
}


/* NanoCore 1.12, address 0x4002cb50.
 * REA evidence: ev_fce37c767d2ced83af337f367b82eeccbc0d2f9fde40e816f7a07eef3cd82638
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002cb50(int param_1)

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
  
  cVar1 = DAT_ram_30079d0c;
  if (DAT_ram_30079d0c != '\0') {
    if (param_1 != 0) {
      FUN_ram_4000303c(param_1,0x30079cfc,0x10);
    }
    return (uint)(cVar1 == '\x01');
  }
  uVar2 = FUN_ram_4002c964(auStack_20);
  if (uVar2 == 0) {
    if (DAT_ram_30079d0c == '\x02') {
      FUN_ram_40022cc4();
    }
    if (param_1 == 0) {
      return 0;
    }
    puVar4 = (undefined1 *)0x30079cfc;
  }
  else {
    iVar3 = FUN_ram_40022bd0(&iStack_28);
    if (((iVar3 != 0) || (iStack_28 != iStack_1c)) || (iStack_24 != iStack_18)) {
      uVar2 = FUN_ram_4002ca2e(param_1);
      return uVar2;
    }
    FUN_ram_4000303c(0x30079cfc,auStack_20,0x10);
    DAT_ram_30079d0c = '\x01';
    if (param_1 == 0) {
      DAT_ram_30079d0c = 1;
      return uVar2;
    }
    puVar4 = auStack_20;
  }
  FUN_ram_4000303c(param_1,puVar4,0x10);
  return uVar2;
}


/* NanoCore 1.12, address 0x4002cbfa.
 * REA evidence: ev_46c25b10a7b26949709479971b6997b85cd6b4795709ea6de5f92e5218f026ea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002cbfa(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_40 [4];
  int iStack_3c;
  undefined1 auStack_30 [20];
  
  FUN_ram_4002c824();
  if (DAT_ram_30079d5c != '\0') {
LAB_ram_4002cc1e:
    FUN_ram_4002c72e();
    return 0;
  }
  if ((_DAT_ram_30079d1c == 0) || (_DAT_ram_30079d54 == 0)) {
    uVar4 = 0;
    if (param_1 == 0) {
      iVar5 = FUN_ram_4002cb50(auStack_40);
      if (iVar5 == 0) goto LAB_ram_4002cd28;
    }
    else {
      iVar5 = FUN_ram_4002c964(auStack_30);
      if (iVar5 == 0) {
        FUN_ram_4000303c(auStack_40,0x30079cfc,0x10);
        goto LAB_ram_4002cc1e;
      }
      FUN_ram_4000303c(0x30079cfc,auStack_30,0x10);
      DAT_ram_30079d0c = 1;
      FUN_ram_4000303c(auStack_40,auStack_30,0x10);
    }
    iVar5 = FUN_ram_4002c746();
    if ((iVar5 == 0) || (uVar2 = iStack_3c + 0x10, *(uint *)(iVar5 + 0x38) < uVar2))
    goto LAB_ram_4002cd28;
    uVar3 = _DAT_ram_30079d60;
    if (_DAT_ram_30079d60 < uVar2) {
      uVar3 = uVar2;
    }
    if ((_DAT_ram_30079d1c == 0) ||
       (iVar6 = _DAT_ram_30079d1c, uVar1 = _DAT_ram_30079d20, _DAT_ram_30079d20 < uVar3)) {
      iVar6 = FUN_ram_4002d154(uVar3);
      if (iVar6 == 0) {
        if (_DAT_ram_30079d1c == 0) goto LAB_ram_4002cd28;
        FUN_ram_4002d1d0();
        _DAT_ram_30079d1c = 0;
        _DAT_ram_30079d20 = 0;
        iVar6 = FUN_ram_4002d154(uVar3);
        if (iVar6 == 0) goto LAB_ram_4002cd28;
      }
      uVar1 = uVar3;
      if (_DAT_ram_30079d1c != 0) {
        FUN_ram_4002d1d0();
      }
    }
    _DAT_ram_30079d20 = uVar1;
    _DAT_ram_30079d1c = iVar6;
    iVar5 = FUN_ram_4002c7a0(iVar5,0,_DAT_ram_30079d1c,uVar2);
    _DAT_ram_30079d54 = uVar2;
    if (iVar5 != 0) {
      _DAT_ram_30079d54 = 0;
      goto LAB_ram_4002cd28;
    }
  }
  uVar4 = FUN_ram_4002c83e();
LAB_ram_4002cd28:
  FUN_ram_4002c72e();
  return uVar4;
}


/* NanoCore 1.12, address 0x4002cd38.
 * REA evidence: ev_ac2b1b4419ae5d7d9b552eb4266a7513eb8ef604313e15c2f34bc88001b0842a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002cd38(uint param_1)

{
  int iVar1;
  undefined1 auStack_20 [12];
  uint uStack_14;
  
  param_1 = param_1 & 0xffffff;
  iVar1 = FUN_ram_4002cb50(auStack_20);
  if (((iVar1 != 0) || (iVar1 = FUN_ram_4002c964(auStack_20), iVar1 != 0)) &&
     ((uStack_14 & 0xff000000) == 0x1000000)) {
    param_1 = uStack_14 & 0xffffff;
  }
  return param_1;
}


/* NanoCore 1.12, address 0x4002cd7e.
 * REA evidence: ev_c83d11ad945356d33b2526a541a3cee18a1af50229f0a03715d3c5995f832360
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002cd7e(void)

{
  FUN_ram_4002cbfa(0);
  return;
}


/* NanoCore 1.12, address 0x4002cd84.
 * REA evidence: ev_fa555b52862a0232b6c5c8edae7c68607dad750a98c1959dc4e26cbb8339d7a3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002cd84(uint param_1,int param_2,uint param_3)

{
  int iVar1;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    return 0xfffffff6;
  }
  FUN_ram_4002c824();
  if ((_DAT_ram_30079d1c == 0) || (_DAT_ram_30079d54 == 0)) {
    if ((_DAT_ram_30079d10 != 0) &&
       ((param_1 <= _DAT_ram_30079d18 &&
        (iVar1 = _DAT_ram_30079d10, param_3 <= _DAT_ram_30079d18 - param_1))))
    goto LAB_ram_4002cde0;
    FUN_ram_4002c72e();
    iVar1 = FUN_ram_4002c746();
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    iVar1 = FUN_ram_4002c7a0(iVar1,param_1,param_2,param_3);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    if ((param_1 <= _DAT_ram_30079d54) &&
       (iVar1 = _DAT_ram_30079d1c, param_3 <= _DAT_ram_30079d54 - param_1)) {
LAB_ram_4002cde0:
      memcpy(param_2,iVar1 + param_1);
      FUN_ram_4002c72e();
      return 0;
    }
    FUN_ram_4002c72e();
  }
  return 0xfffffff8;
}


/* NanoCore 1.12, address 0x4002ce1e.
 * REA evidence: ev_320b9932d7e2a72705dcef5e5d8ef717afb2c3a564e14ab43babf1b3f0264a87
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002ce1e(int param_1,undefined4 *param_2)

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
    iVar3 = FUN_ram_4002cb50(auStack_5c);
    if (iVar3 != 0) {
      iVar3 = FUN_ram_4002cd84(0x10,&iStack_4c,0x10);
      if (iVar3 != 0) {
        return 0xfffffff8;
      }
      if (iStack_4c == 0x494e4458) {
        for (uVar1 = 0; uVar1 < uStack_48; uVar1 = uVar1 + 1) {
          iVar3 = FUN_ram_4002cd84(uVar1 * 0x1c + 0x20,auStack_3c,0x1c);
          if (iVar3 != 0) {
            return 0xfffffff8;
          }
          iVar3 = FUN_ram_4000513e(auStack_3c,param_1,0x10);
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


/* NanoCore 1.12, address 0x4002cea8.
 * REA evidence: ev_97456f15257b8519df861ce54e3d9a40a8d521b844d7834ea15156c10d7a4294
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002cea8(void)

{
  if (_DAT_ram_30079d98 != 0) {
    FUN_ram_40004b14(0x30079d6c);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4002cec0.
 * REA evidence: ev_23a8fb451c3be8bcf946aa59197dd25601fdc43395715f9b82e9e3ff0ab31caa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002cec0(void)

{
  int iVar1;
  
  if ((_DAT_ram_30079d98 == 0) &&
     (iVar1 = FUN_ram_40004988(0x30079d6c,s_uilay_ram_4009c06c,1), iVar1 == 0)) {
    _DAT_ram_30079d98 = 1;
  }
  return 0;
}


/* NanoCore 1.12, address 0x4002cef8.
 * REA evidence: ev_f123df92158706f042d2a4f8a5d16f5bf8e4e4719c0aa56e07c58930523c4ae0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002cef8(void)

{
  if (_DAT_ram_30079d98 != 0) {
    FUN_ram_40004a22(0x30079d6c,0xffffffff);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4002cf12.
 * REA evidence: ev_586dcbe0c2685edf747dba4123bf6ef048abf028bcfa15a2aa5501285ab3aaa8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002cf12(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    for (iVar1 = 0; param_2 != iVar1; iVar1 = iVar1 + 1) {
      if (*(int *)(param_1 + 8 + iVar1 * 0xc) != 0) {
        FUN_ram_4002d1d0();
      }
    }
    FUN_ram_4002d1d0(param_1);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4002cf56.
 * REA evidence: ev_4aa873ee2ea534fa25afe92a98e6a86d328abc97d50d77e3763fef65a13ec195
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002cf56(void)

{
  uint uVar1;
  
  if (_DAT_ram_30079d68 != 0) {
    uVar1 = 0;
    while( true ) {
      if (_DAT_ram_30079d64 <= uVar1) break;
      if (*(int *)(_DAT_ram_30079d68 + uVar1 * 0xc + 8) != 0) {
        FUN_ram_4002d1d0();
      }
      uVar1 = uVar1 + 1;
    }
    FUN_ram_4002d1d0();
    _DAT_ram_30079d68 = 0;
    _DAT_ram_30079d64 = 0;
  }
  return;
}


/* NanoCore 1.12, address 0x4002cfb2.
 * REA evidence: ev_a66e717c06e54dd67ace5e26ce6777e3b7e655eb6001e9b49aad035f812073d1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002cfb2(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uStack_68;
  int iStack_64;
  undefined1 auStack_60 [16];
  int iStack_50;
  int iStack_4c;
  int iStack_40;
  uint uStack_3c;
  
  iVar1 = FUN_ram_4002cb50(auStack_60);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  iVar1 = FUN_ram_4002cd84(0x10,&iStack_50,0x10);
  if (iVar1 == 0) {
    if (iStack_50 != 0x494e4458) {
      return 0xffffffff;
    }
    iVar1 = FUN_ram_4002cd84(iStack_4c * 0x1c + 0x20,&iStack_40,0x10);
    if (iVar1 == 0) {
      if (iStack_40 != 0x4c415931) {
        return 0xffffffff;
      }
      iVar1 = iStack_4c * 0x1c + 0x30;
      if (0xf < uStack_3c - 1) {
        return 0xffffffff;
      }
      puVar2 = (undefined4 *)FUN_ram_4002d196(uStack_3c,0xc);
      if (puVar2 == (undefined4 *)0x0) {
        return 0xfffffffb;
      }
      uVar6 = 0;
      puVar5 = puVar2;
      while( true ) {
        if (uStack_3c <= uVar6) {
          FUN_ram_4002cf56();
          _DAT_ram_30079d64 = uStack_3c;
          _DAT_ram_30079d68 = puVar2;
          return 0;
        }
        iVar3 = FUN_ram_4002cd84(iVar1,&uStack_68,8);
        if (iVar3 != 0) break;
        *puVar5 = uStack_68;
        puVar5[1] = iStack_64;
        if (0x3f < iStack_64 - 1U) {
          FUN_ram_4002cf56();
          FUN_ram_4002cf12(puVar2,uStack_3c);
          return 0xffffffff;
        }
        iVar3 = FUN_ram_4002d196(iStack_64,0x1a);
        if (iVar3 == 0) {
          FUN_ram_4002cf56();
          FUN_ram_4002cf12(puVar2,uStack_3c);
          return 0xfffffffb;
        }
        iVar4 = FUN_ram_4002cd84(iVar1 + 8,iVar3,iStack_64 * 0x1a);
        if (iVar4 != 0) {
          FUN_ram_4002d1d0(iVar3);
          FUN_ram_4002cf56();
          break;
        }
        uVar6 = uVar6 + 1;
        puVar5[2] = iVar3;
        iVar1 = iVar1 + 8 + iStack_64 * 0x1a;
        puVar5 = puVar5 + 3;
      }
      FUN_ram_4002cf12(puVar2,uStack_3c);
    }
  }
  return 0xfffffff8;
}


