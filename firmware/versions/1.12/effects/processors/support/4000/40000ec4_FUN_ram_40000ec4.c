/* NanoCore 1.12: FUN_ram_40000ec4 at 0x40000ec4.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_fb94dc0899aa6d211084aa3cd2bb35df9af57700491e83a5895920bf28b6c65c
 * Source: analysis/rea-1.12-effects/results/01046-export-0x40000ec4.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

double FUN_ram_40000ec4(double param_1)

{
  uint in_register_00000100;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  uVar8 = (uint)((ulonglong)param_1 >> 0x20);
  if ((uVar8 & 0x7ff00000) == 0x7ff00000) {
    return param_1 * param_1 + param_1;
  }
  if ((int)uVar8 < 1) {
    if (((ulonglong)param_1 & 0x7fffffff00000000) == 0 && in_register_00000100 == 0) {
      return param_1;
    }
    iVar9 = 0;
    if (uVar8 != 0) {
      return (param_1 - param_1) / (param_1 - param_1);
    }
    do {
      uVar4 = in_register_00000100;
      uVar8 = uVar4 >> 0xb;
      iVar9 = iVar9 + -0x15;
      in_register_00000100 = uVar4 << 0x15;
    } while (uVar8 == 0);
    if (-1 < (int)uVar4) goto LAB_ram_40000fea;
    uVar4 = 0;
    uVar2 = 0xffffffff;
    uVar5 = in_register_00000100;
  }
  else {
    iVar6 = (int)uVar8 >> 0x14;
    iVar9 = 0;
    uVar5 = in_register_00000100;
    if (iVar6 != 0) goto LAB_ram_40000ee8;
LAB_ram_40000fea:
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar8 = uVar8 << 1;
      uVar5 = uVar2 + 1;
    } while ((uVar8 & 0x100000) == 0);
    uVar4 = 0x20 - uVar5;
    uVar5 = in_register_00000100 << (uVar5 & 0x1f);
  }
  iVar6 = iVar9 - uVar2;
  uVar8 = in_register_00000100 >> (uVar4 & 0x1f) | uVar8;
LAB_ram_40000ee8:
  iVar9 = (uVar8 & 0xfffff | 0x100000) * 2 - ((int)uVar5 >> 0x1f);
  uVar8 = uVar5 << 1;
  if ((iVar6 - 0x3ffU & 1) != 0) {
    iVar9 = iVar9 * 2 - ((int)uVar8 >> 0x1f);
    uVar8 = uVar5 << 2;
  }
  iVar3 = 0x16;
  iVar11 = 0;
  iVar7 = 0;
  uVar4 = 0x200000;
  do {
    iVar1 = iVar7 + uVar4;
    iVar3 = iVar3 + -1;
    if (iVar1 <= iVar9) {
      iVar7 = iVar1 + uVar4;
      iVar9 = iVar9 - iVar1;
      iVar11 = iVar11 + uVar4;
    }
    iVar9 = iVar9 * 2 - ((int)uVar8 >> 0x1f);
    uVar8 = uVar8 << 1;
    uVar4 = uVar4 >> 1;
  } while (iVar3 != 0);
  uVar4 = 0;
  uVar5 = 0x80000000;
  iVar3 = 0;
  iVar1 = 0x20;
  do {
    iVar10 = iVar1;
    uVar2 = uVar5 + iVar3;
    if (iVar7 < iVar9) {
      iVar3 = iVar7;
      if ((int)uVar2 < 0) {
LAB_ram_40001016:
        iVar3 = iVar7 - ((int)~(uVar2 + uVar5) >> 0x1f);
      }
      iVar7 = (iVar9 - iVar7) - (uint)(uVar8 < uVar2);
      iVar9 = iVar3;
LAB_ram_40000f80:
      iVar3 = uVar2 + uVar5;
      iVar1 = uVar8 - uVar2;
      uVar4 = uVar4 + uVar5;
      uVar8 = iVar1 * 2;
      iVar1 = iVar7 * 2 - (iVar1 >> 0x1f);
      iVar7 = iVar9;
    }
    else {
      if ((iVar9 == iVar7) && (uVar2 <= uVar8)) {
        if ((int)uVar2 < 0) goto LAB_ram_40001016;
        iVar7 = 0;
        goto LAB_ram_40000f80;
      }
      iVar1 = (int)uVar8 >> 0x1f;
      uVar8 = uVar8 << 1;
      iVar1 = iVar9 * 2 - iVar1;
    }
    iVar9 = iVar1;
    uVar5 = uVar5 >> 1;
    iVar1 = iVar10 + -1;
    if (iVar1 == 0) {
      uVar5 = iVar10 - 1;
      if (iVar9 == 0 && uVar8 == 0) {
        uVar5 = uVar4 >> 1;
      }
      else if (uVar4 == 0xffffffff) {
        iVar11 = iVar11 + 1;
      }
      else {
        uVar5 = uVar4 + 1 >> 1;
      }
      return (double)CONCAT44(((int)(iVar6 - 0x3ffU) >> 1) * 0x100000 + (iVar11 >> 1) + 0x3fe00000,
                              iVar11 << 0x1f | uVar5);
    }
  } while( true );
}

