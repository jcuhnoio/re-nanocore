/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40022000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40022018.
 * REA evidence: ev_753e0bd8824744f729167f23313ccc637531550f74ea0db0ed363ea2a06819b0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40022018(void)

{
  return DAT_ram_3006a4d0 != '\0';
}


/* NanoCore 1.10, address 0x40022026.
 * REA evidence: ev_5af188190aa3de8d7ab102f5ade4f11460382bb484649b9d0d2356a9d237d6c9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40022026(int param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = param_1 != 0;
  iVar2 = 0;
  if ((bool)DAT_ram_3006a4d0 != bVar1) {
    DAT_ram_3006a4d0 = bVar1;
    iVar2 = FUN_ram_40021e5e(1,bVar1);
    thunk_FUN_ram_4002ac46(bVar1);
    iVar2 = -(uint)(iVar2 != 0);
  }
  return iVar2;
}


/* NanoCore 1.10, address 0x4002206a.
 * REA evidence: ev_f1407f4480b349945baaf4e8b52be86234ce311e213e774ff2d4dff981059772
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4002206a(void)

{
  return DAT_ram_3006a520 != '\0';
}


/* NanoCore 1.10, address 0x40022078.
 * REA evidence: ev_7e13e1795a648d8a22d45e7fe6ffbb33ef81ca1fe29bdc6e06e4b5b8ade2a709
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40022078(int param_1)

{
  int iVar1;
  
  if ((bool)DAT_ram_3006a520 != (param_1 != 0)) {
    DAT_ram_3006a520 = param_1 != 0;
    iVar1 = FUN_ram_40021e5e(5);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}


/* NanoCore 1.10, address 0x400220ac.
 * REA evidence: ev_4809bb60642c044803281403825dac645d4aaa31a0d84eeda32053738d8cde87
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

byte FUN_ram_400220ac(void)

{
  byte bVar1;
  
  bVar1 = DAT_ram_3006a4d2;
  if (0x10 < DAT_ram_3006a4d2) {
    bVar1 = 0x10;
  }
  return bVar1;
}


/* NanoCore 1.10, address 0x400220be.
 * REA evidence: ev_e3cf3b9ded0321f2c888325a304ae12df5365a8aaee0c3a01bac9ba94ede5a10
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400220be(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0x10;
  if (((int)param_1 < 0x11) && (uVar2 = param_1, (int)param_1 < 0)) {
    uVar2 = 0;
  }
  if ((uint)DAT_ram_3006a4d2 != (uVar2 & 0xff)) {
    DAT_ram_3006a4d2 = (byte)uVar2;
    iVar1 = FUN_ram_40021e5e(0xf,(int)(char)DAT_ram_3006a4d2);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}


/* NanoCore 1.10, address 0x40022106.
 * REA evidence: ev_fb9e31655b2d5d12203eb0ffabdf9b4664df0d3e29970dae8181c20d10c18d8a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40022106(void)

{
  return (int)DAT_ram_3006a4c8;
}


/* NanoCore 1.10, address 0x40022110.
 * REA evidence: ev_01dfebef1592d26dda594a8dba7ee40c5388a484ca0c37e13e3286294e59b329
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40022110(void)

{
  return _DAT_ram_3006a4cc;
}


/* NanoCore 1.10, address 0x4002211a.
 * REA evidence: ev_d4ec06b596135ab35d772b152ff5202f8cacc5151ae2c020be8ecbd6534151c1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4002211a(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (0x14 < param_1) {
    param_1 = 0x14;
  }
  if (param_1 < -0x14) {
    param_1 = -0x14;
  }
  uVar2 = FUN_ram_40000d54(DAT_ram_400930a4,(float)param_1 / DAT_ram_400930bc);
  iVar1 = 0;
  if (DAT_ram_3006a4c8 != (char)param_1) {
    DAT_ram_3006a4c8 = (char)param_1;
    _DAT_ram_3006a4cc = uVar2;
    iVar1 = FUN_ram_40021e5e(2);
    iVar1 = -(uint)(iVar1 != 0);
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x40022186.
 * REA evidence: ev_169dddc9ea88521aa8e3e870e18a59af685fd7b37f7ab90d82d7ab11f9baae31
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40022186(void)

{
  return DAT_ram_3006a51d;
}


/* NanoCore 1.10, address 0x40022190.
 * REA evidence: ev_9d28e3b77ca8f4f54a5441ad140c7e5473c2de1b07500c9fa2ee45c112726abf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40022190(void)

{
  return (int)_DAT_ram_3006a51e;
}


/* NanoCore 1.10, address 0x4002219a.
 * REA evidence: ev_36ef93931ff404721e39243566aba51df869ab41c1ee59261b8118f6e3fd96ca
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4002219a(uint param_1)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  
  uVar1 = 100;
  if (((int)param_1 < 0x65) && (uVar1 = param_1, (int)param_1 < 0)) {
    uVar1 = 0;
  }
  uVar2 = FUN_ram_40021296(uVar1);
  iVar3 = 0;
  if ((uint)DAT_ram_3006a51d != (uVar1 & 0xff)) {
    DAT_ram_3006a51d = (byte)uVar1;
    _DAT_ram_3006a51e = uVar2;
    iVar3 = FUN_ram_40021e5e(3,(int)(char)DAT_ram_3006a51d);
    iVar3 = -(uint)(iVar3 != 0);
  }
  return iVar3;
}


/* NanoCore 1.10, address 0x400221fc.
 * REA evidence: ev_c990aa415067e340c91234739449254d26af301aea5b5c1c3bbc0dd5248de97b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_400221fc(void)

{
  return DAT_ram_3006a4c4;
}


/* NanoCore 1.10, address 0x40022206.
 * REA evidence: ev_bb1ce2b7089d96adec58138b7f7e6ed1d3feb3bd3527005a89718f5eabc44b73
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40022206(void)

{
  return (int)_DAT_ram_3006a4c6;
}


/* NanoCore 1.10, address 0x40022210.
 * REA evidence: ev_8cf4bb5af6bcbea2fd78c8760843cb791a459e1599540bcacbedeec64a1be809
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40022210(uint param_1)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  
  uVar1 = 100;
  if (((int)param_1 < 0x65) && (uVar1 = param_1, (int)param_1 < 0)) {
    uVar1 = 0;
  }
  uVar2 = FUN_ram_40021296(uVar1);
  iVar3 = 0;
  if ((uint)DAT_ram_3006a4c4 != (uVar1 & 0xff)) {
    DAT_ram_3006a4c4 = (byte)uVar1;
    _DAT_ram_3006a4c6 = uVar2;
    iVar3 = FUN_ram_40021e5e(4,(int)(char)DAT_ram_3006a4c4);
    iVar3 = -(uint)(iVar3 != 0);
  }
  return iVar3;
}


/* NanoCore 1.10, address 0x40022272.
 * REA evidence: ev_316600e33da9e0a18797c5d24b37ee1032ea6adf131d2f7cd195cd2451b639c8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40022272(void)

{
  return DAT_ram_3006a4d1;
}


/* NanoCore 1.10, address 0x4002227c.
 * REA evidence: ev_bbe6b84d19ab15063dc2f75ec5d7a27b4749d5a96d35e982ed5215f7e7be6d4e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4002227c(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 100;
  if (((int)param_1 < 0x65) && (uVar2 = param_1, (int)param_1 < 0)) {
    uVar2 = 0;
  }
  if ((uint)DAT_ram_3006a4d1 != (uVar2 & 0xff)) {
    DAT_ram_3006a4d1 = (byte)uVar2;
    iVar1 = FUN_ram_40021e5e(0x10,(int)(char)DAT_ram_3006a4d1);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}


/* NanoCore 1.10, address 0x400222c8.
 * REA evidence: ev_e1a44d83ddce19727e308f78b9093fba4609e38acb00567574277cded339e316
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400222c8(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_1 != (undefined4 *)0x0) && (uVar1 = 0xffffffff, DAT_ram_3006a51c != '\0')) {
    *param_1 = _DAT_ram_3006a518;
    param_1[1] = _DAT_ram_3006a514;
    uVar1 = 0;
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x400222f2.
 * REA evidence: ev_6361bca4fbe4acf844e7068199d3c298d139ad702e8ed57056310e4b30ecf6fd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400222f2(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  iVar2 = *param_1;
  iVar3 = param_1[1];
  if (((DAT_ram_3006a51c == '\0') || (_DAT_ram_3006a518 != iVar2)) ||
     (uVar1 = 0, _DAT_ram_3006a514 != iVar3)) {
    uStack_1a = (undefined1)((uint)iVar2 >> 8);
    uStack_19 = (undefined1)((uint)iVar2 >> 0x10);
    uStack_16 = (undefined1)((uint)iVar3 >> 8);
    uStack_15 = (undefined1)((uint)iVar3 >> 0x10);
    uStack_28 = 0x807060e;
    uStack_24 = 0xc0b0a09;
    uStack_1b = (undefined1)iVar2;
    uStack_17 = (undefined1)iVar3;
    uStack_1c = 0;
    uStack_18 = (undefined1)((uint)iVar2 >> 0x18);
    uStack_14 = (undefined1)((uint)iVar3 >> 0x18);
    uStack_20 = 0xe0d;
    uStack_13 = 1;
    iVar2 = FUN_ram_40021d72(&uStack_28,&uStack_1c,10);
    if (iVar2 == 0) {
      _DAT_ram_3006a518 = *param_1;
      _DAT_ram_3006a514 = param_1[1];
      DAT_ram_3006a51c = '\x01';
      uVar1 = 0;
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x400223bc.
 * REA evidence: ev_acf66289cc6b7f7b7e0256467d444942f41ede1b80ad461144c0cbdf6130bca1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400223bc(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_ram_3006a51c == '\0') {
    _DAT_ram_3006a518 = 0;
    _DAT_ram_3006a514 = 0;
    return 0;
  }
  iVar1 = FUN_ram_40021e5e(0xe,0);
  if (iVar1 == 0) {
    DAT_ram_3006a51c = '\0';
    _DAT_ram_3006a518 = 0;
    _DAT_ram_3006a514 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x400223da.
 * REA evidence: ev_8997972c2f804c15f974c9ce83363ee7b02e74d3e2b7deb8655c6eb0a560fb7b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400223da(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_40021e5e(0xe,0);
  if (iVar1 == 0) {
    DAT_ram_3006a51c = 0;
    _DAT_ram_3006a518 = 0;
    _DAT_ram_3006a514 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x4002240a.
 * REA evidence: ev_b9badf72cb7584bc9e42f2b42021638a2c7247c3927dc509c58d6b6b2456b036
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002240a(undefined4 *param_1,uint param_2,uint param_3,uint param_4)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  ulonglong uVar4;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    uVar4 = (ulonglong)(uint)DAT_ram_4009281c;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    *(ulonglong *)(param_1 + 4) = uVar4;
    fVar1 = DAT_ram_4009281c;
    if (param_2 == 0) {
      param_2 = 0xac44;
    }
    fVar3 = DAT_ram_4009281c;
    if (param_3 != 0) {
      lVar2 = (ulonglong)param_2 * (ulonglong)param_3 + 999;
      FUN_ram_40003bac((int)lVar2,(int)((ulonglong)lVar2 >> 0x20),1000,0);
      fVar3 = (float)FUN_ram_4000376c();
      fVar3 = fVar1 / fVar3;
    }
    *(ulonglong *)(param_1 + 5) = (ulonglong)(uint)fVar3;
    if (param_4 != 0) {
      lVar2 = (ulonglong)param_2 * (ulonglong)param_4 + 999;
      FUN_ram_40003bac((int)lVar2,(int)((ulonglong)lVar2 >> 0x20),1000,0);
      fVar3 = (float)FUN_ram_4000376c();
      fVar1 = fVar1 / fVar3;
    }
    *(ulonglong *)(param_1 + 6) = (ulonglong)(uint)fVar1;
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x400224a8.
 * REA evidence: ev_a2640a8643b48610b52b79d8a19e25eb963c20979c63996b85fc9c5edd73d3dd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400224a8(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1 + 1;
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    *param_1 = iVar1;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x400224c0.
 * REA evidence: ev_ab075fff2e9a9f53ed71be32e1a963b3e0f86f47acc29ebdab1b618953d52d7d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400224c0(int *param_1,int param_2)

{
  if (((param_1 != (int *)0x0) && (param_2 != 0)) && (*param_1 == param_2)) {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return;
}


/* NanoCore 1.10, address 0x400224d0.
 * REA evidence: ev_09552b08732efbc8fff830cd0d1a2729ea682b77d691519d7bebf1b47271515a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400224d0(int *param_1,int param_2)

{
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    *param_1 = param_2;
    *(undefined1 *)(param_1 + 3) = 1;
    *(undefined1 *)((int)param_1 + 0xd) = 2;
    param_1[4] = 0;
    param_1[1] = param_2;
  }
  return;
}


/* NanoCore 1.10, address 0x400224ea.
 * REA evidence: ev_fe6fb3b5e35f6a2b37f0016c3ff5fd71fec80d3282a645f3f1b031d788939c76
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400224ea(undefined4 *param_1)

{
  ulonglong uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = (ulonglong)DAT_ram_4009281c;
    *(undefined1 *)(param_1 + 3) = 0;
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    *(ulonglong *)(param_1 + 4) = uVar1;
    param_1[2] = *param_1;
  }
  return;
}


/* NanoCore 1.10, address 0x40022504.
 * REA evidence: ev_aed5925962e522f56b805d1dbdd7c30da91967150bcfb43a5c85e1c4e5747cbe
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40022504(int param_1)

{
  bool bVar1;
  
  if (param_1 != 0) {
    bVar1 = true;
    if (*(char *)(param_1 + 0xd) == '\x02') {
      bVar1 = *(char *)(param_1 + 0xc) == '\0';
    }
    return bVar1;
  }
  return true;
}


/* NanoCore 1.10, address 0x40022528.
 * REA evidence: ev_c22da8f60e1d59c184ed4add5d44a0f9bc174e44649c89805453053c2e7bd1e1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40022528(int *param_1,float *param_2,float *param_3,int param_4)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  undefined4 uVar4;
  char cVar5;
  float *pfVar6;
  int iVar7;
  float fVar8;
  ulonglong uVar9;
  
  fVar1 = DAT_ram_4009281c;
  if ((param_1 == (int *)0x0) || (param_4 == 0)) {
    return 0;
  }
  iVar7 = *param_1;
  cVar5 = *(char *)((int)param_1 + 0xd);
  if ((char)param_1[3] == '\0') {
    if (cVar5 == '\0') {
      if (param_1[2] == iVar7) {
        return 0;
      }
      param_1[2] = iVar7;
      return 2;
    }
LAB_ram_400225aa:
    uVar9 = *(ulonglong *)(param_1 + 4);
    if ((char)param_1[3] == '\0') {
      if ((byte)(cVar5 - 1U) < 2) {
        cVar5 = '\x03';
      }
    }
    else if ((cVar5 == '\0') || (cVar5 == '\x03')) {
      cVar5 = '\x01';
    }
    iVar2 = 0;
    uVar4 = 0;
    pfVar3 = param_3;
    pfVar6 = param_2;
    do {
      fVar8 = (float)uVar9;
      if (param_2 == (float *)0x0) {
        if (param_3 != (float *)0x0) goto LAB_ram_400225f6;
      }
      else {
        *pfVar6 = *pfVar6 * fVar8;
        if ((param_3 != (float *)0x0) && (param_2 != param_3)) {
LAB_ram_400225f6:
          *pfVar3 = *pfVar3 * fVar8;
        }
      }
      if (cVar5 == '\x01') {
        fVar8 = fVar8 - (float)*(undefined8 *)(param_1 + 5);
        uVar9 = (ulonglong)(uint)fVar8;
        if (fVar8 <= 0.0) {
          uVar9 = 0;
          param_1[1] = iVar7;
          cVar5 = '\x02';
          uVar4 = 1;
        }
      }
      else if ((cVar5 == '\x03') &&
              (fVar8 = fVar8 + (float)*(undefined8 *)(param_1 + 6), uVar9 = (ulonglong)(uint)fVar8,
              fVar1 <= fVar8)) {
        uVar9 = (ulonglong)(uint)fVar1;
        param_1[2] = iVar7;
        cVar5 = '\0';
        uVar4 = 2;
      }
      iVar2 = iVar2 + 1;
      pfVar3 = pfVar3 + 1;
      pfVar6 = pfVar6 + 1;
      if (param_4 == iVar2) {
        *(ulonglong *)(param_1 + 4) = uVar9;
        *(char *)((int)param_1 + 0xd) = cVar5;
        return uVar4;
      }
    } while( true );
  }
  if (cVar5 != '\x02') goto LAB_ram_400225aa;
  if (param_2 == (float *)0x0) {
    if (param_3 == (float *)0x0) goto LAB_ram_4002259c;
  }
  else {
    pfVar3 = memset(param_2,0,param_4 << 2);
    if ((param_3 == (float *)0x0) || (pfVar3 == param_3)) goto LAB_ram_4002259c;
  }
  memset(param_3,0,param_4 << 2);
LAB_ram_4002259c:
  if (param_1[1] == iVar7) {
    return 0;
  }
  param_1[1] = iVar7;
  return 1;
}


/* NanoCore 1.10, address 0x4002265a.
 * REA evidence: ev_b3a3317b01a8a18d02afe59cb9578e8bcdd4c8b72d2ae605ac2971bc86a2e3e5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002265a(void)

{
  DAT_ram_3006a52c = 0;
  DAT_ram_3006a529 = 0;
  DAT_ram_3006a528 = 0;
  DAT_ram_3006a52a = 0;
  return;
}


/* NanoCore 1.10, address 0x4002267c.
 * REA evidence: ev_81c95702dc9ef9fed9380eeda565d32524e3c45b2c95bea39fe2602169d6769d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002267c(void)

{
  FUN_ram_400002f4();
  DAT_ram_3006a535 = 0;
  DAT_ram_3006a534 = 0;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.10, address 0x4002269c.
 * REA evidence: ev_0b2b0097fa029b61d4b4feddb7fd255c1dd2ea0b3aa0db873a6e762b210b7916
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002269c(undefined4 param_1)

{
  FUN_ram_400002f4();
  _DAT_ram_3006a524 = param_1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.10, address 0x400226ba.
 * REA evidence: ev_1ba6bff79746187026c49ea033a7ac9977931f6e8214032e65db821e06219a4a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400226ba(void)

{
  int iVar1;
  
  FUN_ram_400002f4();
  if (DAT_ram_3006a52b == '\0') {
    DAT_ram_3006a52b = 1;
    FUN_ram_400002fa();
    iVar1 = FUN_ram_400064c6(s_Fbat_off_ram_400936eb + 1,FUN_ram_40022874,0,0x400,0x1a,10);
    if (iVar1 != 0) {
      FUN_ram_40006640();
      return;
    }
    FUN_ram_400002f4();
    DAT_ram_3006a52b = '\0';
  }
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.10, address 0x40022718.
 * REA evidence: ev_d98be248f1c78a32f5b6569145f7306d378622e90486477a1b51ae46ace3046b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40022718(int param_1)

{
  if (0xddd < param_1) {
    DAT_ram_3006a52a = 0;
    return true;
  }
  if (param_1 < 0xdac) {
    DAT_ram_3006a52a = 0;
    return false;
  }
  if (DAT_ram_3006a52a < 3) {
    DAT_ram_3006a52a = DAT_ram_3006a52a + 1;
  }
  return 2 < DAT_ram_3006a52a;
}


/* NanoCore 1.10, address 0x40022768.
 * REA evidence: ev_230d6eb6c459961764fd6b80a4d1f3af9e360a0c7f87d3f6db4155029e034f35
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40022768(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4003e68c();
  return iVar1 != 0;
}


/* NanoCore 1.10, address 0x4002277a.
 * REA evidence: ev_36b053690499d23eb4f9a801d80e8cc6215aa0338cdb46f8398aa0ef9aef5a60
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002277a(void)

{
  undefined4 uVar1;
  
  FUN_ram_400002f4();
  uVar1 = _DAT_ram_3006a524;
  FUN_ram_400002fa();
  return uVar1;
}


/* NanoCore 1.10, address 0x4002279a.
 * REA evidence: ev_ca9ddced486556d664ea47acf013d20f012cea3f5e0d401712c0417c0038cb1f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002279a(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4002277a();
  DAT_ram_3006a52c = 0;
  DAT_ram_3006a529 = 0;
  DAT_ram_3006a528 = 0;
  DAT_ram_3006a52a = 0;
  FUN_ram_4002267c();
  FUN_ram_4002269c(4);
  if (2 < iVar1 - 2U) {
    FUN_ram_4003ede4();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x400227ea.
 * REA evidence: ev_9be91743bcf898d7fadb7725a6a7f3c510b9a3794a4484f628ccf9b066f5368d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400227ea(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_4002277a();
  if (iVar1 != param_1) {
    if (1 < iVar1 - 2U) {
      FUN_ram_400002f4();
      _DAT_ram_3006a530 = _DAT_ram_3006a530 + 1;
      if (_DAT_ram_3006a530 == 0) {
        _DAT_ram_3006a530 = 1;
      }
      DAT_ram_3006a535 = 0;
      DAT_ram_3006a534 = 0;
      FUN_ram_400002fa();
    }
    FUN_ram_4002269c(param_1);
    if (1 < iVar1 - 2U) {
      FUN_ram_4003ede4();
    }
  }
  FUN_ram_400226ba();
  return;
}


/* NanoCore 1.10, address 0x40022854.
 * REA evidence: ev_cd942c7480c76812463e97c049524e338d95d457e0530fd2b9c8537795582473
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40022854(void)

{
  undefined4 uVar1;
  
  FUN_ram_400002f4();
  uVar1 = _DAT_ram_3006a530;
  FUN_ram_400002fa();
  return uVar1;
}


/* NanoCore 1.10, address 0x40022874.
 * REA evidence: ev_ffa45289bf27c157b9aa3649e3469d4f3fa0e0e33222a73a0d3acb31414b4d9c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40022874(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar3 = FUN_ram_40022854();
  bVar1 = false;
  uVar2 = 0;
  uVar6 = 0;
  do {
    iVar4 = FUN_ram_4002277a();
    iVar5 = FUN_ram_40022854();
    if (iVar3 != iVar5) {
      bVar1 = false;
      uVar2 = 0;
      uVar6 = 0;
    }
    if (iVar4 == 5) {
      DAT_ram_3006a52b = 0;
      return;
    }
    if ((iVar4 == 4) || (iVar3 = FUN_ram_40022768(), iVar3 != 0)) {
      iVar3 = FUN_ram_40022768();
      if (iVar3 == 0) {
        DAT_ram_3006a52b = 0;
        return;
      }
      goto LAB_ram_4002291c;
    }
    if (1 < iVar4 - 2U) {
      DAT_ram_3006a52b = 0;
      return;
    }
    if (bVar1) {
LAB_ram_4002293e:
      if ((DAT_ram_3006a534 != '\0') || (0xed7 < uVar2)) {
LAB_ram_40022968:
        iVar3 = FUN_ram_40022768();
        if (iVar3 == 0) {
          iVar3 = FUN_ram_4003ea28();
          if (iVar3 != 0) {
            iVar3 = FUN_ram_40022768();
            if (iVar3 == 0) {
              FUN_ram_4002269c();
              FUN_ram_4002265a();
            }
            else {
              FUN_ram_4002279a();
            }
          }
          FUN_ram_4002267c();
        }
        else {
LAB_ram_4002291c:
          FUN_ram_4002279a();
        }
        DAT_ram_3006a52b = 0;
        return;
      }
      bVar1 = true;
    }
    else {
      if (DAT_ram_3006a535 != '\0') {
        uVar2 = 0;
        goto LAB_ram_4002293e;
      }
      bVar1 = false;
      if (0x9c3 < uVar6) goto LAB_ram_40022968;
    }
    FUN_ram_400065d4(0x32);
    uVar6 = uVar6 + 0x32;
    iVar3 = iVar5;
    if (bVar1) {
      uVar2 = uVar2 + 0x32;
    }
  } while( true );
}


/* NanoCore 1.10, address 0x4002298e.
 * REA evidence: ev_1cf374274cb5d21f177e928ed683097891ecb13ce94ff2de29aed7272593b1af
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002298e(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_4002277a();
  if (iVar1 - 2U < 2) {
    FUN_ram_400002f4();
    if (_DAT_ram_3006a530 == param_1) {
      DAT_ram_3006a535 = 1;
      DAT_ram_3006a534 = 0;
    }
    FUN_ram_400002fa();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x400229da.
 * REA evidence: ev_31e9389a1d7be64c1210835f7c5ca23bc62073ae66732ddcafb3d1efeab267b1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400229da(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_4002277a();
  if (iVar1 - 2U < 2) {
    FUN_ram_400002f4();
    if ((_DAT_ram_3006a530 == param_1) && (DAT_ram_3006a535 != '\0')) {
      DAT_ram_3006a534 = 1;
    }
    FUN_ram_400002fa();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40022a28.
 * REA evidence: ev_86f9c6299e43b0dd7befb12ba5c25c24e8455d16db232cdf1c28eec84a1b1361
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40022a28(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_ram_400042fa();
  iVar2 = FUN_ram_40004362(param_1);
  while ((iVar3 = FUN_ram_4002277a(), iVar3 == 0 && (param_1 != 0))) {
    FUN_ram_400065d4(10);
    iVar3 = FUN_ram_400042fa();
    if (iVar2 <= iVar3 - iVar1) {
      FUN_ram_4002277a();
      return;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x40022a76.
 * REA evidence: ev_68646fed65120ed02e3c9083a1195fa0fd43a33629097d7b2568b00bbd81182a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40022a76(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  
  if (param_1 < 1) {
    return;
  }
  iVar2 = FUN_ram_4002277a();
  iVar3 = FUN_ram_40022768();
  if (iVar3 != 0) {
    if (iVar2 - 2U < 2) {
LAB_ram_40022aca:
      FUN_ram_4002279a();
      return;
    }
    if (iVar2 == 4) {
      if (param_1 < 0xdde) {
        DAT_ram_3006a528 = 0;
        return;
      }
      if ((DAT_ram_3006a528 < 5) &&
         (bVar5 = DAT_ram_3006a528 + 1, bVar1 = DAT_ram_3006a528 != 4, DAT_ram_3006a528 = bVar5,
         bVar1)) {
        return;
      }
    }
    else {
      if (param_1 < 0xdac) {
        DAT_ram_3006a52a = 0;
        if (DAT_ram_3006a52c < 5) {
          DAT_ram_3006a52c = DAT_ram_3006a52c + 1;
        }
        if (param_1 < 0xd7b) {
          if ((1 < DAT_ram_3006a529) ||
             (bVar5 = DAT_ram_3006a529 + 1, bVar1 = DAT_ram_3006a529 == 1, DAT_ram_3006a529 = bVar5,
             bVar1)) goto LAB_ram_40022aca;
        }
        else {
          DAT_ram_3006a529 = 0;
        }
        if (DAT_ram_3006a52c < 5) {
          DAT_ram_3006a52a = 0;
          return;
        }
        goto LAB_ram_40022aca;
      }
      DAT_ram_3006a52c = 0;
      DAT_ram_3006a529 = 0;
      DAT_ram_3006a528 = 0;
      if ((iVar2 != 5) && (iVar2 = FUN_ram_40022718(param_1), iVar2 == 0)) {
        return;
      }
    }
    FUN_ram_4002265a();
    FUN_ram_4002267c();
    uVar4 = 5;
    goto LAB_ram_40022b10;
  }
  if (iVar2 == 4) {
    FUN_ram_4002265a();
    if (param_1 < 0xdac) {
      uVar4 = 3;
      if (param_1 < 0xd7b) goto LAB_ram_40022bca;
LAB_ram_40022bc8:
      uVar4 = 2;
LAB_ram_40022bca:
      FUN_ram_400227ea(uVar4);
      return;
    }
  }
  else {
    if (iVar2 == 5) {
      FUN_ram_4002269c();
      iVar2 = 0;
      FUN_ram_4002265a();
    }
    else if (iVar2 - 2U < 2) {
      if (iVar2 == 2) {
        if (param_1 < 0xd7b) {
          if ((1 < DAT_ram_3006a529) ||
             (bVar5 = DAT_ram_3006a529 + 1, bVar1 = DAT_ram_3006a529 == 1, DAT_ram_3006a529 = bVar5,
             bVar1)) {
            FUN_ram_400227ea(3);
          }
        }
        else {
          DAT_ram_3006a529 = 0;
        }
      }
      FUN_ram_400226ba();
      return;
    }
    if (param_1 < 0xdac) {
      DAT_ram_3006a52a = 0;
      if (DAT_ram_3006a52c < 5) {
        DAT_ram_3006a52c = DAT_ram_3006a52c + 1;
      }
      if (param_1 < 0xd7b) {
        if ((1 < DAT_ram_3006a529) ||
           (bVar5 = DAT_ram_3006a529 + 1, bVar1 = DAT_ram_3006a529 == 1, DAT_ram_3006a529 = bVar5,
           bVar1)) {
          uVar4 = 3;
          goto LAB_ram_40022bca;
        }
      }
      else {
        DAT_ram_3006a529 = 0;
      }
      if (DAT_ram_3006a52c < 5) {
        DAT_ram_3006a52a = 0;
        return;
      }
      goto LAB_ram_40022bc8;
    }
    DAT_ram_3006a52c = 0;
    DAT_ram_3006a529 = 0;
    DAT_ram_3006a528 = 0;
    if ((iVar2 != 1) && (iVar2 = FUN_ram_40022718(param_1), iVar2 == 0)) {
      return;
    }
    FUN_ram_4002265a();
  }
  uVar4 = 1;
LAB_ram_40022b10:
  FUN_ram_4002269c(uVar4);
  return;
}


/* NanoCore 1.10, address 0x40022cde.
 * REA evidence: ev_11bce118f2c909c85e1aef08a219d6a12427841cd798f49fd6508301d3063009
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40022cde(int param_1,uint param_2,undefined4 *param_3)

{
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 8;
  }
  if ((param_1 != 0) && (param_2 != 0)) {
    if (8 < param_2) {
      param_2 = 8;
    }
    FUN_ram_4000305c(param_1,&DAT_ram_30046788,param_2);
    return 0;
  }
  return 0;
}


/* NanoCore 1.10, address 0x40022d0e.
 * REA evidence: ev_ec799abc5ffea17d5df5db341c07bd46a01db8d724bd6944fc78cdf47ce845d8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40022d0e(int param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte local_18 [8];
  char acStack_10 [8];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uVar4 = 0;
  do {
    bVar2 = 0xff;
    if ((uVar4 < param_2) && (param_1 != 0)) {
      bVar2 = *(byte *)(param_1 + uVar4);
    }
    local_18[uVar4] = bVar2;
    uVar4 = uVar4 + 1;
  } while (uVar4 != 8);
  acStack_10[0] = '\0';
  acStack_10[1] = '\0';
  acStack_10[2] = '\0';
  acStack_10[3] = '\0';
  acStack_10[4] = '\0';
  acStack_10[5] = '\0';
  acStack_10[6] = '\0';
  acStack_10[7] = '\0';
  iVar3 = 0;
  uVar4 = 0;
  do {
    uVar1 = (uint)local_18[iVar3];
    if ((uVar1 < 8) && (acStack_10[uVar1] == '\0')) {
      *(byte *)((int)&local_8 + uVar4) = local_18[iVar3];
      acStack_10[uVar1] = '\x01';
      uVar4 = uVar4 + 1 & 0xff;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 8);
  iVar3 = 0;
  do {
    if (7 < uVar4) {
      DAT_ram_30046788 = local_8;
      DAT_ram_3004678c = uStack_4;
      return 0;
    }
    bVar2 = (&DAT_ram_400936f4)[iVar3];
    if (acStack_10[bVar2] == '\0') {
      *(byte *)((int)&local_8 + uVar4) = bVar2;
      acStack_10[bVar2] = '\x01';
      uVar4 = uVar4 + 1 & 0xff;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 8);
  DAT_ram_30046788 = local_8;
  DAT_ram_3004678c = uStack_4;
  return 0;
}


/* NanoCore 1.10, address 0x40022dc0.
 * REA evidence: ev_2a2d1bc647aa53c19f26959c074d982d5fa0be7de2d024ca829e4761774cddde
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40022dc0(undefined1 param_1)

{
  undefined1 auStack_14 [16];
  
  auStack_14[0] = param_1;
  FUN_ram_400137c6(0x60,auStack_14,1);
  return;
}


/* NanoCore 1.10, address 0x40022dda.
 * REA evidence: ev_e8372087bed4af61ff5da5a5aa6a2b080f265da3c079f560a5d0a1f6f5a54db8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40022dda(int param_1,uint param_2)

{
  uint uVar1;
  undefined1 auStack_1c [24];
  uint uVar2;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if (10 < param_2) {
      param_2 = 10;
    }
    auStack_1c[0] = (undefined1)param_2;
    uVar1 = 0;
    do {
      uVar2 = uVar1;
      uVar1 = uVar2 + 1;
      auStack_1c[uVar1] = *(undefined1 *)(param_1 + -1 + uVar1);
    } while (uVar1 != param_2);
    FUN_ram_400137c6(0x6a,auStack_1c,uVar2 + 2);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40022e16.
 * REA evidence: ev_60ea5530a1ff3cb3d5b8842c07af95fefea7683c8b1ce4b7ee73e29dc9c1dbe2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40022f2a) */
/* WARNING: Removing unreachable block (ram,0x40022f10) */
/* WARNING: Removing unreachable block (ram,0x40022f24) */
/* WARNING: Removing unreachable block (ram,0x40022f34) */

undefined4 FUN_ram_40022e16(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
    return 0xfffffffe;
  }
  memset(param_1,0,0x80);
  iVar1 = fal_partition_find(s_device_info_ram_400936fc);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  if (*(uint *)(iVar1 + 0x38) < 0x1000) {
    return 0xffffffff;
  }
  iVar1 = fal_partition_read(iVar1,0,param_1,0x80);
  iVar3 = 0;
  if (iVar1 != 0x80) {
    memset(param_1,0,0x80);
    return 0xfffffffd;
  }
  while (*(char *)((int)param_1 + iVar3) == -1) {
    iVar3 = iVar3 + 1;
    if (iVar3 == 0x80) {
      memset(param_1,0,0x80);
      return 0xffffffff;
    }
  }
  if ((((((*param_1 == 0x49333747) && ((short)param_1[1] == 1)) &&
        (*(short *)((int)param_1 + 6) == 0x80)) && ((*(byte *)(param_1 + 2) - 1 & 0xff) < 2)) &&
      ((((param_2 == 0 || ((uint)*(byte *)(param_1 + 2) == (param_2 & 0xff))) &&
        ((*(byte *)((int)param_1 + 0xb) < 0x31 &&
         ((uVar2 = param_1[3], uVar2 / 10000 - 0x7e4 < 0x1f2c && ((uVar2 / 100) % 100 - 1 < 0xc)))))
        ) && (uVar2 % 100 - 1 < 0x1f)))) && ((*(byte *)((int)param_1 + 10) - 1 & 0xff) < 0x20)) {
    uVar2 = 0;
    do {
      if (0x5d < (byte)(*(char *)((int)param_1 + uVar2 + 0x10) - 0x21U)) goto LAB_ram_40022fd4;
      uVar2 = uVar2 + 1;
    } while ((uVar2 & 0xff) < (uint)*(byte *)((int)param_1 + 10));
    iVar1 = FUN_ram_4000755e(0,param_1,0x7c);
    if (param_1[0x1f] == iVar1) {
      return 0;
    }
  }
LAB_ram_40022fd4:
  memset(param_1,0,0x80);
  return 0xfffffffe;
}


/* NanoCore 1.10, address 0x40022fe4.
 * REA evidence: ev_1dca8d7bb1f096bafe52b65e5c5e4beb38391f3b099b38d233ba6056cbdf52c1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40022fe4(void)

{
  undefined1 uVar1;
  
  memset((void *)0x3006a544,0,0x1e0);
  memset((void *)0x3006a724,0,0x78);
  _DAT_ram_3006a538 = 0x1010101;
  _DAT_ram_3006a53c = 0x1010101;
  _DAT_ram_3006a540 = &sedeleg;
  _DAT_ram_3006a79c = 0;
  _DAT_ram_3006a7a0 = 0;
  _DAT_ram_3006a7a4 = 0;
  uVar1 = FUN_ram_40024f3e(6,6);
  _DAT_ram_3006a6f8 = 0;
  _DAT_ram_3006a6f4 = DAT_ram_4009281c;
  _DAT_ram_3006a6fc = DAT_ram_4009281c;
  _DAT_ram_3006a700 = DAT_ram_4009281c;
  _DAT_ram_3006a7a0 = CONCAT12(uVar1,_DAT_ram_3006a7a0);
  _DAT_ram_3006a6c4 = DAT_ram_40093100;
  _DAT_ram_3006a6c8 = DAT_ram_40093708;
  return;
}


