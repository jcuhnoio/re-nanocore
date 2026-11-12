/* NanoCore 1.12 analysis module: unresolved/bank_4/block_4003c000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4003c092.
 * REA evidence: ev_623beb4b315f430df3927cb388286df46c4bf423095db5d4c584b388d3074ef1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003c1ac) */

int FUN_ram_4003c092(int param_1,undefined2 *param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  
  iVar3 = -0x16;
  if (param_2 != (undefined2 *)0x0) {
    iVar11 = *(int *)(param_2 + 4);
    uVar8 = (uint)(ushort)param_2[2];
    iVar3 = -0x16;
    if (iVar11 != 0) {
      FUN_ram_4003bc18();
      iVar10 = 0;
      FUN_ram_4003bdbe(param_1,*param_2);
      FUN_ram_4003bbe8(param_1);
      iVar9 = 0;
      iVar3 = 0;
      while (uVar8 != 0) {
        uVar7 = uVar8;
        if (8 < uVar8) {
          uVar7 = 8;
        }
        uVar6 = 0;
        do {
          if ((param_3 == 0) || ((ushort)param_2[2] - 1 != iVar10 + uVar6)) {
            fence();
            *(undefined4 *)(*(int *)(param_1 + 8) + 0x10) = 0x100;
          }
          else {
            fence();
            *(undefined4 *)(*(int *)(param_1 + 8) + 0x10) = 0x300;
          }
          uVar6 = uVar6 + 1;
        } while ((uVar6 & 0xffff) < uVar7);
        uVar6 = uVar7 - 1 & 0xffff;
        uVar8 = uVar8 - uVar7 & 0xffff;
        iVar10 = uVar6 + iVar10 + 1;
        lVar1 = FUN_ram_400400ea();
        iVar4 = iVar3 + uVar7;
        iVar3 = 0;
        while (fence(), *(uint *)(*(int *)(param_1 + 8) + 0x9c) < uVar7) {
          if (iVar3 != 0) goto LAB_ram_4003c164;
          uVar2 = FUN_ram_400400ea();
          if (lVar1 + 10U <= uVar2) {
            iVar3 = -3;
          }
        }
        if (iVar3 != 0) break;
        uVar5 = 0;
        do {
          fence();
          *(undefined1 *)(iVar11 + iVar9 + uVar5) = *(undefined1 *)(*(int *)(param_1 + 8) + 0x10);
          uVar5 = uVar5 + 1;
        } while ((uVar5 & 0xffff) < uVar7);
        iVar9 = uVar6 + iVar9 + 1;
        iVar3 = iVar4;
      }
LAB_ram_4003c164:
      iVar11 = FUN_ram_400400ea();
      do {
        fence();
        if ((*(uint *)(*(int *)(param_1 + 8) + 0x40) & 0x600) != 0) {
          FUN_ram_4003bc18(param_1);
          return iVar3;
        }
        uVar12 = FUN_ram_400400ea();
      } while (((int)((ulonglong)uVar12 >> 0x20) == 0) && ((uint)uVar12 < iVar11 + 10U));
      FUN_ram_4003bc18(param_1);
      iVar3 = -3;
    }
  }
  return iVar3;
}


/* NanoCore 1.12, address 0x4003c214.
 * REA evidence: ev_59248c0ef6f21a16ea41a630b3b7d1fefb2871b243d86e9c2fb60f369cb86996
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003c214(undefined4 *param_1)

{
  fence();
  fence();
  *(uint *)*param_1 = *(uint *)*param_1 | 1;
  return;
}


/* NanoCore 1.12, address 0x4003c22a.
 * REA evidence: ev_685569369f1c57e778bc147d21514a11fe4d4f1b4a84e0237bcc0ea249e4055c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003c22a(int *param_1)

{
  fence();
  fence();
  *(uint *)(*param_1 + 0x24) = *(uint *)(*param_1 + 0x24) | 0x100;
  return;
}


/* NanoCore 1.12, address 0x4003c248.
 * REA evidence: ev_b96947f2b115f2deebec1749c911eddb1451f99f94eac170c8c47cd692c15512
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003c248(int param_1)

{
  undefined4 uVar1;
  
  if (((param_1 == 0x5622) || (param_1 == 0xac44)) || (uVar1 = 0x1770000, param_1 == 0x2b11)) {
    uVar1 = 0x1588800;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4003c29c.
 * REA evidence: ev_3e2ede19383ec53abbff02bdef071a022ec2b2ba1678b5fdd6dea78bae2e0e89
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003c29c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_ram_4003c248(param_2);
  uVar2 = FUN_ram_40038cc4(param_1);
  FUN_ram_40038d5c(uVar2,uVar1);
  return;
}


/* NanoCore 1.12, address 0x4003c2be.
 * REA evidence: ev_c860d1920ac9fa973767c5f84b88a7b6c421dc11f9652654c639f53d1e080218
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003c2be(int *param_1,int param_2)

{
  *param_1 = (param_2 + 0x18600) * 0x1000;
  param_1[1] = param_2 + 0x34;
  param_1[2] = param_2 + 0x21;
  param_1[3] = param_2;
  FUN_ram_40038ba4();
  return;
}


/* NanoCore 1.12, address 0x4003c2de.
 * REA evidence: ev_43aa78c9f82a958f284ba59bc75c3e97bc616f319da3c5dbf47bb4344804fc75
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003c2de(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  fence();
  uVar3 = *(uint *)(*param_1 + 0x34);
  fence();
  uVar1 = *(uint *)(*param_1 + 100);
  fence();
  if (4 < param_2) {
    return 0xffffffea;
  }
  uVar2 = *(uint *)*param_1 & 0xffffffcf;
  switch(param_2) {
  case 0:
    fence();
    *(uint *)*param_1 = uVar2 | 0x10;
    fence();
    *(uint *)(*param_1 + 0x34) = uVar3 & 0xffcfffff | 0x100000;
    fence();
    uVar1 = uVar1 & 0xffcfffff | 0x100000;
    goto LAB_ram_4003c346;
  case 1:
    fence();
    uVar2 = uVar2 | 0x10;
    break;
  case 2:
    fence();
    puVar4 = (uint *)*param_1;
    uVar1 = uVar2 | 0x20;
    goto LAB_ram_4003c34c;
  case 3:
    fence();
    *(uint *)*param_1 = uVar2;
    fence();
    *(uint *)(*param_1 + 0x34) = uVar3 & 0xffcfffff | 0x100000;
    fence();
    *(uint *)(*param_1 + 100) = uVar1 & 0xffcfffff | 0x100000;
    return 0;
  case 4:
    fence();
  }
  *(uint *)*param_1 = uVar2;
  fence();
  *(uint *)(*param_1 + 0x34) = uVar3 & 0xffcfffff;
  fence();
  uVar1 = uVar1 & 0xffcfffff;
LAB_ram_4003c346:
  puVar4 = (uint *)(*param_1 + 100);
LAB_ram_4003c34c:
  *puVar4 = uVar1;
  return 0;
}


/* NanoCore 1.12, address 0x4003c3c4.
 * REA evidence: ev_9c379d702729bed2074d5fec600cd505be46b3a3dcea2afaebd8ef86dca2c256
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003c3c4(int *param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 - 8 < 0x19) {
    uVar1 = 0xffffffea;
    if ((param_2 & 3) == 0) {
      fence();
      fence();
      *(uint *)(*param_1 + 4) = ((param_2 - 8 >> 2) + 1 & 0xf) << 4 | *(uint *)(*param_1 + 4) & 0x8f
      ;
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4003c40a.
 * REA evidence: ev_c7cb4a9527feae1434d2d1e3d5a433b4ef5e2a29c71bcc96b3e615115911a943
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003c40a(int *param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 - 8 < 0x19) {
    uVar1 = 0xffffffea;
    if ((param_2 & 3) == 0) {
      fence();
      fence();
      *(uint *)(*param_1 + 4) = *(uint *)(*param_1 + 4) & 0xf8 | (param_2 - 8 >> 2) + 1 & 0xff;
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4003c446.
 * REA evidence: ev_901a2d8a612e276cce002bcd58df198f774794fb88f1d4c449782a97de3f91ac
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003c446(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  FUN_ram_4003c29c(param_1[2]);
  uVar1 = FUN_ram_4003c248(param_2);
  if (param_2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = uVar1 / param_2;
  }
  iVar2 = 0;
  if (param_3 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = uVar1 / param_3;
  }
  do {
    if ((byte)(&DAT_ram_4009d3c4)[iVar2 * 2] == uVar1) {
      fence();
      fence();
      *(uint *)(*param_1 + 0x24) =
           *(uint *)(*param_1 + 0x24) & 0xfffffff0 | (uint)(byte)(&DAT_ram_4009d3c5)[iVar2 * 2];
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0xf);
  return 0xffffffea;
}


/* NanoCore 1.12, address 0x4003c4b8.
 * REA evidence: ev_7f64f1e847b111a522fe381c2fc88fc584653892e4e82966ca4978cc409e9f6e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003c4b8(int *param_1,int param_2)

{
  uint uVar1;
  
  fence();
  uVar1 = *(uint *)(*param_1 + 4) & 0xfff7ffff;
  if (param_2 != 0) {
    uVar1 = uVar1 | 0x80000;
  }
  fence();
  *(uint *)(*param_1 + 4) = uVar1;
  return;
}


/* NanoCore 1.12, address 0x4003c4de.
 * REA evidence: ev_ff801dd4d02d70886b0b9354e106560ab36cef7992d1aa78067f4238d2a745ee
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003c4de(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  FUN_ram_4003c29c(param_1[2]);
  uVar2 = FUN_ram_4003c248(param_2);
  fence();
  if ((*(uint *)*param_1 & 0x30) == 0) {
    uVar3 = *(uint *)(*param_1 + 4);
    fence();
    fence();
    uVar1 = param_3;
  }
  else {
    uVar3 = *(uint *)(*param_1 + 4);
    fence();
    fence();
    uVar1 = param_3 >> 1;
  }
  *(uint *)(*param_1 + 4) = uVar3 & 0xfffc00ff | (uVar1 - 1) * 0x100;
  if (param_2 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = uVar2 / param_2;
  }
  iVar4 = 0;
  if (param_3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = uVar2 / param_3;
  }
  do {
    if ((byte)(&DAT_ram_4009d3c4)[iVar4 * 2] == uVar2) {
      fence();
      fence();
      *(uint *)(*param_1 + 0x24) =
           *(uint *)(*param_1 + 0x24) & 0xffffff0f | (uint)(byte)(&DAT_ram_4009d3c5)[iVar4 * 2] << 4
      ;
      return 0;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0xf);
  return 0xffffffea;
}


/* NanoCore 1.12, address 0x4003c5a4.
 * REA evidence: ev_0f94b0d8805605197c50cb411e3b87a004a79be5c3314ada7332a8497d707a29
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003c5a4(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = param_2 - 1;
  if (param_3 == 0) {
    fence();
    fence();
    iVar1 = *param_1;
    *(uint *)(iVar1 + 0x34) =
         *(uint *)(*param_1 + 0x34) & 0xfff00000 | (1 << (param_2 & 0x1f)) - 1U | uVar3 * 0x10000;
    fence();
    fence();
    *(uint *)(*param_1 + 0x30) = *(uint *)(iVar1 + 0x30) & 0xfffffff0 | uVar3;
    fence();
    *(undefined4 *)(*param_1 + 0x44) = 0xfedcba98;
    fence();
    puVar2 = (undefined4 *)(*param_1 + 0x48);
  }
  else {
    fence();
    fence();
    iVar1 = *param_1;
    *(uint *)(iVar1 + 100) = *(uint *)(*param_1 + 100) & 0xfff0ffff | uVar3 * 0x10000;
    fence();
    fence();
    *(uint *)(*param_1 + 0x30) = *(uint *)(iVar1 + 0x30) & 0xffffff0f | uVar3 * 0x10;
    fence();
    *(undefined4 *)(*param_1 + 0x68) = 0xfedcba98;
    fence();
    puVar2 = (undefined4 *)(*param_1 + 0x6c);
  }
  *puVar2 = 0x76543210;
  return;
}


/* NanoCore 1.12, address 0x4003c682.
 * REA evidence: ev_fe050466567d713c1e880338816657e88801809eb60c15baeeb605bf794c65b7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003c682(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 local_30 [2];
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  uStack_24 = 1;
  iStack_28 = *param_1 + 0x20;
  iStack_14 = param_1[3] + 0xc;
  uVar2 = *(uint *)(param_2 + 0x10);
  local_30[0] = 1;
  uStack_1c = 1;
  uStack_18 = 1;
  if (uVar2 == 0x18) {
    uStack_24 = 3;
  }
  else if (uVar2 < 0x19) {
    if (uVar2 != 8) {
      if (uVar2 != 0x10) {
        return;
      }
      uStack_24 = 2;
    }
  }
  else {
    if (uVar2 != 0x20) {
      return;
    }
    uStack_24 = 4;
  }
  param_1[9] = 3;
  uStack_20 = uStack_24;
  iVar1 = FUN_ram_4003ac8e();
  param_1[5] = iVar1;
  if (iVar1 != 0) {
    FUN_ram_4003ac26(iVar1,&LAB_ram_4003c276,param_1 + 5);
    FUN_ram_4003ac36(param_1[5],local_30);
    FUN_ram_4003ae92(param_1[5],param_1[6],param_1[7],param_1[8],1);
    FUN_ram_4003afac(param_1[5]);
    fence();
    fence();
    *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) | 0x2000000;
    fence();
    *(undefined4 *)(*param_1 + 0x28) = 0;
    FUN_ram_4003c22a(param_1);
    fence();
    fence();
    *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) | 4;
    FUN_ram_4003c214(param_1);
    fence();
    fence();
    puVar3 = (uint *)*param_1;
    *puVar3 = *(uint *)*param_1 | 4;
    fence();
    fence();
    puVar4 = (uint *)*param_1;
    *puVar4 = *puVar3 | 0x100;
    fence();
    fence();
    *(uint *)(*param_1 + 0x1c) = puVar4[7] | 0x80;
  }
  return;
}


/* NanoCore 1.12, address 0x4003c8b8.
 * REA evidence: ev_90ac5cb2654e9a67e95d396634a3c66a2b654e290693c79d46b708c39447bee5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003c8b8(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 local_30;
  int iStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  iStack_2c = *param_1 + 0x10;
  iStack_14 = param_1[3] + 0xc;
  uVar2 = *(uint *)(param_2 + 0x10);
  local_30 = 2;
  uStack_1c = 1;
  uStack_18 = 1;
  if (uVar2 == 0x18) {
    uStack_20 = 3;
  }
  else if (uVar2 < 0x19) {
    if (uVar2 == 8) {
      uStack_20 = 1;
    }
    else {
      if (uVar2 != 0x10) {
        return;
      }
      uStack_20 = 2;
    }
  }
  else {
    if (uVar2 != 0x20) {
      return;
    }
    uStack_20 = 4;
  }
  param_1[0xe] = 4;
  uStack_24 = uStack_20;
  iVar1 = FUN_ram_4003ac8e();
  param_1[10] = iVar1;
  if (iVar1 != 0) {
    FUN_ram_4003ac26(iVar1,&LAB_ram_4003c276,param_1 + 10);
    FUN_ram_4003ac36(param_1[10],&local_30);
    FUN_ram_4003ae92(param_1[10],param_1[0xb],param_1[0xc],param_1[0xd],2);
    FUN_ram_4003afac(param_1[10]);
    fence();
    fence();
    *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) | 0x1000000;
    fence();
    *(undefined4 *)(*param_1 + 0x2c) = 0;
    FUN_ram_4003c22a(param_1);
    fence();
    fence();
    *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xfffffffc | 1;
    FUN_ram_4003c214(param_1);
    fence();
    fence();
    puVar3 = (uint *)*param_1;
    *puVar3 = *(uint *)*param_1 | 2;
    fence();
    fence();
    *(uint *)(*param_1 + 0x1c) = puVar3[7] | 8;
  }
  return;
}


/* NanoCore 1.12, address 0x4003c9c6.
 * REA evidence: ev_edb340a566c3497b7989067316fea0a5f0cec242c8b388c55038fc2b5fcab706
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003c9c6(int *param_1)

{
  uint *puVar1;
  
  fence();
  fence();
  puVar1 = (uint *)*param_1;
  puVar1[7] = *(uint *)(*param_1 + 0x1c) & 0xffffff7f;
  fence();
  fence();
  *(uint *)*param_1 = *puVar1 & 0xfffffffb;
  FUN_ram_4003abb4(param_1[5]);
  FUN_ram_4003ac5a(param_1[5]);
  param_1[4] = 0;
  return;
}


/* NanoCore 1.12, address 0x4003ca10.
 * REA evidence: ev_ccb2168bc6db3df4f11a1fed9040a0cce453fe49715ffc30ec3e718550f2e1da
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003ca10(int *param_1)

{
  uint *puVar1;
  
  fence();
  fence();
  puVar1 = (uint *)*param_1;
  puVar1[7] = *(uint *)(*param_1 + 0x1c) & 0xfffffff7;
  fence();
  fence();
  *(uint *)*param_1 = *puVar1 & 0xfffffffd;
  FUN_ram_4003abb4(param_1[10]);
  FUN_ram_4003ac5a(param_1[10]);
  return;
}


/* NanoCore 1.12, address 0x4003ca52.
 * REA evidence: ev_3ce9bb2de120bcc7a170f2924f922166883c8451de44828c1c42fa092b4cefb5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003ca52(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  *(undefined4 *)(param_1 + 0x40) = param_3;
  return;
}


/* NanoCore 1.12, address 0x4003ca58.
 * REA evidence: ev_b97c49297bc7e6d4ef4ed9a80e066bf9501334ca084e3bb9a0c967bc494490ec
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003ca58(uint param_1)

{
  if (param_1 < 4) {
    return param_1 * 0x10000 + 0x10400000;
  }
  return 0;
}


/* NanoCore 1.12, address 0x4003ca6c.
 * REA evidence: ev_f9ee828da7cb37ea35a33e4be96c9249940650be6a9040ed3a5476ec73d2b6df
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003ca6c(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  fence();
  uVar2 = *(uint *)(param_1 + 8) & 0xffffd7ff;
  if (param_2 == 1) {
    uVar1 = 0x2000;
  }
  else {
    if (param_2 == 2) goto LAB_ram_4003ca86;
    uVar1 = 0x800;
  }
  uVar2 = uVar2 | uVar1;
LAB_ram_4003ca86:
  fence();
  *(uint *)(param_1 + 8) = uVar2;
  return;
}


/* NanoCore 1.12, address 0x4003ca9c.
 * REA evidence: ev_0f54679f677076658e5f80f1de57aead79d22e74dc26e7369c31883441f86edb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003ca9c(int param_1,int param_2)

{
  fence();
  fence();
  *(uint *)(param_1 + 8) = param_2 << 7 | *(uint *)(param_1 + 8) & 0xffffff7f;
  return;
}


/* NanoCore 1.12, address 0x4003cab4.
 * REA evidence: ev_28f3b8a46792e50a2c847d394a1abf0b23817a4ec58176d1b71f1e9a218b5686
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003cab4(int param_1,int param_2)

{
  fence();
  fence();
  *(uint *)(param_1 + 8) = param_2 << 6 | *(uint *)(param_1 + 8) & 0xffffffbf;
  return;
}


/* NanoCore 1.12, address 0x4003cacc.
 * REA evidence: ev_1063b9b303003e5e37ec0b33ba63a219ce2204c1a48a02b0504c269a385e46d6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003cacc(int param_1,int param_2)

{
  fence();
  fence();
  *(uint *)(param_1 + 8) = param_2 << 8 | *(uint *)(param_1 + 8) & 0xfffffeff;
  return;
}


/* NanoCore 1.12, address 0x4003cae4.
 * REA evidence: ev_44d7a1a10a535b7dc170ef868e9852316cf94d2cf7773ea2f9d1c2937614cbae
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003cae4(int param_1)

{
  fence();
  fence();
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x80008000;
  return;
}


/* NanoCore 1.12, address 0x4003cafa.
 * REA evidence: ev_766bb81bf35d8d6bf2bf283e712b3cc7c93f1afdd045f38c015c6ce78201f7a0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003cafa(int param_1,uint param_2)

{
  fence();
  fence();
  *(uint *)(param_1 + 0x10) = ~param_2 & *(uint *)(param_1 + 0x10);
  return;
}


/* NanoCore 1.12, address 0x4003cb10.
 * REA evidence: ev_18ba3108a73a2c0ece415748a8d646bed4c4aeec45081db10bdd4537ae3f5ed5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003cb10(int param_1)

{
  fence();
  fence();
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x100;
  return;
}


/* NanoCore 1.12, address 0x4003cb24.
 * REA evidence: ev_a25196e15ce0739ac663137e8377ab191fe50799a9289e420852b366f1a37603
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003cb24(int param_1)

{
  fence();
  fence();
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffeff;
  return;
}


/* NanoCore 1.12, address 0x4003cb38.
 * REA evidence: ev_67b5fe8648a7b239ff3e8f64fcaaee554525650b0a9f7a385d1db4f9aa9b7d32
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003cb38(int param_1)

{
  fence();
  fence();
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x1000000;
  return;
}


/* NanoCore 1.12, address 0x4003cb4e.
 * REA evidence: ev_540d7a5a557ec1072250bf8703a0c23b46c8280d990571ea85f13df86fd92c83
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003cb4e(int param_1)

{
  fence();
  fence();
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfeffffff;
  return;
}


/* NanoCore 1.12, address 0x4003cb66.
 * REA evidence: ev_ae1328c4521b1ef3c0d5ebe07a66fe39fb4860b65c584cf758acb68b546c47c8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003cb66(int param_1)

{
  fence();
  if ((*(uint *)(param_1 + 0x38) & 0x20000000) == 0) {
    return 1 - ((int)(*(uint *)(param_1 + 0x38) << 3) >> 0x1f);
  }
  return 4;
}


/* NanoCore 1.12, address 0x4003cb84.
 * REA evidence: ev_4152f93f6585c9de8f8ecf6ef0dbc8118999675ead69c105d45a2f164083cbb3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4003cb84(int param_1)

{
  fence();
  return (*(uint *)(param_1 + 0x1c) & 0xffffff) >> 0x10;
}


/* NanoCore 1.12, address 0x4003cb92.
 * REA evidence: ev_daa9747335886f336d41d2b415bcbf3e61bb5966b79fd8e84d267a09bc304962
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003cb92(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  for (iVar1 = 0; param_3 != iVar1; iVar1 = iVar1 + 1) {
    fence();
    *(undefined1 *)(param_1 + 0x200) = *(undefined1 *)(param_2 + iVar1);
  }
  return;
}


/* NanoCore 1.12, address 0x4003cbae.
 * REA evidence: ev_c75c1aa9b894037121f0a27216ff9573ad9fe04efdf19b035cb1ede3aa0e3a9f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003cbae(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  for (iVar1 = 0; param_3 != iVar1; iVar1 = iVar1 + 1) {
    fence();
    *(undefined1 *)(param_2 + iVar1) = *(undefined1 *)(param_1 + 0x300);
  }
  return;
}


/* NanoCore 1.12, address 0x4003cbca.
 * REA evidence: ev_ff79ebc860bffa6d495dbe36c94535ca34b487b2bbde5d73167c3d2a2c328d44
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003cbca(int param_1)

{
  fence();
  fence();
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x80000000;
  return;
}


/* NanoCore 1.12, address 0x4003cbe0.
 * REA evidence: ev_5ad55a3e2d600895dd2fccf68823fd9ec7259d196e3a11f1b6fb8114cd0099d9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4003cbe0(int param_1)

{
  fence();
  if (-1 < (int)*(uint *)(param_1 + 0x40)) {
    return (*(uint *)(param_1 + 0x40) & 0x3ffffff) >> 0x19;
  }
  return 0;
}


/* NanoCore 1.12, address 0x4003cbf8.
 * REA evidence: ev_5502a79d7b08cc7a1e56050b4c8b7e5f374d6ed4a2219d8895342a66a613b13c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4003cbf8(int param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_1 + 0x40);
  fence();
  fence();
  *puVar1 = *puVar1 & 0xffc0ffff | 0x2000000;
  FUN_ram_4004004c(1);
  fence();
  return (*puVar1 >> 0x19 ^ 1) & 1;
}


/* NanoCore 1.12, address 0x4003cccc.
 * REA evidence: ev_f44e512125c4c50fbe66ccb722dbe10a2eb1f08ebd73029181bc528e3b4c1478
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003cccc(undefined1 *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iStack_14;
  
  uVar1 = 0;
  while ((iVar2 = FUN_ram_4003ab3e(param_1,&iStack_14), iVar2 != 0 && (iStack_14 != 0))) {
    uVar1 = uVar1 + 1;
    FUN_ram_4004004c(1);
    if (param_2 < uVar1) {
      FUN_ram_4003a85a(*param_1);
      return 0xffffff8c;
    }
  }
  return 0;
}


/* NanoCore 1.12, address 0x4003cd12.
 * REA evidence: ev_920fe600723abdb26a7a5b764589038573252f4bc8d4b7375db8ba0d20a5affe
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003cd12(int param_1,uint param_2,uint param_3,int param_4)

{
  fence();
  fence();
  *(uint *)(param_1 + 0x30) = param_4 + param_2 & 0xffffff | *(uint *)(param_1 + 0x30) & 0xff000000;
  fence();
  fence();
  *(uint *)(param_1 + 0x34) = param_2 & 0xffffff | *(uint *)(param_1 + 0x34) & 0xff000000;
  fence();
  fence();
  *(uint *)(param_1 + 0x38) = param_3 & 0xffffff | *(uint *)(param_1 + 0x38) & 0xf0000000;
  return;
}


/* NanoCore 1.12, address 0x4003cd74.
 * REA evidence: ev_876f740166550a29169414c3e427fbdf97e987f9eb3c29d9c7669bdefe1d0a5c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4003cd74(uint *param_1)

{
  bool bVar1;
  
  if (param_1[2] < 0x41) {
    bVar1 = false;
  }
  else if ((*param_1 == 0) || (bVar1 = false, (*param_1 & 7) == 0)) {
    bVar1 = true;
    if (param_1[1] != 0) {
      bVar1 = (param_1[1] & 7) == 0;
    }
  }
  return bVar1;
}


/* NanoCore 1.12, address 0x4003cda0.
 * REA evidence: ev_2bc796285b097b5de69ff242f27db8eca8bb931361558bed11178fbf5950acf1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003cda0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  fence();
  if ((uVar1 & 0xf00) != 0) {
    FUN_ram_4003defe();
  }
  iVar2 = FUN_ram_4003cb84(param_1);
  fence();
  if ((*(uint *)(param_1 + 0x1c) & 0xff) != 0 || iVar2 != 0) {
    FUN_ram_4003defe(param_1);
    FUN_ram_4003cae4(param_1);
  }
  fence();
  *(uint *)(param_1 + 0x14) = uVar1;
  return;
}


/* NanoCore 1.12, address 0x4003cdfe.
 * REA evidence: ev_b16d88f1e917f4c119f6f6f5b4a4c26c6d1fd5e2d5f7135a14777a3b442c2ab4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003cdfe(int param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_1 + 0x40);
  fence();
  fence();
  *puVar1 = *puVar1 & 0xfffffffc | 2;
  fence();
  fence();
  *puVar1 = *puVar1 | 0x20;
  fence();
  fence();
  *puVar1 = *puVar1 | 0x40;
  return;
}


/* NanoCore 1.12, address 0x4003ce36.
 * REA evidence: ev_c150c47185669d3a545652646c42f830424290d1afa8f3e779301922c366ad66
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003ce36(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  
  iVar1 = FUN_ram_4003ca58(*param_1);
  if (((*param_2 != 0) || (iVar2 = -0x16, param_2[1] != 0)) &&
     ((param_2[2] != 0 || (iVar2 = -0x16, param_2[3] != 0)))) {
    FUN_ram_4003cae4(iVar1);
    iVar3 = *param_2;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_2[3];
      iVar9 = param_2[1];
      puVar7 = (uint *)(iVar1 + 0x40);
      uVar6 = iVar2 + 7U >> 3;
      if (iVar9 != 0) {
        iVar8 = param_2[2];
        fence();
        fence();
        *puVar7 = *puVar7 | 0x2000000;
        if (4 < uVar6) {
          uVar6 = 4;
          iVar2 = 0x20;
        }
        uVar4 = 0;
        for (uVar5 = 0; uVar5 != uVar6; uVar5 = uVar5 + 1) {
          uVar4 = uVar4 | (uint)*(byte *)(iVar3 + uVar5) << ((uVar5 & 3) << 3);
        }
        fence();
        *(uint *)(iVar1 + 0x48) = uVar4;
        fence();
        fence();
        *puVar7 = iVar8 << 0x10 | *puVar7 | iVar2 << 8 | 0x80000000;
        uVar6 = iVar8 + 7U >> 3;
        if (4 < uVar6) {
          uVar6 = 4;
          iVar8 = 0x20;
        }
        do {
          iVar2 = FUN_ram_4003cbe0(iVar1);
        } while (iVar2 == 0);
        do {
          iVar2 = FUN_ram_4003cbf8(iVar1);
        } while (iVar2 == 0);
        uVar4 = *(uint *)(iVar1 + 0x4c);
        fence();
        for (uVar5 = 0; uVar5 != uVar6; uVar5 = uVar5 + 1) {
          *(char *)(iVar9 + uVar5) = (char)(uVar4 >> ((uVar5 & 3) << 3));
        }
        return iVar8;
      }
      fence();
      fence();
      *puVar7 = *puVar7 | 0x2000000;
      if (4 < uVar6) {
        uVar6 = 4;
        iVar2 = 0x20;
      }
      uVar4 = 0;
      for (uVar5 = 0; uVar5 != uVar6; uVar5 = uVar5 + 1) {
        uVar4 = uVar4 | (uint)*(byte *)(iVar3 + uVar5) << ((uVar5 & 3) << 3);
      }
      fence();
      *(uint *)(iVar1 + 0x48) = uVar4;
      fence();
      fence();
      *puVar7 = iVar2 << 8 | *puVar7 | 0x80000000;
      do {
        iVar3 = FUN_ram_4003cbe0(iVar1);
      } while (iVar3 == 0);
      do {
        fence();
        fence();
        *puVar7 = *puVar7 & 0xffffc0ff | 0x2000000;
        FUN_ram_4004004c(1);
        fence();
      } while ((*puVar7 & 0x2000000) != 0);
    }
    iVar3 = param_2[1];
    if (iVar3 != 0) {
      iVar2 = param_2[2];
      puVar7 = (uint *)(iVar1 + 0x40);
      fence();
      fence();
      *puVar7 = *puVar7 | 0x2000000;
      uVar6 = iVar2 + 7U >> 3;
      if (4 < uVar6) {
        uVar6 = 4;
        iVar2 = 0x20;
      }
      fence();
      fence();
      *puVar7 = iVar2 << 0x10 | *puVar7 | 0x80000000;
      do {
        iVar9 = FUN_ram_4003cbe0(iVar1);
      } while (iVar9 == 0);
      do {
        iVar9 = FUN_ram_4003cbf8(iVar1);
      } while (iVar9 == 0);
      uVar4 = *(uint *)(iVar1 + 0x4c);
      fence();
      for (uVar5 = 0; uVar5 != uVar6; uVar5 = uVar5 + 1) {
        *(char *)(iVar3 + uVar5) = (char)(uVar4 >> ((uVar5 & 3) << 3));
      }
    }
  }
  return iVar2;
}


