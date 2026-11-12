Architecture map
================

This map records established entry points and data structures. It is not a
reconstruction of every task, interrupt or DSP algorithm.

Image and runtime
-----------------

The FIT image contains two RISC-V load segments: 32,772 bytes at ``0x30040000``
and 630,568 bytes at ``0x40000000``, with entry at ``0x40000000``. Both segments
contain mixed code/data; they are not a bootloader/application division.
The separate updater was captured from the SPL flash partition.

The image uses RV32 instructions, compressed instructions, floating-point code,
legacy P packed operations and T-Head extensions. The analysis ELF's ILP32D
metadata is inferred from instruction use and the matching SDK configuration.
The exact chip SKU and complete audio callback ABI remain unconfirmed.

Confirmed areas
---------------

``protocol/midi.c``
  ``nc_sysex_unpack_7bit`` reconstructs bytes from groups of seven payload bytes
  and their high-bit prefix. ``nc_register_opcode_handler`` stores handlers in
  a table at ``0x300658fc``. ``nc_dispatch_request`` parses requests and dispatches
  through registered handlers and fallback logic. These are separate stages;
  their placement together does not assert that each calls the next directly.

``protocol/*_commands.c``
  The preset group is registered around ``0x40012a84``. AMP/IR groups are
  registered around ``0x4008eb1e``. Twenty-two handler bindings are known from
  immediate opcode values and function pointers passed to the registrar.
  Names such as ``nc_handle_opcode_49`` intentionally leave behavior unresolved.
  These files contain protocol handlers, not recovered AMP/IR DSP engines.

``storage/partitions.c``
  ``fal_partition_find`` compares names in 64-byte FAL partition records.
  ``fal_partition_get_flash`` maps a partition to its backing device.
  ``fal_partition_read`` checks bounds, adds the partition's physical offset
  and invokes its device read operation. Generated prototypes are imperfect:
  the partition argument retained in a machine register is omitted at one
  decompiled call site. Consult assembly before implementing replacements.

``update/updater_image.c``
  ``dfu_find_updater_image`` scans AIC headers in SPL and checks the updater's
  load/entry addresses and bounds. Its earlier truncation was caused by an
  unsupported ADD64 instruction; the expanded processor model resolves it.

Flash partition declarations
----------------------------

All use the application's ``norflash0`` device. These are declarations, not
an independent measurement of chip capacity::

    spl          0x000000 .. 0x026000
    env          0x026000 .. 0x028000
    os           0x028000 .. 0x0fc000
    presets      0x0fc000 .. 0x1a8000
    ui_asset     0x1a8000 .. 0x1ff000
    device_info  0x1ff000 .. 0x200000

Named data
----------

* ``0x30046358``: flash_partition_definitions
* ``0x300499ac``: fal_partition_flash_devices
* ``0x300499b0``: fal_partition_table
* ``0x300499b4``: fal_partition_count
* ``0x300658fc``: nc_opcode_handlers
* ``0x30067548``: nc_message_listener_count
* ``0x3006754c``: nc_message_listeners

Reading unknown code
--------------------

``unresolved/bank_3`` and ``unresolved/bank_4`` refer to address regions, not CPU
cores or functional subsystems. Files use the function entry's 4 KiB window;
a long function can cross the window boundary. This is a browsing convention.

The call index extracts named call expressions from pseudocode, excluding
strings/comments and declarations. It cannot recover indirect destinations,
and decompiler omissions can hide real calls. Duplicate-name references stay
ambiguous. Use addresses, original instruction evidence and runtime experiments
to establish stronger relationships.

Research priorities
-------------------

The `review queue <REVIEW.rst>`_ lists opaque operations and commonly called
unknown routines. Resolve low-level helpers before assigning meaning to their
callers. Trace audio entry/callback paths before grouping DSP code by effect.
Nearby UI strings alone do not justify names such as pitch-shifter or reverb.

Supporting records in the parent repository
------------------------------------------

* ``docs/vendor-instruction-set.txt`` and ``evidence/vendor-isa.json``
* ``docs/firmware-source.txt`` and ``evidence/firmware-source.json``
* ``docs/direct-firmware-analysis.txt`` and ``evidence/direct-firmware-analysis.json``
* ``evidence/firmware-source-names.json``
