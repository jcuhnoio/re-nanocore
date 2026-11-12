/* NanoCore 1.10 analysis module: runtime/memory.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x400031dc.
 * REA evidence: ev_eb22bdb100f547660e7ab13a8e38f5d5ba03a6ce41a2819794ef05106c9095e3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void * memset(void *__s,int __c,size_t __n)

{
  uint uVar1;
  uint extraout_t1;
  void *pvVar2;
  uint uVar3;
  int extraout_a2;
  uint uVar4;
  uint *puVar5;
  int extraout_a4;
  int extraout_a5;
  undefined8 uVar6;
  
  uVar6 = CONCAT44(__c,__s);
  uVar1 = 0xf;
  if (0xf < __n) {
    if (((uint)__s & 0xf) != 0) {
      uVar6 = (*(code *)(((uint)__s & 0xf) * 4 + 0x40003212))();
      __s = (void *)(extraout_a4 - (extraout_a5 + -0x10));
      __n = extraout_a2 + extraout_a5 + -0x10;
      uVar1 = extraout_t1;
      if (__n <= extraout_t1) goto LAB_ram_40003206;
    }
    uVar4 = (uint)((ulonglong)uVar6 >> 0x20);
    uVar3 = 0;
    if (uVar4 != 0) {
      uVar4 = uVar4 & 0xff;
      uVar4 = uVar4 | uVar4 << 8;
      uVar3 = uVar4 | uVar4 << 0x10;
    }
    uVar4 = __n & 0xfffffff0;
    __n = __n & 0xf;
    puVar5 = (uint *)(uVar4 + (int)__s);
    do {
      *(uint *)__s = uVar3;
      *(uint *)((int)__s + 4) = uVar3;
      *(uint *)((int)__s + 8) = uVar3;
      *(uint *)((int)__s + 0xc) = uVar3;
      __s = (void *)((int)__s + 0x10);
    } while (__s < puVar5);
    if (__n == 0) {
      return (void *)uVar6;
    }
  }
LAB_ram_40003206:
                    /* WARNING: Could not recover jumptable at 0x40003212. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar2 = (void *)(*(code *)((uVar1 - __n) * 4 + 0x40003216))();
  return pvVar2;
}


/* NanoCore 1.10, address 0x40003288.
 * REA evidence: ev_f06838d916e32c01e92a25bff828bbc17740822989f87ebe49af872f9d1161ed
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int strcmp(char *__s1,char *__s2)

{
  uint uVar1;
  uint uVar2;
  
  if ((((uint)__s1 | (uint)__s2) & 3) == 0) {
    do {
      uVar1 = *(uint *)__s1;
      uVar2 = *(uint *)__s2;
      if (((uVar1 & 0x7f7f7f7f) + 0x7f7f7f7f | uVar1 | 0x7f7f7f7f) != 0xffffffff) {
LAB_ram_4000337a:
        if (uVar1 == uVar2) {
          return 0;
        }
        goto LAB_ram_4000335e;
      }
      if (uVar1 != uVar2) break;
      uVar1 = *(uint *)((int)__s1 + 4);
      uVar2 = *(uint *)((int)__s2 + 4);
      if (((uVar1 & 0x7f7f7f7f) + 0x7f7f7f7f | uVar1 | 0x7f7f7f7f) != 0xffffffff) {
        __s1 = (char *)((int)__s1 + 4);
        __s2 = (char *)((int)__s2 + 4);
        goto LAB_ram_4000337a;
      }
      if (uVar1 != uVar2) break;
      uVar1 = *(uint *)((int)__s1 + 8);
      uVar2 = *(uint *)((int)__s2 + 8);
      if (((uVar1 & 0x7f7f7f7f) + 0x7f7f7f7f | uVar1 | 0x7f7f7f7f) != 0xffffffff) {
        __s1 = (char *)((int)__s1 + 8);
        __s2 = (char *)((int)__s2 + 8);
        if (uVar1 == uVar2) {
          return 0;
        }
        goto LAB_ram_4000335e;
      }
      if (uVar1 != uVar2) break;
      uVar1 = *(uint *)((int)__s1 + 0xc);
      uVar2 = *(uint *)((int)__s2 + 0xc);
      if (((uVar1 & 0x7f7f7f7f) + 0x7f7f7f7f | uVar1 | 0x7f7f7f7f) != 0xffffffff) {
        __s1 = (char *)((int)__s1 + 0xc);
        __s2 = (char *)((int)__s2 + 0xc);
        if (uVar1 == uVar2) {
          return 0;
        }
        goto LAB_ram_4000335e;
      }
      if (uVar1 != uVar2) break;
      uVar1 = *(uint *)((int)__s1 + 0x10);
      uVar2 = *(uint *)((int)__s2 + 0x10);
      if (((uVar1 & 0x7f7f7f7f) + 0x7f7f7f7f | uVar1 | 0x7f7f7f7f) != 0xffffffff) {
        __s1 = (char *)((int)__s1 + 0x10);
        __s2 = (char *)((int)__s2 + 0x10);
        if (uVar1 == uVar2) {
          return 0;
        }
        goto LAB_ram_4000335e;
      }
      __s1 = (char *)((int)__s1 + 0x14);
      __s2 = (char *)((int)__s2 + 0x14);
    } while (uVar1 == uVar2);
    if (uVar1 << 0x10 == uVar2 << 0x10) {
      uVar1 = uVar1 >> 0x10;
      uVar2 = uVar2 >> 0x10;
      if ((uVar1 - uVar2 & 0xff) == 0) {
        return uVar1 - uVar2;
      }
    }
    else {
      uVar1 = uVar1 & 0xffff;
      uVar2 = uVar2 & 0xffff;
      if ((uVar1 - uVar2 & 0xff) == 0) {
        return uVar1 - uVar2;
      }
    }
    return (uVar1 & 0xff) - (uVar2 & 0xff);
  }
LAB_ram_4000335e:
  do {
    uVar2 = (uint)(byte)*(uint *)__s1;
    uVar1 = *(uint *)__s2;
    __s1 = (char *)((int)__s1 + 1);
    __s2 = (char *)((int)__s2 + 1);
    if (uVar2 != (byte)uVar1) break;
  } while (uVar2 != 0);
  return uVar2 - (byte)uVar1;
}


/* NanoCore 1.10, address 0x400050d6.
 * REA evidence: ev_31bf73108b1781b097aef47c5a7f6a84fa8197cd0fd9df18aed0cdfb2e360110
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  uint uVar1;
  undefined4 *puVar2;
  size_t sVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  void *pvVar8;
  
  pvVar8 = __dest;
  if ((0xf < __n) && (puVar2 = __src, puVar5 = __dest, (((uint)__src | (uint)__dest) & 3) == 0)) {
    do {
      *puVar5 = *puVar2;
      puVar5[1] = puVar2[1];
      puVar5[2] = puVar2[2];
      puVar6 = puVar5 + 4;
      puVar5[3] = puVar2[3];
      puVar2 = puVar2 + 4;
      puVar5 = puVar6;
    } while (0xf < (int)__dest + (__n - (int)puVar6));
    iVar7 = (__n - 0x10 & 0xfffffff0) + 0x10;
    uVar1 = __n & 0xf;
    for (iVar4 = 0; 3 < uVar1 - iVar4; iVar4 = iVar4 + 4) {
      *(undefined4 *)((int)__dest + iVar4 + iVar7) = *(undefined4 *)((int)__src + iVar4 + iVar7);
    }
    pvVar8 = (void *)((int)__dest + (__n & 0xc) + iVar7);
    __src = (void *)((int)__src + (__n & 0xc) + iVar7);
    __n = uVar1 + (uVar1 >> 2) * -4;
  }
  for (sVar3 = 0; __n != sVar3; sVar3 = sVar3 + 1) {
    *(undefined1 *)((int)pvVar8 + sVar3) = *(undefined1 *)((int)__src + sVar3);
  }
  return __dest;
}


