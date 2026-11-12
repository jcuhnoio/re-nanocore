/* NanoCore 1.12: FUN_ram_400853f4 at 0x400853f4.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_5d902b3ee42c42feab43c3d6ad7297bb687733d647178bff6dd467d8f49e6c84
 * Source: analysis/rea-1.12-effects/results/03616-export-0x400853f4.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

undefined4 FUN_ram_400853f4(longlong *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  
  if ((param_1 != (longlong *)0x0) && (param_2 != (undefined1 *)0x0)) {
    uVar5 = *(uint *)(param_1 + 9);
    uVar3 = 1;
    if (uVar5 < 0x80) {
      uVar7 = uVar5 + 1;
      lVar2 = (ulonglong)uVar5 * 8 + *param_1;
      uVar8 = (uint)((ulonglong)lVar2 >> 0x20);
      *param_1 = lVar2;
      *(uint *)(param_1 + 9) = uVar7;
      *(undefined1 *)((int)param_1 + uVar5 + 0x4c) = 0x80;
      if (0x70 < uVar7) {
        if (uVar7 != 0x80) {
          memset(uVar5 + 0x4d + (int)param_1,0,0x7f - uVar5);
          *(undefined4 *)(param_1 + 9) = 0x80;
        }
        FUN_ram_40084290(param_1,(int)param_1 + 0x4c);
        uVar8 = *(uint *)((int)param_1 + 4);
        uVar7 = 0;
      }
      uVar5 = uVar7 + 1;
      iVar4 = 1;
      if (uVar5 < 0x79) {
        iVar4 = 0x78 - uVar7;
      }
      memset(uVar7 + 0x4c + (int)param_1,0,iVar4);
      iVar4 = 0x77 - uVar7;
      if (0x78 < uVar5) {
        iVar4 = 0;
      }
      custom0();
      *(uint *)((int)param_1 + 0xc4) =
           uVar8 >> 0x18 | (uVar8 >> 0x10 & 0xff) << 8 | (uVar8 >> 8 & 0xff) << 0x10 | uVar8 << 0x18
      ;
      *(uint *)(param_1 + 9) = iVar4 + uVar5;
      *(uint *)(param_1 + 0x19) = uVar8 >> 8;
      FUN_ram_40084290(param_1,(int)param_1 + 0x4c);
      plVar6 = param_1 + 1;
      do {
        *param_2 = *(undefined1 *)((int)plVar6 + 7);
        param_2[1] = (char)*(undefined2 *)((int)plVar6 + 6);
        param_2[2] = (char)((uint)*(undefined4 *)((int)plVar6 + 4) >> 8);
        param_2[3] = (char)*(undefined4 *)((int)plVar6 + 4);
        param_2[4] = (char)((uint)(int)*plVar6 >> 0x18);
        param_2[5] = (char)((uint)(int)*plVar6 >> 0x10);
        param_2[6] = (char)((uint)(int)*plVar6 >> 8);
        plVar1 = plVar6 + 1;
        param_2[7] = (char)(int)*plVar6;
        param_2 = param_2 + 8;
        plVar6 = plVar1;
      } while (plVar1 != param_1 + 9);
      uVar3 = 0;
    }
    return uVar3;
  }
  return 1;
}

