# License scope

Copyright (c) 2026 jcuhnoio and contributors.

The [MIT License](LICENSE) applies to the original work contributed to this
project by its copyright holders, subject to the exclusions and existing
notices below. It does not license every byte in this research repository.

## Original work covered by MIT

- The original tooling in `tools/`, including decoders, analysis tools,
  patch builders, uploaders and tests.
- The original browser installer, website code and artwork in `web/`.
- The original custom DSP, integration code and build/test infrastructure in
  `firmware/custom-fx/`, including UniVibe, the gain probe and the Octave Studio
  implementation. The vendor-derived Chorus reconstruction is excluded below.
- Original documentation, annotations and analysis written for this project,
  including the original portions of `docs/`, `evidence/` and research indexes.

Octave Studio is also jcuhnoio's work. Its code and retained reference files
continue to be MIT-licensed; see
[`firmware/custom-fx/octave/LICENSE`](firmware/custom-fx/octave/LICENSE).
Existing contributor notices are preserved. Adding attribution here does not
revoke permissions already granted under MIT.

## Material not licensed by this project's MIT grant

- Vendor firmware images, bootloaders, application binaries, model weights,
  impulse responses, UI assets and other vendor resources, whether present in
  local archives or represented in extracted artifacts.
- Decompiled vendor code and vendor-derived source reconstructions. This
  includes the recovered code under `firmware/boot/`, `firmware/runtime/`,
  `firmware/storage/`, `firmware/formats/`, `firmware/update/`,
  `firmware/protocol/`, `firmware/unresolved/` and `firmware/versions/`, plus
  `firmware/custom-fx/src/chorus.c` and any other material identified as a
  vendor-code reconstruction. Original annotations can be MIT-licensed without
  licensing the underlying vendor code.
- Vendor-derived bytes, instructions and excerpts embedded in patch manifests,
  signatures, disassembly, decompiler output, captures or evidence. In
  particular, `web/patch*.json`, `web/octave-*.json` and other generated patch
  artifacts can mix original custom payloads with vendor-derived material;
  the MIT grant covers only the original contributions within them.
- Third-party material with separate license terms or notices. Those terms and
  notices continue to apply, including to dependencies or runtime libraries
  incorporated into generated binaries.

Reverse engineering, renaming, translating, annotating or generating a patch
for vendor code does not give this project authority to relicense that code.
No license to excluded material is granted here. Any rights to use it must
come from its rights holders, applicable licenses or applicable law. Inclusion
in this repository is not a representation that unrestricted redistribution
is permitted. No ownership is asserted over underlying facts or ideas.

## Attribution and distribution

When distributing copies or substantial portions of the MIT-covered work,
include the applicable copyright and MIT license notices. Retain separate
third-party notices where applicable. Keep this scope document with mixed
research or patch distributions so the MIT grant is not mistaken for a vendor
firmware license.

MIT permits commercial use and does not require a visible website credit or
publication of modifications. Names and logos are not licensed as trademarks;
no vendor endorsement is implied. The MIT warranty and liability disclaimer
is included in `LICENSE`.
