/* NanoCore 1.12: FUN_ram_300408dc at 0x300408dc.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_0d95c51fdb1771b0dcf236c4929fd86a82b20b40d8d3205d9765d88c01f81037
 * Source: analysis/rea-1.12-effects/results/01003-export-0x300408dc.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void FUN_ram_300408dc(ushort *param_1,float *param_2,int param_3,int param_4)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  
  uVar2 = (uint)*param_1;
  if (param_3 == 1) {
    if (uVar2 != 0) {
      uVar3 = 0;
      pfVar4 = param_2 + 1;
      do {
        uVar3 = uVar3 + 1;
        *pfVar4 = -(float)*(undefined8 *)pfVar4;
        pfVar4 = pfVar4 + 2;
      } while (uVar2 != uVar3);
      goto LAB_ram_300408fc;
    }
    if (param_4 == 0) {
      return;
    }
  }
  else {
LAB_ram_300408fc:
    if (uVar2 == 0x100) {
LAB_ram_300409d8:
      FUN_ram_300404cc(param_1,param_2);
    }
    else {
      if (uVar2 < 0x101) {
        if (uVar2 == 0x40) goto LAB_ram_30040950;
        if (uVar2 < 0x41) {
          if (uVar2 == 0x10) goto LAB_ram_3004091c;
          if (uVar2 == 0x20) goto LAB_ram_300409d8;
        }
        else if (uVar2 == 0x80) {
LAB_ram_3004091c:
          FUN_ram_30040358(param_1,param_2);
        }
        goto joined_r0x3004095c;
      }
      if (uVar2 == 0x800) goto LAB_ram_300409d8;
      if (uVar2 < 0x801) {
        if (uVar2 == 0x200) goto LAB_ram_30040950;
        if (uVar2 == 0x400) goto LAB_ram_3004091c;
      }
      else if (uVar2 == 0x1000) {
LAB_ram_30040950:
        FUN_ram_30040a04(param_2,uVar2,*(undefined4 *)(param_1 + 2),1);
      }
    }
joined_r0x3004095c:
    if (param_4 == 0) goto joined_r0x30040970;
  }
  FUN_ram_3004113c(param_2,param_1[6],*(undefined4 *)(param_1 + 4));
joined_r0x30040970:
  if ((param_3 == 1) && (fVar1 = DAT_ram_4009672c / (float)uVar2, uVar2 != 0)) {
    uVar3 = 0;
    do {
      uVar3 = uVar3 + 1;
      *param_2 = (float)*(undefined8 *)param_2 * fVar1;
      param_2[1] = -(float)*(undefined8 *)(param_2 + 1) * fVar1;
      param_2 = param_2 + 2;
    } while (uVar2 != uVar3);
    return;
  }
  return;
}

