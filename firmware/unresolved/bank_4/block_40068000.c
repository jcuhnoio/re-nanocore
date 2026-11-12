/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40068000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40068b2a.
 * REA evidence: ev_a7f36ec03015698436d95b10d3a5ae22da6de8e26106697336766c0bbbcac320
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40068b2a(float param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  undefined4 *__s;
  size_t __n;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  ulonglong uVar11;
  float fVar12;
  ulonglong uVar13;
  float fVar14;
  
  fVar7 = DAT_ram_40093094;
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  if (param_1 < DAT_ram_40093094) {
    param_1 = DAT_ram_40092878;
  }
  memset(param_2,0,0x60f4);
  uVar11 = (ulonglong)(uint)DAT_ram_4009281c;
  fVar2 = DAT_ram_40098348 / param_1;
  uVar13 = (ulonglong)DAT_ram_400985b8;
  *(ulonglong *)(param_2 + 4) = (ulonglong)DAT_ram_4009286c;
  *param_2 = param_3;
  param_2[1] = param_4;
  *(ulonglong *)(param_2 + 2) = (ulonglong)(uint)param_1;
  *(ulonglong *)(param_2 + 3) = uVar11;
  *(ulonglong *)(param_2 + 9) = uVar13;
  uVar9 = FUN_ram_40000c0e(fVar2);
  fVar8 = DAT_ram_400930bc;
  uVar11 = *(ulonglong *)(param_2 + 4);
  *(undefined8 *)(param_2 + 0xe) = uVar9;
  param_2[0xf] = 0;
  fVar2 = DAT_ram_40092864;
  if ((float)uVar11 < fVar8) {
    uVar11 = (ulonglong)(uint)fVar8;
  }
  else if (DAT_ram_400934dc < (float)uVar11) {
    uVar11 = (ulonglong)(uint)DAT_ram_400934dc;
  }
  fVar14 = (float)uVar11 * (float)*(undefined8 *)(param_2 + 2) * DAT_ram_40098104 + DAT_ram_40092864
  ;
  *(ulonglong *)(param_2 + 4) = uVar11;
  __s = param_2 + 0x10;
  uVar5 = (uint)(-1 < (int)fVar14) * (int)fVar14;
  if (0x1800 < uVar5) {
    uVar5 = 0x1800;
  }
  uVar4 = 0x40;
  if (0x3f < uVar5) {
    uVar4 = uVar5;
  }
  uVar5 = (uVar4 & 0xffff) + 4;
  *(short *)(param_2 + 5) = (short)uVar4;
  uVar6 = uVar5 & 0xffff;
  if (*(ushort *)((int)param_2 + 0x16) != uVar6) {
    *(short *)((int)param_2 + 0x16) = (short)(uVar5 * 0x10000 >> 0x10);
    __s = memset(__s,0,uVar6 << 2);
  }
  fVar10 = DAT_ram_4009831c;
  fVar3 = DAT_ram_4009281c;
  fVar14 = (float)(uVar4 & 0xffff);
  fVar12 = (float)*(undefined8 *)(param_2 + 3);
  if (fVar12 <= 0.0) {
    fVar14 = 0.0 / fVar14;
    *(ulonglong *)(param_2 + 3) = (ulonglong)(uint)DAT_ram_4009281c;
    if (fVar10 <= fVar14) goto LAB_ram_40068c70;
  }
  else {
    *(undefined8 *)(param_2 + 3) = *(undefined8 *)(param_2 + 3);
    fVar14 = (fVar12 - fVar3) / fVar14;
    fVar10 = DAT_ram_4009831c;
    if (DAT_ram_4009831c <= fVar14) {
LAB_ram_40068c70:
      uVar11 = (ulonglong)(uint)fVar14;
      if (DAT_ram_4009824c < fVar14) {
        uVar11 = (ulonglong)(uint)DAT_ram_4009824c;
      }
      goto LAB_ram_40068c82;
    }
  }
  uVar11 = (ulonglong)(uint)fVar10;
LAB_ram_40068c82:
  *(ulonglong *)(param_2 + 8) = uVar11;
  __n = uVar6 << 2;
  if (0x1803 < (uVar6 - 1 & 0xffff)) {
    *(undefined2 *)((int)param_2 + 0x16) = 0x40;
    __n = 0x100;
  }
  memset(__s,0,__n);
  *(undefined2 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  *(ulonglong *)(param_2 + 0x1814) = (ulonglong)(uint)param_1;
  fVar14 = DAT_ram_4009859c;
  fVar10 = DAT_ram_400985a0;
  fVar12 = DAT_ram_400985a4;
  fVar1 = DAT_ram_400985a8;
  if (fVar7 <= param_1) {
    fVar7 = param_1 * DAT_ram_4009824c;
    fVar14 = DAT_ram_400985ac;
    if ((fVar8 <= fVar7) || (fVar14 = DAT_ram_400985b4, fVar7 < DAT_ram_400930f4)) {
      fVar7 = (float)FUN_ram_40000a08(fVar14 / param_1);
      fVar8 = (float)FUN_ram_40000786(fVar14 / param_1);
      fVar7 = fVar7 / DAT_ram_400985b0;
    }
    else {
      fVar8 = (fVar7 * DAT_ram_400980f4) / param_1;
      fVar7 = (float)FUN_ram_40000a08(fVar8);
      fVar8 = (float)FUN_ram_40000786(fVar8);
      fVar7 = fVar7 / DAT_ram_400985b0;
    }
    fVar1 = fVar7 + fVar3;
    fVar14 = (fVar3 - fVar7) / fVar1;
    fVar10 = (fVar8 * DAT_ram_40092834) / fVar1;
    fVar12 = (fVar3 - fVar8) / fVar1;
    fVar1 = ((fVar3 - fVar8) * fVar2) / fVar1;
  }
  *(ulonglong *)(param_2 + 0x1815) = (ulonglong)(uint)fVar1;
  *(ulonglong *)(param_2 + 0x1817) = (ulonglong)(uint)fVar1;
  *(ulonglong *)(param_2 + 0x1818) = (ulonglong)(uint)fVar10;
  *(ulonglong *)(param_2 + 0x1819) = (ulonglong)(uint)fVar14;
  *(ulonglong *)(param_2 + 0x1816) = (ulonglong)(uint)fVar12;
  param_2[0x181a] = 0;
  param_2[0x181b] = 0;
  param_2[0x181c] = 0;
  param_2[0x181d] = 0;
  *(undefined1 *)(param_2 + 0x181e) = 0;
  *(undefined1 *)(param_2 + 0x181f) = 0;
  *(undefined1 *)((int)param_2 + 0x607d) = 0;
  *(undefined1 *)((int)param_2 + 0x607e) = 0;
  *(undefined1 *)((int)param_2 + 0x607f) = 0;
  *(undefined1 *)(param_2 + 0x1820) = 0;
  *(undefined1 *)((int)param_2 + 0x6081) = 0;
  *(undefined1 *)((int)param_2 + 0x6082) = 0;
  *(undefined1 *)((int)param_2 + 0x6083) = 0;
  *(undefined1 *)(param_2 + 0x1821) = 0;
  *(undefined1 *)((int)param_2 + 0x6085) = 0;
  *(undefined1 *)((int)param_2 + 0x6086) = 0;
  *(undefined1 *)((int)param_2 + 0x6087) = 0;
  *(undefined1 *)(param_2 + 0x1822) = 0;
  *(undefined1 *)((int)param_2 + 0x6089) = 0;
  *(undefined1 *)((int)param_2 + 0x608a) = 0;
  *(undefined1 *)((int)param_2 + 0x608b) = 0;
  *(undefined1 *)(param_2 + 0x1823) = 0;
  *(undefined1 *)((int)param_2 + 0x608d) = 0;
  *(undefined1 *)((int)param_2 + 0x608e) = 0;
  *(undefined1 *)((int)param_2 + 0x608f) = 0;
  *(undefined1 *)(param_2 + 0x1824) = 0;
  *(undefined1 *)((int)param_2 + 0x6091) = 0;
  *(undefined1 *)((int)param_2 + 0x6092) = 0;
  fVar7 = DAT_ram_40092864;
  *(undefined1 *)((int)param_2 + 0x6093) = 0;
  *(undefined1 *)(param_2 + 0x1825) = 0;
  *(undefined1 *)((int)param_2 + 0x6095) = 0;
  *(undefined1 *)((int)param_2 + 0x6096) = 0;
  *(undefined1 *)((int)param_2 + 0x6097) = 0;
  *(undefined1 *)(param_2 + 0x1826) = 0;
  *(undefined1 *)((int)param_2 + 0x6099) = 0;
  *(undefined1 *)((int)param_2 + 0x609a) = 0;
  *(undefined1 *)((int)param_2 + 0x609b) = 0;
  param_2[0x182e] = param_1;
  param_2[0x182f] = 0;
  param_2[0x1830] = fVar7;
  *(undefined1 *)(param_2 + 0x1831) = 0;
  *(undefined1 *)((int)param_2 + 0x60c5) = 0;
  *(undefined1 *)((int)param_2 + 0x60c6) = 0;
  *(undefined1 *)((int)param_2 + 0x60c7) = 0;
  *(undefined1 *)(param_2 + 0x1832) = 0;
  *(undefined1 *)((int)param_2 + 0x60c9) = 0;
  *(undefined1 *)((int)param_2 + 0x60ca) = 0;
  *(undefined1 *)((int)param_2 + 0x60cb) = 0;
  *(undefined1 *)(param_2 + 0x1833) = 0;
  *(undefined1 *)((int)param_2 + 0x60cd) = 0;
  *(undefined1 *)((int)param_2 + 0x60ce) = 0;
  *(undefined1 *)((int)param_2 + 0x60cf) = 0;
  *(undefined1 *)(param_2 + 0x1834) = 0;
  *(undefined1 *)((int)param_2 + 0x60d1) = 0;
  *(undefined1 *)((int)param_2 + 0x60d2) = 0;
  *(undefined1 *)((int)param_2 + 0x60d3) = 0;
  FUN_ram_4006f328(param_1,param_2 + 0x1835);
  return;
}


/* NanoCore 1.10, address 0x40068efa.
 * REA evidence: ev_2cbce1bea9236d241a94e092a2c53cadb53859e21c4a2f03f759d2f5dbfbd10f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40068efa(int param_1)

{
  size_t __n;
  
  if (param_1 != 0) {
    __n = (uint)*(ushort *)(param_1 + 0x16) << 2;
    if (0x1803 < (*(ushort *)(param_1 + 0x16) - 1 & 0xffff)) {
      *(undefined2 *)(param_1 + 0x16) = 0x40;
      __n = 0x100;
    }
    memset((void *)(param_1 + 0x40),0,__n);
    *(undefined2 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40068f4a.
 * REA evidence: ev_a978c7c640aa5f63cccc0e247d7458a007042497673fdea01b9b75e52964a72d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40068f4a(int param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x6068) = 0;
    *(undefined4 *)(param_1 + 0x606c) = 0;
    *(undefined4 *)(param_1 + 0x6070) = 0;
    *(undefined4 *)(param_1 + 0x6074) = 0;
    *(undefined1 *)(param_1 + 0x6078) = 0;
    *(undefined1 *)(param_1 + 0x607c) = 0;
    *(undefined1 *)(param_1 + 0x607d) = 0;
    *(undefined1 *)(param_1 + 0x607e) = 0;
    *(undefined1 *)(param_1 + 0x607f) = 0;
    *(undefined1 *)(param_1 + 0x6080) = 0;
    *(undefined1 *)(param_1 + 0x6081) = 0;
    *(undefined1 *)(param_1 + 0x6082) = 0;
    *(undefined1 *)(param_1 + 0x6083) = 0;
    *(undefined1 *)(param_1 + 0x6084) = 0;
    *(undefined1 *)(param_1 + 0x6085) = 0;
    *(undefined1 *)(param_1 + 0x6086) = 0;
    *(undefined1 *)(param_1 + 0x6087) = 0;
    *(undefined1 *)(param_1 + 0x6088) = 0;
    *(undefined1 *)(param_1 + 0x6089) = 0;
    *(undefined1 *)(param_1 + 0x608a) = 0;
    *(undefined1 *)(param_1 + 0x608b) = 0;
    *(undefined1 *)(param_1 + 0x608c) = 0;
    *(undefined1 *)(param_1 + 0x608d) = 0;
    *(undefined1 *)(param_1 + 0x608e) = 0;
    *(undefined1 *)(param_1 + 0x608f) = 0;
    *(undefined1 *)(param_1 + 0x6090) = 0;
    *(undefined1 *)(param_1 + 0x6091) = 0;
    *(undefined1 *)(param_1 + 0x6092) = 0;
    *(undefined1 *)(param_1 + 0x6093) = 0;
    *(undefined1 *)(param_1 + 0x6094) = 0;
    *(undefined1 *)(param_1 + 0x6095) = 0;
    *(undefined1 *)(param_1 + 0x6096) = 0;
    *(undefined1 *)(param_1 + 0x6097) = 0;
    *(undefined1 *)(param_1 + 0x6098) = 0;
    *(undefined1 *)(param_1 + 0x6099) = 0;
    *(undefined1 *)(param_1 + 0x609a) = 0;
    *(undefined1 *)(param_1 + 0x609b) = 0;
  }
  return;
}


/* NanoCore 1.10, address 0x40068fee.
 * REA evidence: ev_924c4144afcb4460e12ff751123dceeeb94af8f183ed8ffe9f9a172a6208f1f3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40068fee(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_ram_40092864;
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x60bc) = 0;
    *(undefined4 *)(param_1 + 0x60c0) = uVar1;
    *(undefined1 *)(param_1 + 0x60c4) = 0;
    *(undefined1 *)(param_1 + 0x60c5) = 0;
    *(undefined1 *)(param_1 + 0x60c6) = 0;
    *(undefined1 *)(param_1 + 0x60c7) = 0;
    *(undefined1 *)(param_1 + 0x60c8) = 0;
    *(undefined1 *)(param_1 + 0x60c9) = 0;
    *(undefined1 *)(param_1 + 0x60ca) = 0;
    *(undefined1 *)(param_1 + 0x60cb) = 0;
    *(undefined1 *)(param_1 + 0x60cc) = 0;
    *(undefined1 *)(param_1 + 0x60cd) = 0;
    *(undefined1 *)(param_1 + 0x60ce) = 0;
    *(undefined1 *)(param_1 + 0x60cf) = 0;
    *(undefined1 *)(param_1 + 0x60d0) = 0;
    *(undefined1 *)(param_1 + 0x60d1) = 0;
    *(undefined1 *)(param_1 + 0x60d2) = 0;
    *(undefined1 *)(param_1 + 0x60d3) = 0;
  }
  return;
}


