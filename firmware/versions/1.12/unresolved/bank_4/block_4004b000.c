/* NanoCore 1.12 analysis module: unresolved/bank_4/block_4004b000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4004b00a.
 * REA evidence: ev_eb60bca480e54acd2913cac59d67fd0864d9ac0e6cd5dc04899602845a85b15c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004b00a(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  uVar1 = 0xb;
  if (iVar2 != 0) {
    uVar1 = 9;
    if (*(code **)(iVar2 + 0x10) != (code *)0x0) {
      uVar1 = (**(code **)(iVar2 + 0x10))(iVar2,*param_1);
      if ((*(int *)(param_1[1] + 4) != 0) && (param_1[2] != 0)) {
        if ((*(int *)(param_1[1] + 4) != -1) && (*(int *)(param_1[2] + 0xc) != 0)) {
          FUN_ram_4005a988();
        }
        FUN_ram_4005a988(param_1[2]);
      }
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4004b05c.
 * REA evidence: ev_57d377393515db14fa1ad230a0c21f22c128afc71c1f0f986a700df8fea824b4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004b05c(undefined4 *param_1,int param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uStack_38;
  uint auStack_34 [4];
  
  if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
  iVar2 = param_1[1];
  if (iVar2 == 0) {
    return 0xb;
  }
  if (*(code **)(iVar2 + 0x14) == (code *)0x0) {
    return 9;
  }
  uVar10 = *(uint *)(iVar2 + 4);
  uStack_38 = 0;
  if (uVar10 == 0) {
    iVar2 = (**(code **)(iVar2 + 0x14))(iVar2,*param_1,param_2,param_3,&uStack_38);
    goto LAB_ram_4004b12c;
  }
  puVar4 = (uint *)param_1[2];
  uVar8 = puVar4[2];
  uVar11 = puVar4[3];
  if ((uVar8 < *puVar4) || (uVar6 = puVar4[1], uVar6 < uVar8)) {
    (**(code **)(iVar2 + 0x1c))(iVar2,*param_1,uVar8,0,puVar4,*(code **)(iVar2 + 0x1c));
    if (uVar10 < param_3) {
      pcVar7 = *(code **)(param_1[1] + 0x14);
      iVar2 = (*pcVar7)(param_1[1],*param_1,param_2,param_3,&uStack_38,pcVar7);
    }
    else {
      if (uVar11 == 0) {
        iVar12 = param_1[2];
        uVar3 = FUN_ram_4005a952(uVar10);
        iVar2 = param_1[2];
        *(undefined4 *)(iVar12 + 0xc) = uVar3;
        uVar11 = *(uint *)(iVar2 + 0xc);
      }
      pcVar7 = *(code **)(param_1[1] + 0x14);
      auStack_34[0] = 0;
      iVar2 = (*pcVar7)(param_1[1],*param_1,uVar11,uVar10,auStack_34,pcVar7);
      puVar4 = (uint *)param_1[2];
      *puVar4 = uVar8;
      uStack_38 = auStack_34[0];
      if (param_3 <= auStack_34[0]) {
        uStack_38 = param_3;
      }
      puVar4[1] = uVar8 + (auStack_34[0] - 1);
      thunk_FUN_ram_4000500c(param_2,uVar11);
    }
LAB_ram_4004b128:
    if (iVar2 != 0) goto LAB_ram_4004b12c;
  }
  else {
    uVar9 = (uVar6 - uVar8) + 1;
    iVar2 = (((uVar6 + 1) - *puVar4) - uVar9) + uVar11;
    uVar1 = param_3;
    if (((uVar10 != 0xffffffff) || (uVar1 = uVar6 - uVar8, uVar9 < param_3)) &&
       (param_3 = uVar1, uVar9 < uVar1)) {
      thunk_FUN_ram_4000500c(param_2,iVar2,uVar9);
      (**(code **)(param_1[1] + 0x1c))(param_1[1],*param_1,*(int *)(param_1[2] + 4) + 1,0);
      iVar2 = param_1[1];
      auStack_34[0] = 0;
      uVar8 = uVar1 - uVar9;
      if (uVar10 < uVar8) {
        iVar2 = (**(code **)(iVar2 + 0x14))(iVar2,*param_1,param_2 + uVar9,uVar8,auStack_34);
      }
      else {
        iVar2 = (**(code **)(iVar2 + 0x14))(iVar2,*param_1,uVar11,uVar10,auStack_34);
        piVar5 = (int *)param_1[2];
        *piVar5 = piVar5[1] + 1;
        piVar5[1] = piVar5[1] + 1 + (auStack_34[0] - 1);
        uVar10 = auStack_34[0];
        if (uVar8 <= auStack_34[0]) {
          uVar10 = uVar8;
        }
        thunk_FUN_ram_4000500c(param_2 + uVar9,uVar11,uVar10 & 0xffff);
      }
      uStack_38 = uVar9 + auStack_34[0];
      if (uVar1 < uVar9 + auStack_34[0]) {
        uStack_38 = uVar1;
      }
      goto LAB_ram_4004b128;
    }
    thunk_FUN_ram_4000500c(param_2,iVar2,param_3);
    uStack_38 = param_3;
  }
  iVar2 = 0;
  *(uint *)(param_1[2] + 8) = *(int *)(param_1[2] + 8) + uStack_38;
LAB_ram_4004b12c:
  if (param_4 != (uint *)0x0) {
    *param_4 = uStack_38;
  }
  return iVar2;
}


/* NanoCore 1.12, address 0x4004b1fc.
 * REA evidence: ev_5b66ae18fc5018a42936c43b836bb18c13c84cb9623cf99df91129af1f18978f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004b1fc(undefined4 *param_1,uint param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 auStack_14 [3];
  
  iVar1 = param_1[1];
  if (iVar1 == 0) {
    iVar1 = 0xb;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0x1c);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      iVar1 = 9;
    }
    else {
      if (*(int *)(iVar1 + 4) == 0) {
LAB_ram_4004b25e:
                    /* WARNING: Could not recover jumptable at 0x4004b266. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar1 = (*UNRECOVERED_JUMPTABLE)(iVar1,*param_1,param_2,param_3);
        return iVar1;
      }
      if (param_3 == 1) {
        puVar2 = (uint *)param_1[2];
        param_2 = puVar2[2] + param_2;
        puVar2[2] = param_2;
        if ((param_2 < *puVar2) || (puVar2[1] < param_2)) {
          param_3 = 0;
          goto LAB_ram_4004b25e;
        }
      }
      else {
        if (param_3 == 2) {
          iVar1 = (*UNRECOVERED_JUMPTABLE)(iVar1,*param_1,param_2,2);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = (**(code **)(param_1[1] + 0x20))(param_1[1],*param_1,auStack_14);
          if (iVar1 != 0) {
            return iVar1;
          }
          *(undefined4 *)(param_1[2] + 8) = auStack_14[0];
          return 0;
        }
        if (param_3 != 0) {
          return 0;
        }
        puVar2 = (uint *)param_1[2];
        puVar2[2] = param_2;
        if ((param_2 < *puVar2) || (puVar2[1] < param_2)) {
          param_3 = 0;
          goto LAB_ram_4004b25e;
        }
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x4004b292.
 * REA evidence: ev_822217c18ee8a92ec959fc3a473587002b074a54abe25ca3bf6dd355087d50ae
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004b292(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  if (iVar2 == 0) {
    *param_2 = 0;
    return 0xb;
  }
  if (*(code **)(iVar2 + 0x20) == (code *)0x0) {
    *param_2 = 0;
    return 9;
  }
  if (*(int *)(iVar2 + 4) != 0) {
    *param_2 = *(undefined4 *)(param_1[2] + 8);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x4004b2be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(iVar2 + 0x20))(iVar2,*param_1,param_2);
  return uVar1;
}


/* NanoCore 1.12, address 0x4004b2c0.
 * REA evidence: ev_91c30b460f0758550c0adea12c8a4cd8c7fd8614eb33819bbc4e2cb12cdb5f3b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004b2c0(undefined4 param_1)

{
  thunk_FUN_ram_40004f92(param_1,0,0x34);
  return;
}


/* NanoCore 1.12, address 0x4004b2ca.
 * REA evidence: ev_a5422bc317ed98b93d1ebfabb0f6c53ad0dd28e6f94eca037a0729d1bee00a64
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004b2ca(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_ram_4004b446(0x30080e54);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
  }
  return;
}


/* NanoCore 1.12, address 0x4004b2e8.
 * REA evidence: ev_f073af496e2edee748c9dac31c4aced55a40c31e7fac656ef4ae29fda988ec9c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

byte * FUN_ram_4004b2e8(uint param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_ram_4004b610(0x30080e54);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return (byte *)0x0;
    }
    if (*(byte *)*puVar1 == param_1) break;
    puVar1 = (undefined4 *)FUN_ram_4004b61c(0x30080e54);
  }
  return (byte *)*puVar1;
}


/* NanoCore 1.12, address 0x4004b326.
 * REA evidence: ev_c5ee4e819af9152fe2620f3b702951a0c59359afd2086bd969dd08b91b9c267f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004b326(int *param_1,undefined1 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (param_2 == (undefined1 *)0x0) {
    return 0xb;
  }
  iVar1 = FUN_ram_4004b2e8(*param_2);
  uVar6 = 3;
  if (iVar1 != 0) {
    if ((*(code **)(iVar1 + 8) != (code *)0x0) && (iVar3 = (**(code **)(iVar1 + 8))(), iVar3 == 0))
    {
      return 1;
    }
    pcVar4 = *(code **)(iVar1 + 0xc);
    uVar6 = 9;
    if (pcVar4 != (code *)0x0) {
      iVar3 = *(int *)(iVar1 + 4);
      param_1[1] = iVar1;
      if (iVar3 == -1) {
        *param_1 = (int)param_1;
      }
      else {
        iVar3 = 2;
        if (param_2[1] != ':') {
          iVar3 = 1;
        }
        iVar3 = (*pcVar4)(iVar1,param_2 + iVar3,param_3);
        if (0xfffffffd < iVar3 - 1U) {
          return 0xc;
        }
        iVar5 = *(int *)(iVar1 + 4);
        *param_1 = iVar3;
        if (iVar5 == 0) {
          return 0;
        }
      }
      puVar2 = (undefined4 *)FUN_ram_4005a960(0x10);
      iVar1 = *(int *)(iVar1 + 4);
      param_1[2] = (int)puVar2;
      if (iVar1 == -1) {
        uVar6 = *(undefined4 *)(param_2 + 4);
        *puVar2 = 0;
        puVar2[2] = 0;
        puVar2[3] = uVar6;
        uVar6 = *(undefined4 *)(param_2 + 8);
      }
      else {
        *puVar2 = 0xffffffff;
        uVar6 = 0xfffffffe;
      }
      puVar2[1] = uVar6;
      uVar6 = 0;
    }
  }
  return uVar6;
}


/* NanoCore 1.12, address 0x4004b3de.
 * REA evidence: ev_a32ecfc29a8b474c8cd3889737a239f10556ac2de99b7bd1c163a0b1c6cff505
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char * FUN_ram_4004b3de(int param_1)

{
  char cVar1;
  int iVar2;
  
  for (iVar2 = thunk_FUN_ram_4000517a(); iVar2 != 0; iVar2 = iVar2 + -1) {
    cVar1 = *(char *)(param_1 + iVar2);
    if (cVar1 == '.') {
      return (char *)(iVar2 + 1 + param_1);
    }
    if ((cVar1 == '/') || (cVar1 == '\\')) break;
  }
  return s_Do_not_find_subtype_for_0x_02x_ram_400999ac + 0x20;
}


/* NanoCore 1.12, address 0x4004b422.
 * REA evidence: ev_9fd96fc7911f855a28e9bb7ba803b2faa52c271991cd83ae562a47a8519a37e7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004b422(int *param_1,int param_2,undefined4 param_3)

{
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + *param_1) = param_3;
  }
  return;
}


/* NanoCore 1.12, address 0x4004b42c.
 * REA evidence: ev_b7e98080e3c5a5c2ab2d1c5473e7f0a2e112a4c6293bb1ee8fc8cd82bc7f3d02
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004b42c(int *param_1,int param_2,undefined4 param_3)

{
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + *param_1 + 4) = param_3;
  }
  return;
}


/* NanoCore 1.12, address 0x4004b436.
 * REA evidence: ev_6e2dee7e5444b823f758ba455037e6d13bd3bda3ee0363603dfc565489221520
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004b436(uint *param_1,int param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_2 + 3U & 0xfffffffc;
  return;
}


/* NanoCore 1.12, address 0x4004b446.
 * REA evidence: ev_74961994a43b6737d74d2a44562f40d0c24e1349139ccba07f9b6908a73fbde1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004b446(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_4005a952(*param_1 + 8);
  if (iVar1 != 0) {
    FUN_ram_4004b422(param_1,iVar1,0);
    FUN_ram_4004b42c(param_1,iVar1,param_1[1]);
    if (param_1[1] != 0) {
      FUN_ram_4004b422(param_1,param_1[1],iVar1);
    }
    param_1[1] = iVar1;
    if (param_1[2] == 0) {
      param_1[2] = iVar1;
    }
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x4004b490.
 * REA evidence: ev_11c63c646bb977b19ba1bbe39d3ccd6e815f96a6f0e152c5cfe1c8838d5ad21a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004b490(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 == (int *)0x0) || (param_2 == 0)) {
    iVar1 = 0;
  }
  else {
    if (param_2 == param_1[1]) {
      iVar1 = FUN_ram_4004b446();
      return iVar1;
    }
    iVar1 = FUN_ram_4005a952(*param_1 + 8);
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)(param_2 + *param_1);
      FUN_ram_4004b42c(param_1,uVar2,iVar1);
      FUN_ram_4004b422(param_1,iVar1,uVar2);
      FUN_ram_4004b422(param_1,param_2,iVar1);
      FUN_ram_4004b42c(param_1,iVar1,param_2);
    }
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x4004b508.
 * REA evidence: ev_213ec69f49500850fea02a783e88a8bf3d094130cf545b14408345fb59d68fd6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004b508(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_4005a952(*param_1 + 8);
  if (iVar1 != 0) {
    FUN_ram_4004b42c(param_1,iVar1,0);
    FUN_ram_4004b422(param_1,iVar1,param_1[2]);
    if (param_1[2] != 0) {
      FUN_ram_4004b42c(param_1,param_1[2],iVar1);
    }
    param_1[2] = iVar1;
    if (param_1[1] == 0) {
      param_1[1] = iVar1;
    }
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x4004b552.
 * REA evidence: ev_e33f6a4681e83385c76a4425620dc5a267c4a97c1b1a6b94c320c44d5eccae0c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004b552(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar2 = *param_1;
  if (param_2 == param_1[1]) {
    iVar2 = *(int *)(param_2 + iVar2 + 4);
    iVar1 = 0;
    param_1[1] = iVar2;
    if (iVar2 != 0) {
LAB_ram_4004b5b8:
      FUN_ram_4004b422(param_1,iVar2,iVar1);
      return;
    }
    param_1[2] = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + iVar2);
    if (param_2 != param_1[2]) {
      iVar2 = *(int *)(param_2 + iVar2 + 4);
      FUN_ram_4004b42c(param_1,iVar1,iVar2);
      goto LAB_ram_4004b5b8;
    }
    param_1[2] = iVar1;
    if (iVar1 != 0) {
      FUN_ram_4004b42c(param_1,iVar1,0);
      return;
    }
    param_1[1] = 0;
  }
  return;
}


/* NanoCore 1.12, address 0x4004b5c6.
 * REA evidence: ev_5c306221ab542eac0314861880c7af4dfa001a45ffce8279d5d5f1d20f6e42c9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004b5c6(int *param_1,code *param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar1 = param_1[1];
  while (iVar1 != 0) {
    iVar2 = *(int *)(*param_1 + iVar1 + 4);
    if (param_2 == (code *)0x0) {
      FUN_ram_4004b552(param_1,iVar1);
      FUN_ram_4005a988(iVar1);
      iVar1 = iVar2;
    }
    else {
      (*param_2)(iVar1);
      iVar1 = iVar2;
    }
  }
  return;
}


/* NanoCore 1.12, address 0x4004b610.
 * REA evidence: ev_ccb0774087fac8375b29e528cfa4a7c781f25110d28ffe11f5013a82ad6a0762
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004b610(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4004b616.
 * REA evidence: ev_beafd92e01d4eab443a04b6f91006842676d2683b22e74c7de089dbcc676a446
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004b616(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4004b61c.
 * REA evidence: ev_e24add549aa94891892e39b13c5f48309a3f197fc102539ed3024eab8dcacba4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004b61c(int *param_1,int param_2)

{
  return *(undefined4 *)(param_2 + *param_1 + 4);
}


/* NanoCore 1.12, address 0x4004b624.
 * REA evidence: ev_403dceee8858561bdb0763e9b5c27471092bdcc6489d1101b4309de7a61b2de9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004b624(int *param_1,int param_2)

{
  return *(undefined4 *)(param_2 + *param_1);
}


/* NanoCore 1.12, address 0x4004b62c.
 * REA evidence: ev_28c8e4e3382eebbc8418022c007c62f130c92682ca6b164dee8a07af673ea3ad
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004b62c(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 != param_3) {
    if (param_3 == 0) {
      iVar1 = 0;
      if (param_1 != (int *)0x0) {
        iVar1 = param_1[2];
      }
    }
    else {
      iVar1 = *(int *)(param_3 + *param_1);
    }
    if (iVar1 != param_2) {
      FUN_ram_4004b552();
      FUN_ram_4004b42c(param_1,iVar1,param_2);
      FUN_ram_4004b422(param_1,param_2,iVar1);
      FUN_ram_4004b422(param_1,param_3,param_2);
      FUN_ram_4004b42c(param_1,param_2,param_3);
      if (param_3 == 0) {
        param_1[2] = param_2;
      }
      if (iVar1 == 0) {
        param_1[1] = param_2;
      }
    }
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4004b6a0.
 * REA evidence: ev_818b5ec4583287f56a81bd6f0ae4cd09a5856b0ae02727d829c3fde55dc7d2f2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004b6a0(int param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if ((param_1 != 0) && (bVar1 = false, *(int *)(param_1 + 4) == 0)) {
    bVar1 = *(int *)(param_1 + 8) == 0;
  }
  return bVar1;
}


/* NanoCore 1.12, address 0x4004b6b4.
 * REA evidence: ev_7cb7b269e7ee049c8ff54ec52304e5e6bc49f262c3865820580d9e8213e27fee
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4004b6b4(uint param_1)

{
  ushort uVar1;
  uint uVar2;
  
  for (; (int)param_1 < 0; param_1 = (int)((param_1 + 0x168) * 0x10000) >> 0x10) {
  }
  for (; 0x167 < (int)param_1; param_1 = (int)((param_1 - 0x168) * 0x10000) >> 0x10) {
  }
  if (0x59 < (int)param_1) {
    param_1 = param_1 & 0xffff;
    if (0x59 < (param_1 - 0x5a & 0xffff)) {
      uVar2 = param_1 - 0xb4 & 0xffff;
      if (uVar2 < 0x5a) {
        uVar1 = *(ushort *)(&DAT_ram_4009e570 + uVar2 * 2);
      }
      else {
        uVar1 = *(ushort *)(&DAT_ram_4009e570 + (0x168 - param_1 & 0xffff) * 2);
      }
      if (-(uint)uVar1 != 0xffff8001) {
        return -(uint)uVar1;
      }
      return 0xffff8000;
    }
    param_1 = 0xb4 - param_1 & 0xffff;
  }
  uVar2 = (uint)*(ushort *)(&DAT_ram_4009e570 + param_1 * 2);
  if (uVar2 == 0x7fff) {
    uVar2 = 0x8000;
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x4004b744.
 * REA evidence: ev_3e414b1d336d3e236bb7cd407d4fd524cf7401464905669183c82344967897db
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4004b850) */

int FUN_ram_4004b744(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if ((param_1 != 0) && (param_1 != 0x400)) {
    iVar7 = 8;
    iVar5 = param_2 * 3;
    iVar6 = (param_4 - param_2) * 3 + param_2 * -3;
    iVar4 = (param_4 - param_2) * -3 + 0x400;
    iVar1 = param_1;
    do {
      iVar2 = iVar4 * iVar1;
      iVar3 = (((((iVar2 >> 10) + iVar6) * iVar1 >> 10) + iVar5) * iVar1 >> 10) - param_1;
      if (iVar3 + 1U < 3) goto LAB_ram_4004b85e;
      iVar2 = (((iVar2 * 3 >> 10) + iVar6 * 2) * iVar1 >> 10) + iVar5;
      if ((iVar2 + 1U < 3) ||
         (iVar2 = FUN_ram_40003808(iVar3 * 0x400,(int)((ulonglong)(longlong)iVar3 >> 0x16),iVar2,
                                   iVar2 >> 0x1f), iVar2 == 0)) break;
      iVar7 = iVar7 + -1;
      iVar1 = iVar1 - iVar2;
    } while (iVar7 != 0);
    iVar1 = 0;
    if ((-1 < param_1) && (iVar1 = 0x400, param_1 < 0x401)) {
      iVar2 = 0x400;
      iVar7 = 0;
      iVar1 = param_1;
      while (iVar3 = ((((iVar4 * iVar1 >> 10) + iVar6) * iVar1 >> 10) + iVar5) * iVar1 >> 10,
            2 < (iVar3 - param_1) + 1U) {
        if (param_1 <= iVar3) {
          iVar2 = iVar1;
          iVar1 = iVar7;
        }
        iVar7 = iVar1;
        iVar1 = (iVar2 - iVar7) / 2 + iVar7;
        if ((iVar7 == iVar1) || (iVar2 <= iVar7)) break;
      }
    }
LAB_ram_4004b85e:
    param_1 = ((((iVar1 * ((param_5 - param_3) * -3 + 0x400) >> 10) +
                (param_5 - param_3) * 3 + param_3 * -3) * iVar1 >> 10) + param_3 * 3) * iVar1 >> 10;
  }
  return param_1;
}


/* NanoCore 1.12, address 0x4004b89a.
 * REA evidence: ev_76c4ac7ed9c2ab9a5bb956f08707f203006f690f2b453187565ab85d2690f673
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004b89a(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  iVar1 = param_5;
  if (param_3 < param_2) {
    if ((param_3 < param_1) && (iVar1 = param_4, param_1 < param_2)) goto LAB_ram_4004b8b8;
  }
  else if ((param_1 < param_3) && (iVar1 = param_4, param_2 < param_1)) {
    if (param_3 == param_2) {
      return param_5;
    }
LAB_ram_4004b8b8:
    if (param_3 - param_2 == 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = ((param_1 - param_2) * (param_5 - param_4)) / (param_3 - param_2);
    }
    return iVar1 + param_4;
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x4004b8d0.
 * REA evidence: ev_29cdc9dd626d60e9d15826d75e5d831e5b4b46771e23d6f4c52753086dc0a6bb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004b8d0(undefined4 param_1)

{
  _DAT_ram_30080d48 = param_1;
  return;
}


/* NanoCore 1.12, address 0x4004b8da.
 * REA evidence: ev_131c7821dccf7325cd08225f2ea8b5a3e30285c7053167f8f4e8cd2a68ccb8da
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4004b8da(uint param_1)

{
  uint3 auStack_14 [4];
  
  if (param_1 < 0x13) {
    FUN_ram_4000303c(auStack_14,param_1 * 3 + 0x4009e628,3);
  }
  else {
    auStack_14[0] = 0;
  }
  return (uint)auStack_14[0];
}


/* NanoCore 1.12, address 0x4004b924.
 * REA evidence: ev_14a0cf1d7be478dee4b0280fb096a3c7f2eabd9e37903f6ddef71d4993350e7c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004b924(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)param_2[1];
  piVar1 = (int *)piVar3[2];
  param_2[1] = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)param_2;
  }
  iVar2 = *param_2;
  *piVar3 = iVar2;
  if (iVar2 == 0) {
    *param_1 = piVar3;
  }
  else if (*(int **)(iVar2 + 8) == param_2) {
    *(int **)(iVar2 + 8) = piVar3;
  }
  else {
    *(int **)(iVar2 + 4) = piVar3;
  }
  piVar3[2] = (int)param_2;
  *param_2 = (int)piVar3;
  return;
}


/* NanoCore 1.12, address 0x4004b94a.
 * REA evidence: ev_7b61fb5fcbcf949fa5b51183ff58abef80fef7e32bcf7f6d0fbb5ec9cb727ee4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004b94a(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)param_2[2];
  piVar1 = (int *)piVar3[1];
  param_2[2] = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)param_2;
  }
  iVar2 = *param_2;
  *piVar3 = iVar2;
  if (iVar2 == 0) {
    *param_1 = piVar3;
  }
  else if (*(int **)(iVar2 + 4) == param_2) {
    *(int **)(iVar2 + 4) = piVar3;
  }
  else {
    *(int **)(iVar2 + 8) = piVar3;
  }
  piVar3[1] = (int)param_2;
  *param_2 = (int)piVar3;
  return;
}


/* NanoCore 1.12, address 0x4004b970.
 * REA evidence: ev_e1e4a881406e816265130d2a0da31d4a35a9648b96dfc160ee51ff7b868b6a45
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004b970(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  while( true ) {
    piVar1 = param_3;
    if ((param_2 != (int *)0x0) && (*(int *)((int)param_2 + 0xc) != 1)) goto LAB_ram_4004ba6c;
    iVar3 = *param_1;
    if (param_2 == (int *)iVar3) goto LAB_ram_4004b9fc;
    iVar3 = piVar1[1];
    if ((int *)iVar3 != param_2) break;
    iVar3 = piVar1[2];
    if (*(int *)(iVar3 + 0xc) == 0) {
      *(undefined4 *)(iVar3 + 0xc) = 1;
      piVar1[3] = 0;
      FUN_ram_4004b94a(param_1,piVar1);
      iVar3 = piVar1[2];
    }
    iVar2 = *(int *)(iVar3 + 4);
    iVar4 = *(int *)(iVar3 + 8);
    if (((iVar2 != 0) && (*(int *)(iVar2 + 0xc) != 1)) ||
       ((iVar4 != 0 && (*(int *)(iVar4 + 0xc) != 1)))) {
      if ((iVar4 == 0) || (*(int *)(iVar4 + 0xc) == 1)) {
        *(undefined4 *)(iVar2 + 0xc) = 1;
        *(undefined4 *)(iVar3 + 0xc) = 0;
        FUN_ram_4004b924(param_1);
        iVar3 = piVar1[2];
      }
      iVar2 = *(int *)(iVar3 + 8);
      *(int *)(iVar3 + 0xc) = piVar1[3];
      piVar1[3] = 1;
      *(undefined4 *)(iVar2 + 0xc) = 1;
      FUN_ram_4004b94a(param_1,piVar1);
LAB_ram_4004b9fa:
      iVar3 = *param_1;
LAB_ram_4004b9fc:
      param_2 = (int *)iVar3;
      if (iVar3 != 0) {
LAB_ram_4004ba6c:
        *(undefined4 *)((int)param_2 + 0xc) = 1;
      }
      return;
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
LAB_ram_4004b9c4:
    param_3 = (int *)*piVar1;
    param_2 = piVar1;
  }
  if (*(int *)(iVar3 + 0xc) == 0) {
    *(undefined4 *)(iVar3 + 0xc) = 1;
    piVar1[3] = 0;
    FUN_ram_4004b924(param_1,piVar1);
    iVar3 = piVar1[1];
  }
  iVar2 = *(int *)(iVar3 + 4);
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0xc) == 1)) {
    iVar4 = *(int *)(iVar3 + 8);
    if ((iVar4 == 0) || (*(int *)(iVar4 + 0xc) == 1)) {
      *(undefined4 *)(iVar3 + 0xc) = 0;
      goto LAB_ram_4004b9c4;
    }
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0xc) == 1)) {
      *(undefined4 *)(iVar4 + 0xc) = 1;
      *(undefined4 *)(iVar3 + 0xc) = 0;
      FUN_ram_4004b94a(param_1,iVar3);
      iVar3 = piVar1[1];
    }
  }
  *(int *)(iVar3 + 0xc) = piVar1[3];
  iVar3 = *(int *)(iVar3 + 4);
  piVar1[3] = 1;
  *(undefined4 *)(iVar3 + 0xc) = 1;
  FUN_ram_4004b924(param_1,piVar1);
  goto LAB_ram_4004b9fa;
}


/* NanoCore 1.12, address 0x4004ba72.
 * REA evidence: ev_2127f0d90ddb8cc2f060b1605103cf6ca192069335d967a8a2d03f25ff111119
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004ba72(undefined4 *param_1,int param_2,int param_3)

{
  if (((param_1 != (undefined4 *)0x0) && (param_2 != 0)) && (param_3 != 0)) {
    thunk_FUN_ram_40004f92(param_1,0,0xc);
    param_1[1] = param_2;
    param_1[2] = param_3;
    *param_1 = 0;
    return 1;
  }
  return 0;
}


/* NanoCore 1.12, address 0x4004bab0.
 * REA evidence: ev_fa2c1ec9e849f6c24a070ca802f891d48d3e193a9abd136a097008f669131bb7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004bab0(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    while (iVar1 != 0) {
      iVar2 = (*(code *)param_1[1])(param_2,*(undefined4 *)(iVar1 + 0x10));
      if (iVar2 == 0) {
        return iVar1;
      }
      if (iVar2 < 0) {
        iVar1 = *(int *)(iVar1 + 4);
      }
      else {
        iVar1 = *(int *)(iVar1 + 8);
      }
    }
  }
  return 0;
}


/* NanoCore 1.12, address 0x4004baea.
 * REA evidence: ev_1660615dc430f79a4d0df0e06632db494b61f58bfe10078b685d1c2d888ec713
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int * FUN_ram_4004baea(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  
  if (param_1 != (int *)0x0) {
    piVar4 = (int *)FUN_ram_4004bab0();
    if (piVar4 != (int *)0x0) {
      return piVar4;
    }
    piVar4 = (int *)FUN_ram_4005a960(0x14);
    if (piVar4 != (int *)0x0) {
      iVar5 = FUN_ram_4005a960(param_1[2]);
      piVar4[4] = iVar5;
      if (iVar5 != 0) {
        iVar1 = *param_1;
        piVar4[3] = 0;
        piVar4[1] = 0;
        piVar4[2] = 0;
        if (iVar1 == 0) {
          *param_1 = (int)piVar4;
          *piVar4 = 0;
          piVar4[3] = 1;
          return piVar4;
        }
        piVar4[4] = param_2;
        do {
          iVar2 = iVar1;
          iVar1 = (*(code *)param_1[1])(piVar4[4],*(undefined4 *)(iVar2 + 0x10));
          if (iVar1 < 0) {
            iVar1 = *(int *)(iVar2 + 4);
          }
          else {
            iVar1 = *(int *)(iVar2 + 8);
          }
        } while (iVar1 != 0);
        pcVar7 = (code *)param_1[1];
        uVar6 = *(undefined4 *)(iVar2 + 0x10);
        *piVar4 = iVar2;
        piVar4[3] = 0;
        iVar1 = (*pcVar7)(param_2,uVar6);
        piVar10 = piVar4;
        if (iVar1 < 0) {
          *(int **)(iVar2 + 4) = piVar4;
        }
        else {
          *(int **)(iVar2 + 8) = piVar4;
        }
        do {
          while( true ) {
            piVar3 = (int *)*piVar10;
            if ((piVar3 == (int *)0x0) || (piVar3[3] != 0)) {
              *(undefined4 *)(*param_1 + 0xc) = 1;
              piVar4[4] = iVar5;
              return piVar4;
            }
            piVar9 = (int *)*piVar3;
            piVar8 = (int *)piVar9[1];
            if (piVar3 != piVar8) break;
            piVar8 = (int *)piVar9[2];
            if ((piVar8 == (int *)0x0) || (piVar8[3] != 0)) {
              piVar11 = (int *)piVar3[2];
              piVar8 = piVar3;
              if (piVar11 == piVar10) {
                FUN_ram_4004b94a(param_1,piVar3);
                piVar8 = piVar11;
                piVar10 = piVar3;
              }
              piVar8[3] = 1;
              piVar9[3] = 0;
              FUN_ram_4004b924(param_1,piVar9);
            }
            else {
LAB_ram_4004bbd0:
              piVar8[3] = 1;
              piVar3[3] = 1;
              piVar9[3] = 0;
              piVar10 = piVar9;
            }
          }
          if ((piVar8 != (int *)0x0) && (piVar8[3] == 0)) goto LAB_ram_4004bbd0;
          piVar11 = (int *)piVar3[1];
          piVar8 = piVar3;
          if (piVar10 == piVar11) {
            FUN_ram_4004b924(param_1,piVar3);
            piVar8 = piVar11;
            piVar10 = piVar3;
          }
          piVar8[3] = 1;
          piVar9[3] = 0;
          FUN_ram_4004b94a(param_1,piVar9);
        } while( true );
      }
      FUN_ram_4005a988(piVar4);
    }
  }
  return (int *)0x0;
}


/* NanoCore 1.12, address 0x4004bc34.
 * REA evidence: ev_0487663e2de9bf5d89aeb61657f048daa479633722f756cec8664ee20536deaa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004bc34(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  piVar1 = (int *)param_2[2];
  piVar3 = piVar1;
  if (((int *)param_2[1] == (int *)0x0) || (piVar3 = (int *)param_2[1], piVar1 == (int *)0x0)) {
    piVar1 = (int *)*param_2;
    iVar5 = param_2[3];
    if (piVar3 != (int *)0x0) {
      *piVar3 = (int)piVar1;
    }
    if (piVar1 != (int *)0x0) {
      if ((int *)piVar1[1] == param_2) {
        piVar1[1] = (int)piVar3;
      }
      else {
        piVar1[2] = (int)piVar3;
      }
      iVar6 = 1;
      goto LAB_ram_4004bc82;
    }
    *param_1 = (int)piVar3;
    if (iVar5 != 1) goto LAB_ram_4004bcbe;
  }
  else {
    do {
      piVar2 = piVar1;
      piVar1 = (int *)piVar2[1];
    } while ((int *)piVar2[1] != (int *)0x0);
    iVar5 = *param_2;
    if (iVar5 == 0) {
      *param_1 = (int)piVar2;
    }
    else if (*(int **)(iVar5 + 4) == param_2) {
      *(int **)(iVar5 + 4) = piVar2;
    }
    else {
      *(int **)(iVar5 + 8) = piVar2;
    }
    piVar4 = (int *)*piVar2;
    piVar3 = (int *)piVar2[2];
    iVar6 = piVar2[3];
    piVar1 = piVar2;
    if (param_2 != piVar4) {
      if (piVar3 != (int *)0x0) {
        *piVar3 = (int)piVar4;
      }
      iVar5 = param_2[2];
      piVar4[1] = (int)piVar3;
      piVar2[2] = iVar5;
      *(int **)param_2[2] = piVar2;
      piVar1 = piVar4;
    }
    *piVar2 = *param_2;
    piVar2[3] = param_2[3];
    piVar2[1] = param_2[1];
    *(int **)param_2[1] = piVar2;
    iVar5 = 1;
LAB_ram_4004bc82:
    if ((iVar5 != iVar6) || (param_1 == (int *)0x0)) goto LAB_ram_4004bcbe;
  }
  FUN_ram_4004b970(param_1,piVar3,piVar1);
LAB_ram_4004bcbe:
  iVar5 = param_2[4];
  FUN_ram_4005a988(param_2);
  return iVar5;
}


/* NanoCore 1.12, address 0x4004bcd2.
 * REA evidence: ev_078237fd6fea7748a6d6a42640ff4820190eb04609047ca3a3c0c9e2ce7275c7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004bcd2(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_ram_4004bc34();
    if (iVar1 != 0) {
      FUN_ram_4005a988();
    }
    return iVar1 != 0;
  }
  return false;
}


/* NanoCore 1.12, address 0x4004bce0.
 * REA evidence: ev_a5aad1e03a5c3293aa8ea8bf18a6c8718b077e541379caf0dbb4bb45ac312179
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004bce0(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4004bc34();
  if (iVar1 != 0) {
    FUN_ram_4005a988();
  }
  return iVar1 != 0;
}


/* NanoCore 1.12, address 0x4004bcf2.
 * REA evidence: ev_f72d966d2e9baa30a36007aab8b3ca0ea7538f3cbf9bc56e728416d74e318760
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004bcf2(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (param_1 != (int *)0x0) {
    piVar2 = (int *)*param_1;
    while (piVar1 = piVar2, piVar1 != (int *)0x0) {
      piVar2 = (int *)piVar1[1];
      if (((int *)piVar1[1] == (int *)0x0) &&
         (piVar2 = (int *)piVar1[2], (int *)piVar1[2] == (int *)0x0)) {
        piVar2 = (int *)*piVar1;
        if (piVar2 != (int *)0x0) {
          if ((int *)piVar2[1] == piVar1) {
            piVar2[1] = 0;
          }
          else {
            piVar2[2] = 0;
          }
        }
        FUN_ram_4005a988(piVar1[4]);
        FUN_ram_4005a988(piVar1);
      }
    }
    *param_1 = 0;
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4004bd46.
 * REA evidence: ev_21fe06da1d0f99b0e343f5e3210410ba2c13b7f517404d2c4e1b3eed7d16346a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004bd46(undefined4 param_1)

{
  thunk_FUN_ram_40004f92(param_1,0,0xc);
  return;
}


/* NanoCore 1.12, address 0x4004bd4e.
 * REA evidence: ev_b323c42fb1f1573fabef8333c593c83c128557638e0175dac2ab4988f688a422
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004bd4e(undefined4 *param_1)

{
  if (*(char *)(param_1 + 2) != -1) {
    FUN_ram_4005a988(*param_1);
  }
  thunk_FUN_ram_40004f92(param_1,0,0xc);
  return;
}


/* NanoCore 1.12, address 0x4004bd78.
 * REA evidence: ev_5aa767a101e712bcf7e6b282076324c90edd17f1d7533e5144adf7c1f6f3203b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004bd78(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  uVar3 = (uint)*(byte *)(param_1 + 2);
  if (0xfd < (uVar3 - 1 & 0xff)) {
    return 0;
  }
  iVar6 = *param_1;
  iVar7 = iVar6 + uVar3 * 4;
  uVar5 = 0;
  do {
    if (*(byte *)(iVar7 + uVar5) == param_2) {
      iVar1 = FUN_ram_4005a952((uVar3 - 1) * 5);
      if (iVar1 == 0) {
        return 0;
      }
      *param_1 = iVar1;
      uVar3 = 0;
      bVar4 = (char)param_1[2] - 1;
      *(byte *)(param_1 + 2) = bVar4;
      iVar2 = 0;
      do {
        if (*(byte *)(iVar7 + uVar3) != param_2) {
          *(undefined4 *)(iVar1 + iVar2 * 4) = *(undefined4 *)(iVar6 + uVar3 * 4);
          *(undefined1 *)(iVar1 + (uint)bVar4 * 4 + iVar2) = *(undefined1 *)(iVar7 + uVar3);
          iVar2 = iVar2 + 1;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 <= *(byte *)(param_1 + 2));
      FUN_ram_4005a988(iVar6);
      return 1;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < uVar3);
  return 0;
}


/* NanoCore 1.12, address 0x4004be1a.
 * REA evidence: ev_6fdef7638d0790322dc200da5bdf4cb5415461bf83cd02cfb4351b5a4d62b56e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004be1a(int *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = (uint)*(byte *)(param_1 + 2);
  if (uVar5 != 0xff) {
    iVar1 = *param_1;
    if (iVar1 == 0) {
LAB_ram_4004be3c:
      iVar1 = FUN_ram_4005a99a(iVar1,(uVar5 + 1 & 0xff) * 5);
      if (iVar1 != 0) {
        *param_1 = iVar1;
        iVar2 = iVar1 + (uint)*(byte *)(param_1 + 2) * 4;
        for (iVar6 = iVar2 + (uint)*(byte *)(param_1 + 2); iVar2 != iVar6; iVar6 = iVar6 + -1) {
          *(undefined1 *)(iVar6 + 3) = *(undefined1 *)(iVar6 + -1);
        }
        bVar4 = (char)param_1[2] + 1;
        *(byte *)(param_1 + 2) = bVar4;
        uVar5 = param_2 >> 2;
        *(char *)(iVar1 + (uint)bVar4 * 5 + -1) = (char)param_2;
        *(undefined4 *)(iVar1 + (uint)*(byte *)(param_1 + 2) * 4 + -4) = param_3;
        if (0x1f < uVar5) {
          uVar5 = 0x1f;
        }
        param_1[1] = param_1[1] | 1 << (uVar5 & 0x1f);
      }
    }
    else {
      uVar3 = uVar5;
      do {
        if (uVar3 == 0) goto LAB_ram_4004be3c;
        uVar3 = uVar3 - 1;
      } while (*(byte *)(iVar1 + uVar5 * 4 + uVar3) != param_2);
      *(undefined4 *)(iVar1 + uVar3 * 4) = param_3;
    }
  }
  return;
}


/* NanoCore 1.12, address 0x4004bed6.
 * REA evidence: ev_2798050c1e95756c2494b256824f9de88f1bfb9428424a8a4fa89e0411a90961
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004bed6(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  uVar1 = (uint)*(byte *)(param_1 + 2);
  param_1 = (undefined4 *)*param_1;
  if (uVar1 == 0xff) {
    do {
      puVar4 = param_1;
      if ((byte *)*puVar4 == (byte *)0x0) {
        return 0;
      }
      param_1 = puVar4 + 2;
    } while (*(byte *)*puVar4 != param_2);
    uVar3 = puVar4[1];
  }
  else {
    uVar2 = 0;
    while( true ) {
      if (uVar1 <= uVar2) {
        return 0;
      }
      if (*(byte *)((int)param_1 + uVar2 + uVar1 * 4) == param_2) break;
      uVar2 = uVar2 + 1;
    }
    uVar3 = param_1[uVar2];
  }
  *param_3 = uVar3;
  return 1;
}


/* NanoCore 1.12, address 0x4004bf1c.
 * REA evidence: ev_377141d202221c463b7f55c86fce22da96062f994ee2d22d70fbb5e3dd841d8b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined ** FUN_ram_4004bf1c(uint param_1)

{
  undefined4 uStack_4;
  
  if (param_1 < 0x61) {
    if (param_1 < 0x1c) {
      if ((param_1 & 0xfd) == 5) {
        return (undefined **)0x1fffffff;
      }
    }
    else {
      switch(param_1 - 0x1c & 0xff) {
      case 0:
        uStack_4 = (undefined **)(uint)CONCAT12(DAT_ram_4009e80a,DAT_ram_4009e808);
        return uStack_4;
      case 6:
      case 8:
      case 9:
      case 0xd:
      case 0x16:
      case 0x1e:
      case 0x22:
      case 0x28:
      case 0x31:
      case 0x37:
      case 0x3d:
      case 0x43:
      case 0x44:
        return (undefined **)0xff;
      case 0x18:
        return (undefined **)0xf;
      case 0x3e:
        return &PTR_LAB_ram_400136ec_ram_40099ce0;
      }
    }
  }
  else if (param_1 < 0x6e) {
    if (0x6b < param_1) {
      return (undefined **)0x100;
    }
  }
  else if (param_1 == 0x74) {
    return (undefined **)0x100;
  }
  return (undefined **)0x0;
}


/* NanoCore 1.12, address 0x4004bfb6.
 * REA evidence: ev_88a2bbcd3eca8113d49fd09b5aefc799addb1cc1015ea0cb9a3c5eb6eb7c6a33
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004bfb6(int param_1)

{
  return *(char *)(param_1 + 8) == '\0';
}


/* NanoCore 1.12, address 0x4004bfc0.
 * REA evidence: ev_64db192ce02fe79b06888418d7fc0a27505165c8ff65760fc73364009cc0e549
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_ram_4004bfc0(uint param_1)

{
  uint uVar1;
  
  if (param_1 == 0xff) {
    return 0x3f;
  }
  if (param_1 != 0) {
    if (param_1 < 0x8d) {
      return (&DAT_ram_4009e778)[param_1];
    }
    if ((_DAT_ram_30080d10 != 0) && (uVar1 = param_1 + 0x73 & 0xff, uVar1 < _DAT_ram_30080d08)) {
      return *(undefined1 *)(_DAT_ram_30080d10 + uVar1);
    }
  }
  return 0;
}


