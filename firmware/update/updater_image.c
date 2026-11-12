/* NanoCore 1.10 analysis module: update/updater_image.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40012f62.
 * REA evidence: ev_67273861aaa90aa12d0ac2ac8064868be32f1b2267b3151c93a5635b0a1a6746
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 dfu_find_updater_image(int param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  char local_130;
  char cStack_12f;
  char cStack_12e;
  char cStack_12d;
  undefined1 auStack_11c [4];
  undefined1 auStack_118 [4];
  undefined1 auStack_114 [236];
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  uVar5 = 0;
  do {
    uVar1 = uVar5 + 0x100;
    if ((*(uint *)(param_1 + 0x38) < uVar1) ||
       (iVar3 = fal_partition_read(param_1,uVar5,&local_130,0x100), iVar3 != 0x100))
    goto LAB_ram_40012fb8;
    uVar5 = uVar1;
  } while ((local_130 != 'A') ||
          ((((cStack_12f != 'I' || (cStack_12e != 'C')) || (cStack_12d != ' ')) ||
           ((iVar3 = read_u32_le(auStack_118), iVar3 != 0x40300000 ||
            (puVar4 = (undefined1 *)read_u32_le(auStack_114), puVar4 != &SUB_ram_40300100))))));
  uVar5 = read_u32_le(auStack_11c);
  if ((uVar5 == 0) ||
     ((((int)((ulonglong)uVar5 + 0x40300100 >> 0x20) != 0 ||
       (0x40340000 < (uint)((ulonglong)uVar5 + 0x40300100))) ||
      (*(uint *)(param_1 + 0x38) < uVar1 + uVar5)))) {
LAB_ram_40012fb8:
    uVar2 = 0xffffffff;
  }
  else {
    *param_2 = uVar1;
    *param_3 = uVar5;
    uVar2 = 0;
  }
  return uVar2;
}


