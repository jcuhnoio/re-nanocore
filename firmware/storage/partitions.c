/* NanoCore 1.10 analysis module: storage/partitions.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40006df2.
 * REA evidence: ev_273783448cfc822a3c2da3209a901e907bc5ba4ae00b3038a94492c2c373c8d0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 fal_partition_get_flash(int partition)

{
  return *(undefined4 *)(_fal_partition_flash_devices + (partition - _fal_partition_table >> 6) * 4);
}


/* NanoCore 1.10, address 0x40006efa.
 * REA evidence: ev_f88e5b446dff85345459cf23cba3068474e1051e169cb2a3534a7ca37ac60645
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int fal_partition_find(char *partition_name)

{
  int partition_count;
  int partition_cursor;
  int partition_index;
  int name_comparison;
  
  partition_count = _fal_partition_count;
  partition_index = 0;
  partition_cursor = _fal_partition_table;
  while( true ) {
    if (partition_count == partition_index) {
      return 0;
    }
    name_comparison = strcmp(partition_name,(char *)(partition_cursor + 4));
    if (name_comparison == 0) break;
    partition_index = partition_index + 1;
    partition_cursor = partition_cursor + 0x40;
  }
  return partition_cursor;
}


/* NanoCore 1.10, address 0x40006f5e.
 * REA evidence: ev_531c9107feac9efc58202b9f930e8254ad287880d00e3d850f2491dcee45c2bd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 fal_partition_read(int partition,int partition_offset,undefined4 destination,int byte_count)

{
  int flash_device;
  undefined4 read_result;
  
  if ((uint)(partition_offset + byte_count) <= *(uint *)(partition + 0x38)) {
    flash_device = fal_partition_get_flash();
    if (flash_device != 0) {
                    /* WARNING: Could not recover jumptable at 0x40006f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      read_result = (**(code **)(flash_device + 0x28))(partition_offset + *(int *)(partition + 0x34),destination,byte_count);
      return read_result;
    }
  }
  return 0xffffffff;
}


