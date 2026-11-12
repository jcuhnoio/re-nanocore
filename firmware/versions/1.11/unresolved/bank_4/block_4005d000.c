/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4005d000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4005de84.
 * REA evidence: ev_cf17088861f11ca494f0d182bbe2cb311ec6aa2145a3300592cfbba8630cc511
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005de84(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_1 != (ulonglong *)0x0) {
    memset(param_1,0,0x74824);
    uVar1 = (ulonglong)DAT_ram_40094ed8;
    uVar2 = (ulonglong)DAT_ram_4009558c;
    uVar3 = (ulonglong)DAT_ram_40099fb8;
    uVar4 = (ulonglong)DAT_ram_40099fbc;
    *param_1 = (ulonglong)DAT_ram_40094664;
    *(undefined **)((int)param_1 + 0x14) = &sedeleg;
    *(ulonglong *)((int)param_1 + 4) = uVar1;
    param_1[1] = uVar2;
    *(ulonglong *)((int)param_1 + 0xc) = uVar3;
    param_1[2] = uVar4;
    FUN_ram_4005c83c(param_1);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4005dee4.
 * REA evidence: ev_98d6cc6df6c754353fb07e4523fb01037aabf370669fe55910eda585e1ef07ab
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005dee4(undefined8 param_1,undefined8 *param_2)

{
  if (((param_2 != (undefined8 *)0x0) && (0.0 < (float)param_1)) &&
     ((float)*param_2 != (float)param_1)) {
    *param_2 = param_1;
    *(undefined **)((int)param_2 + 0x14) = &sedeleg;
    *(undefined1 *)((int)param_2 + 0x16) = 0;
  }
  return;
}


/* NanoCore 1.11, address 0x4005df08.
 * REA evidence: ev_42106b7c7fa4957bd0dcef3e59c81d0a4ce2bfe2dda62098f9bdd164f972c9f9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005df08(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    *(undefined4 *)(param_1 + 0x10) = param_2[3];
    *(undefined4 *)(param_1 + 4) = uVar1;
    *(undefined4 *)(param_1 + 8) = uVar2;
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    *(undefined1 *)(param_1 + 0x14) = 1;
    *(undefined1 *)(param_1 + 0x16) = 0;
  }
  return;
}


/* NanoCore 1.11, address 0x4005df28.
 * REA evidence: ev_014deb84d056eb821d74c0b3a4e4205c6633c5ba84683007f22d66419eb2703f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005df28(int param_1)

{
  if (param_1 != 0) {
    memset(param_1 + 0x1c,0,0x10a8);
    *(undefined2 *)(param_1 + 0x1a) = 0;
    memset(param_1 + 0x14c8,0,0x10000);
    *(undefined2 *)(param_1 + 0x10c6) = 0;
    if ((*(int *)(param_1 + 0x114c8) != 0) && (*(ushort *)(param_1 + 0x114cc) != 0)) {
      memset(*(int *)(param_1 + 0x114c8),0,(uint)*(ushort *)(param_1 + 0x114cc) << 2);
      *(undefined2 *)(param_1 + 0x114ce) = 0;
    }
    if ((*(int *)(param_1 + 0x114d4) != 0) && (*(ushort *)(param_1 + 0x114d8) != 0)) {
      memset(*(int *)(param_1 + 0x114d4),0,(uint)*(ushort *)(param_1 + 0x114d8) << 2);
      *(undefined2 *)(param_1 + 0x114da) = 0;
    }
    if ((*(int *)(param_1 + 0x114e0) != 0) && (*(ushort *)(param_1 + 0x114e4) != 0)) {
      memset(*(int *)(param_1 + 0x114e0),0,(uint)*(ushort *)(param_1 + 0x114e4) << 2);
      *(undefined2 *)(param_1 + 0x114e6) = 0;
    }
    if ((*(int *)(param_1 + 0x114ec) != 0) && (*(ushort *)(param_1 + 0x114f0) != 0)) {
      memset(*(int *)(param_1 + 0x114ec),0,(uint)*(ushort *)(param_1 + 0x114f0) << 2);
      *(undefined2 *)(param_1 + 0x114f2) = 0;
    }
    if ((*(int *)(param_1 + 0x114f8) != 0) && (*(ushort *)(param_1 + 0x114fc) != 0)) {
      memset(*(int *)(param_1 + 0x114f8),0,(uint)*(ushort *)(param_1 + 0x114fc) << 2);
      *(undefined2 *)(param_1 + 0x114fe) = 0;
    }
    if ((*(int *)(param_1 + 0x11504) != 0) && (*(ushort *)(param_1 + 0x11508) != 0)) {
      memset(*(int *)(param_1 + 0x11504),0,(uint)*(ushort *)(param_1 + 0x11508) << 2);
      *(undefined2 *)(param_1 + 0x1150a) = 0;
    }
    if ((*(int *)(param_1 + 0x11510) != 0) && (*(ushort *)(param_1 + 0x11514) != 0)) {
      memset(*(int *)(param_1 + 0x11510),0,(uint)*(ushort *)(param_1 + 0x11514) << 2);
      *(undefined2 *)(param_1 + 0x11516) = 0;
    }
    if ((*(int *)(param_1 + 0x1151c) != 0) && (*(ushort *)(param_1 + 0x11520) != 0)) {
      memset(*(int *)(param_1 + 0x1151c),0,(uint)*(ushort *)(param_1 + 0x11520) << 2);
      *(undefined2 *)(param_1 + 0x11522) = 0;
    }
    if ((*(int *)(param_1 + 0x17d68) != 0) && (*(ushort *)(param_1 + 0x17d6c) != 0)) {
      memset(*(int *)(param_1 + 0x17d68),0,(uint)*(ushort *)(param_1 + 0x17d6c) << 2);
      *(undefined2 *)(param_1 + 0x17d6e) = 0;
    }
    if ((*(int *)(param_1 + 0x17d74) != 0) && (*(ushort *)(param_1 + 0x17d78) != 0)) {
      memset(*(int *)(param_1 + 0x17d74),0,(uint)*(ushort *)(param_1 + 0x17d78) << 2);
      *(undefined2 *)(param_1 + 0x17d7a) = 0;
    }
    if ((*(int *)(param_1 + 0x17d80) != 0) && (*(ushort *)(param_1 + 0x17d84) != 0)) {
      memset(*(int *)(param_1 + 0x17d80),0,(uint)*(ushort *)(param_1 + 0x17d84) << 2);
      *(undefined2 *)(param_1 + 0x17d86) = 0;
    }
    if ((*(int *)(param_1 + 0x18fb0) != 0) && (*(ushort *)(param_1 + 0x18fb4) != 0)) {
      memset(*(int *)(param_1 + 0x18fb0),0,(uint)*(ushort *)(param_1 + 0x18fb4) << 2);
      *(undefined2 *)(param_1 + 0x18fb8) = 0;
      *(undefined4 *)(param_1 + 0x18fbc) = 0;
    }
    *(undefined4 *)(param_1 + 0x746bc) = 0;
    *(undefined4 *)(param_1 + 0x74744) = 0;
    *(undefined4 *)(param_1 + 0x74784) = 0;
    *(undefined4 *)(param_1 + 0x74788) = 0;
    if ((*(int *)(param_1 + 0x18fc0) != 0) && (*(ushort *)(param_1 + 0x18fc4) != 0)) {
      memset(*(int *)(param_1 + 0x18fc0),0,(uint)*(ushort *)(param_1 + 0x18fc4) << 2);
      *(undefined2 *)(param_1 + 0x18fc8) = 0;
      *(undefined4 *)(param_1 + 0x18fcc) = 0;
    }
    *(undefined4 *)(param_1 + 0x746c0) = 0;
    *(undefined4 *)(param_1 + 0x7474c) = 0;
    *(undefined4 *)(param_1 + 0x74790) = 0;
    *(undefined4 *)(param_1 + 0x74794) = 0;
    if ((*(int *)(param_1 + 0x18fd0) != 0) && (*(ushort *)(param_1 + 0x18fd4) != 0)) {
      memset(*(int *)(param_1 + 0x18fd0),0,(uint)*(ushort *)(param_1 + 0x18fd4) << 2);
      *(undefined2 *)(param_1 + 0x18fd8) = 0;
      *(undefined4 *)(param_1 + 0x18fdc) = 0;
    }
    *(undefined4 *)(param_1 + 0x746c4) = 0;
    *(undefined4 *)(param_1 + 0x74754) = 0;
    *(undefined4 *)(param_1 + 0x7479c) = 0;
    *(undefined4 *)(param_1 + 0x747a0) = 0;
    if ((*(int *)(param_1 + 0x18fe0) != 0) && (*(ushort *)(param_1 + 0x18fe4) != 0)) {
      memset(*(int *)(param_1 + 0x18fe0),0,(uint)*(ushort *)(param_1 + 0x18fe4) << 2);
      *(undefined2 *)(param_1 + 0x18fe8) = 0;
      *(undefined4 *)(param_1 + 0x18fec) = 0;
    }
    *(undefined4 *)(param_1 + 0x746c8) = 0;
    *(undefined4 *)(param_1 + 0x7475c) = 0;
    *(undefined4 *)(param_1 + 0x747a8) = 0;
    *(undefined4 *)(param_1 + 0x747ac) = 0;
    if ((*(int *)(param_1 + 0x18ff0) != 0) && (*(ushort *)(param_1 + 0x18ff4) != 0)) {
      memset(*(int *)(param_1 + 0x18ff0),0,(uint)*(ushort *)(param_1 + 0x18ff4) << 2);
      *(undefined2 *)(param_1 + 0x18ff8) = 0;
      *(undefined4 *)(param_1 + 0x18ffc) = 0;
    }
    *(undefined4 *)(param_1 + 0x746cc) = 0;
    *(undefined4 *)(param_1 + 0x74764) = 0;
    *(undefined4 *)(param_1 + 0x747b4) = 0;
    *(undefined4 *)(param_1 + 0x747b8) = 0;
    if ((*(int *)(param_1 + 0x19000) != 0) && (*(ushort *)(param_1 + 0x19004) != 0)) {
      memset(*(int *)(param_1 + 0x19000),0,(uint)*(ushort *)(param_1 + 0x19004) << 2);
      *(undefined2 *)(param_1 + 0x19008) = 0;
      *(undefined4 *)(param_1 + 0x1900c) = 0;
    }
    *(undefined4 *)(param_1 + 0x746d0) = 0;
    *(undefined4 *)(param_1 + 0x7476c) = 0;
    *(undefined4 *)(param_1 + 0x747c0) = 0;
    *(undefined4 *)(param_1 + 0x747c4) = 0;
    if ((*(int *)(param_1 + 0x19010) != 0) && (*(ushort *)(param_1 + 0x19014) != 0)) {
      memset(*(int *)(param_1 + 0x19010),0,(uint)*(ushort *)(param_1 + 0x19014) << 2);
      *(undefined2 *)(param_1 + 0x19018) = 0;
      *(undefined4 *)(param_1 + 0x1901c) = 0;
    }
    *(undefined4 *)(param_1 + 0x746d4) = 0;
    *(undefined4 *)(param_1 + 0x74774) = 0;
    *(undefined4 *)(param_1 + 0x747cc) = 0;
    *(undefined4 *)(param_1 + 0x747d0) = 0;
    if ((*(int *)(param_1 + 0x19020) != 0) && (*(ushort *)(param_1 + 0x19024) != 0)) {
      memset(*(int *)(param_1 + 0x19020),0,(uint)*(ushort *)(param_1 + 0x19024) << 2);
      *(undefined2 *)(param_1 + 0x19028) = 0;
      *(undefined4 *)(param_1 + 0x1902c) = 0;
    }
    *(undefined1 *)(param_1 + 0x746dc) = 0;
    *(undefined4 *)(param_1 + 0x7477c) = 0;
    *(undefined4 *)(param_1 + 0x747d8) = 0;
    *(undefined4 *)(param_1 + 0x747dc) = 0;
    *(undefined4 *)(param_1 + 0x746d8) = 0;
    *(undefined1 *)(param_1 + 0x16) = 0;
    return;
  }
  return;
}


