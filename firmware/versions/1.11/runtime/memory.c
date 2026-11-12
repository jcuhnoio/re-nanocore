/* NanoCore 1.11 analysis module: runtime/memory.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x400031cc.
 * REA evidence: ev_3bdfadec39ceb191b04e031e19a17fe675e919c22222825570dc90437381d366
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void memset(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint extraout_t1;
  uint uVar2;
  uint extraout_a1;
  int extraout_a2;
  uint uVar3;
  uint *puVar4;
  int extraout_a4;
  int extraout_a5;
  
  uVar1 = 0xf;
  if (0xf < param_3) {
    if (((uint)param_1 & 0xf) != 0) {
      (*(code *)(((uint)param_1 & 0xf) * 4 + 0x40003202))();
      param_1 = (uint *)(extraout_a4 - (extraout_a5 + -0x10));
      param_3 = extraout_a2 + extraout_a5 + -0x10;
      uVar1 = extraout_t1;
      param_2 = extraout_a1;
      if (param_3 <= extraout_t1) goto LAB_ram_400031f6;
    }
    uVar2 = 0;
    if (param_2 != 0) {
      uVar2 = param_2 & 0xff | (param_2 & 0xff) << 8;
      uVar2 = uVar2 | uVar2 << 0x10;
    }
    uVar3 = param_3 & 0xfffffff0;
    param_3 = param_3 & 0xf;
    puVar4 = (uint *)(uVar3 + (int)param_1);
    do {
      *param_1 = uVar2;
      param_1[1] = uVar2;
      param_1[2] = uVar2;
      param_1[3] = uVar2;
      param_1 = param_1 + 4;
    } while (param_1 < puVar4);
    if (param_3 == 0) {
      return;
    }
  }
LAB_ram_400031f6:
                    /* WARNING: Could not recover jumptable at 0x40003202. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((uVar1 - param_3) * 4 + 0x40003206))();
  return;
}


/* NanoCore 1.11, address 0x40003278.
 * REA evidence: ev_49c70c3a6fb3d6f6bd0b0412b1df1132832513edcc987a88450035876e9ab4df
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint strcmp(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if ((((uint)param_1 | (uint)param_2) & 3) == 0) {
    do {
      uVar1 = *param_1;
      uVar2 = *param_2;
      if (((uVar1 & 0x7f7f7f7f) + 0x7f7f7f7f | uVar1 | 0x7f7f7f7f) != 0xffffffff) {
LAB_ram_4000336a:
        if (uVar1 == uVar2) {
          return 0;
        }
        goto LAB_ram_4000334e;
      }
      if (uVar1 != uVar2) break;
      uVar1 = param_1[1];
      uVar2 = param_2[1];
      if (((uVar1 & 0x7f7f7f7f) + 0x7f7f7f7f | uVar1 | 0x7f7f7f7f) != 0xffffffff) {
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        goto LAB_ram_4000336a;
      }
      if (uVar1 != uVar2) break;
      uVar1 = param_1[2];
      uVar2 = param_2[2];
      if (((uVar1 & 0x7f7f7f7f) + 0x7f7f7f7f | uVar1 | 0x7f7f7f7f) != 0xffffffff) {
        param_1 = param_1 + 2;
        param_2 = param_2 + 2;
        if (uVar1 == uVar2) {
          return 0;
        }
        goto LAB_ram_4000334e;
      }
      if (uVar1 != uVar2) break;
      uVar1 = param_1[3];
      uVar2 = param_2[3];
      if (((uVar1 & 0x7f7f7f7f) + 0x7f7f7f7f | uVar1 | 0x7f7f7f7f) != 0xffffffff) {
        param_1 = param_1 + 3;
        param_2 = param_2 + 3;
        if (uVar1 == uVar2) {
          return 0;
        }
        goto LAB_ram_4000334e;
      }
      if (uVar1 != uVar2) break;
      uVar1 = param_1[4];
      uVar2 = param_2[4];
      if (((uVar1 & 0x7f7f7f7f) + 0x7f7f7f7f | uVar1 | 0x7f7f7f7f) != 0xffffffff) {
        param_1 = param_1 + 4;
        param_2 = param_2 + 4;
        if (uVar1 == uVar2) {
          return 0;
        }
        goto LAB_ram_4000334e;
      }
      param_1 = param_1 + 5;
      param_2 = param_2 + 5;
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
LAB_ram_4000334e:
  do {
    uVar2 = (uint)(byte)*param_1;
    uVar1 = *param_2;
    param_1 = (uint *)((int)param_1 + 1);
    param_2 = (uint *)((int)param_2 + 1);
    if (uVar2 != (byte)uVar1) break;
  } while (uVar2 != 0);
  return uVar2 - (byte)uVar1;
}


/* NanoCore 1.11, address 0x400050c6.
 * REA evidence: ev_534e3c319ceccdff30c24547288a9cc42bc832f889bde502ba37991a5117e499
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void memcpy(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  if ((0xf < param_3) &&
     (puVar1 = param_2, puVar4 = param_1, (((uint)param_2 | (uint)param_1) & 3) == 0)) {
    do {
      *puVar4 = *puVar1;
      puVar4[1] = puVar1[1];
      puVar4[2] = puVar1[2];
      puVar5 = puVar4 + 4;
      puVar4[3] = puVar1[3];
      puVar1 = puVar1 + 4;
      puVar4 = puVar5;
    } while (0xf < (int)param_1 + (param_3 - (int)puVar5));
    iVar6 = (param_3 - 0x10 & 0xfffffff0) + 0x10;
    uVar2 = param_3 & 0xf;
    for (iVar3 = 0; 3 < uVar2 - iVar3; iVar3 = iVar3 + 4) {
      *(undefined4 *)((int)param_1 + iVar3 + iVar6) = *(undefined4 *)((int)param_2 + iVar3 + iVar6);
    }
    param_1 = (undefined4 *)((int)param_1 + (param_3 & 0xc) + iVar6);
    param_2 = (undefined4 *)((int)param_2 + (param_3 & 0xc) + iVar6);
    param_3 = uVar2 + (uVar2 >> 2) * -4;
  }
  for (uVar2 = 0; param_3 != uVar2; uVar2 = uVar2 + 1) {
    *(undefined1 *)((int)param_1 + uVar2) = *(undefined1 *)((int)param_2 + uVar2);
  }
  return;
}


