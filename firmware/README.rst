NanoCore 1.10 reconstructed firmware
===================================

A navigable research source tree containing all 2,645 decompiled functions.
Start with the named modules below; use the address index to follow unresolved
calls. This is annotated C-like decompilation, not the original vendor source
or a buildable firmware project. No device access is needed to explore it.

Start reading
-------------

* `MIDI protocol <protocol/midi.c>`_: seven-bit unpacking, opcode registration,
  message listeners and request dispatch.
* `Preset commands <protocol/preset_commands.c>`_: names, chunk reads, readiness,
  and handlers whose exact semantics are still unnamed.
* `AMP commands <protocol/amp_commands.c>`_ and `IR commands <protocol/ir_commands.c>`_:
  registered command families, including slot information and AMP chunk reads.
* `Flash partitions <storage/partitions.c>`_: partition lookup, backing-device
  selection and partition reads.
* `Updater image <update/updater_image.c>`_: AIC header scanning and bounds checks.
* `Startup <boot/startup.c>`_, `memory helpers <runtime/memory.c>`_ and
  `binary fields <formats/integers.c>`_.

Navigation
----------

* `Architecture and evidence boundaries <ARCHITECTURE.rst>`_
* `All functions, linked to source locations <INDEX.rst>`_
* `Review queue <REVIEW.rst>`_: opaque operations and frequently called unknowns
* `Unidentified code <unresolved/README.rst>`_: grouped by 4 KiB entry-address windows
* ``symbols.tsv``: searchable address/name/file/line index
* ``manifest.json``: original hashes, source ranges, evidence IDs and warnings
* ``callgraph.json``: direct textual calls and explicitly ambiguous names

From the repository root::

    python3 tools/firmware_source/browse_source.py fal_partition_read --calls
    python3 tools/firmware_source/browse_source.py 4008a640
    python3 tools/firmware_source/organize_source.py --output firmware --verify

Organization and coverage
-------------------------

There are 144 C files. Thirty-six functions have reviewed semantic placements;
the other 2,609 retain address-based organization. An unknown routine near a
known function is not automatically assigned the same role. Each module's
README lists its source files.

All original function text, including warnings, is preserved byte-for-byte.
881 functions have decompiler warnings, 22 contain opaque custom operations,
and none has the earlier bad-instruction truncation. These counts describe
analyzer output, not proof of complete firmware recovery. Duplicate names such
as ``memcpy`` remain distinct by address. The index does not silently merge them.

Workflow
--------

1. Find an entry in INDEX.rst or with browse_source.py.
2. Follow direct calls and inspect the original instruction evidence where
   types, indirect calls or opaque operations are uncertain.
3. Record a justified name in ``evidence/firmware-source-names.json``.
4. Record its module placement in ``tools/firmware_source/modules.json``.
5. Regenerate decompilation when names/types change, then organize into a fresh
   output directory and review the diff. Keep manual research notes separate
   from generated C so regeneration cannot overwrite them.

Provenance
----------

Input: ``analysis/source-firmware-1.10-legacy-p``. The preserved monofile and
per-function exports remain there for comparison. ``manifest.json`` records the
input index and layout digests, original ELF identity and per-function evidence.

Generation and validation tools are in ``tools/firmware_source``. The organizer
checks every input hash and verifies every resulting function byte range, line
number and direct graph endpoint. It refuses to overwrite an existing generated
tree. Documentation and named placements are analyst-maintained; source, indices,
module file lists and the review queue are generated.

Other decoded releases
----------------------

* `Firmware 1.11 <versions/1.11/README.rst>`_
* `Firmware 1.12 <versions/1.12/README.rst>`_
* `Changes and patch-note verification <../docs/firmware-version-comparison.rst>`_
