NanoCore 1.11 reconstructed firmware
====================================

2,687 functions in 151 C files; 19 reviewed names/placements.

This is C-like decompilation, not original or buildable source. All discovered
functions are exported; discovery does not prove complete executable coverage.
There are 892 functions with decompiler warnings and 22 with opaque custom
operations. Zero functions report bad-instruction truncation. Function boundary,
argument, type, indirect-call and data/code ambiguities remain.

Start with:

* `Release comparison and patch-note assessment <../../../docs/firmware-version-comparison.rst>`_
* `MIDI CC handling <protocol/control_change.c>`_ and `stream parsing <protocol/midi_stream.c>`_
* `Radio control <bluetooth/control.c>`_ and `UART transport <bluetooth/uart_transport.c>`_
* `Power-off loop <power/shutdown.c>`_
* `Effect metadata and value formatting <audio/effect_metadata.c>`_
* `All functions <INDEX.rst>`_ and `review queue <REVIEW.rst>`_

Radio names describe the inferred application-to-peripheral command path. They
are not a claim that the radio silicon, HCI protocol, BLE stack or audio codec
has been identified. The radio disable operation is inferred from the new
shutdown call chain and the official fix; over-the-air behavior remains untested.

Names and placements are maintained in the version-specific evidence ledger
and tools/firmware_source/modules-1.11.json. Names are applied lexically to
REA exports; the REA evidence retains original automatic names. No 1.10 address
or local-variable annotations are blindly applied to this release.

Every function body has a hash, source byte range, evidence ID and line number
in manifest.json. callgraph.json contains textual direct calls only. Generic
functions remain in address buckets until their role is reviewed.

Verify from the repository root::

    python3 tools/firmware_source/organize_source.py --output firmware/versions/1.11 --verify
    python3 tools/firmware_source/browse_source.py nc_midi_control_change --root firmware/versions/1.11 --calls
