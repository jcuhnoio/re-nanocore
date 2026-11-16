"""Experimental offline 1.2 packager. Not a device-tested/public installer.

The native external BSS occupies the gap between initialized seg3 and heap3.
Load a compact appended staging payload, copy it above BSS at reset, and reserve
that destination from heap3. Native startup subsequently clears the staging area.
No extra FIT segments, no use of the DTCM model heap, no peripheral operations.
"""
import hashlib
import struct
import zlib
from firmware_identity import identify_firmware
from patch_image import (OS_SIZE, extract_fit, property_offsets, fit_nodes,
                         cstring, require, changed_ranges)

CODE_BASE = 0x400cb880
STAGING_BASE = 0x400a1f80
STUB_SIZE = 64
HEAP_ADDRESS = 0x400a1ec8
HEAP_ORIGINAL = 0x400cb868
HEAP_END = 0x40400000
PROTECTED_SECTOR = 0xd0000
STOCK_HASHES = [
    '4c03e55ee8870ed4756c7fc7ab2af0524a639b91951f480b3637395dc50bbc79',
    '545b270d2c1c6c4b98e231cff3188f74f82ff1844d6808886781eee8b5a4fe03',
    '2339ce62252e94648b023d03661fa3410e0d7c985427c79ee776fb459cc9e241',
    '9190565d24f5b005ddde27683006228dfada6f7b314d4bcc820eb390107fcaaf',
]
# Only reviewed reproducible UniVibe images may be added here.
UNIVIBE_SEG3_SHA256 = '6f480d6e267a37ae954ed5f46c7c0f41121a4e4991bc12603a0949f541221a77'
HEADER_SHA256 = '460f618b993704bb6f1d00fbfaab2a5d7c078d99fef801fcca57f30599a0ac09'


def sha(data):
    return hashlib.sha256(data).hexdigest()


def relocation_stub(size):
    """RV32I reset shim; only t0/t1/t2/t3 clobbered, no stack or RAM dependency."""
    require(size > 0 and size % 4 == 0, 'Relocation size must be whole words')
    require(STAGING_BASE + STUB_SIZE + size <= CODE_BASE, 'Staging overlaps destination')
    def li(rd, value):
        hi = (value + 0x800) >> 12
        return [(hi << 12) | (rd << 7) | 0x37,
                ((value & 0xfff) << 20) | (rd << 15) | (rd << 7) | 0x13]
    words = li(5, STAGING_BASE + STUB_SIZE) + li(6, CODE_BASE) + li(7, CODE_BASE + size)
    # loop: lw t3,0(t0); sw t3,0(t1); addi t0,t0,4; addi t1,t1,4
    words += [0x0002ae03, 0x01c32023, 0x00428293, 0x00430313]
    # bne t1,t2,loop (-16)
    d = -16
    words += [((d >> 12 & 1) << 31) | ((d >> 5 & 63) << 25) |
              (7 << 20) | (6 << 15) | (1 << 12) | ((d >> 1 & 15) << 8) |
              ((d >> 11 & 1) << 7) | 0x63, 0x0000100f]  # fence.i
    words += li(5, 0x40006428) + [0x00028067]  # original native entry
    data = struct.pack('<' + 'I' * len(words), *words)
    require(len(data) <= STUB_SIZE, 'Reset shim exceeds reserved stub')
    return data + bytes(STUB_SIZE - len(data))


def package(original, elf, hooks):
    from package_octave import elf_payload
    from octave_hooks import jal
    require(len(original) == OS_SIZE, 'Complete physical OS backup required')
    require(identify_firmware(original) == '1.2', 'Expected exact 1.2 layout')
    fit = extract_fit(original)
    segs = fit['segments']
    hashes = [sha(s['data']) for s in segs]
    require(hashes[:3] == STOCK_HASHES[:3], 'Unknown firmware segments')
    allowed_main = {'stock': STOCK_HASHES[3]}
    if UNIVIBE_SEG3_SHA256:
        allowed_main['univibe'] = UNIVIBE_SEG3_SHA256
    require(hashes[3] in allowed_main.values(), 'Unknown 1.2 main segment')
    locations = property_offsets(original)
    header = bytearray(original[:2048])
    for (path, name), (offset, length) in locations.items():
        if (path == '' and name == 'timestamp') or (path.startswith('/images/') and name == 'value'):
            header[offset:offset+length] = bytes(length)
    require(sha(header) == HEADER_SHA256, 'Unknown FIT header/layout')
    require(hooks.get('schema_version') == 1 and hooks.get('firmware_version') == '1.2',
            'Expected reviewed same-version hook plan')
    require(hooks.get('elf_sha256') == sha(elf), 'Hook plan must bind exact ELF SHA256')
    payload, sections = elf_payload(elf, CODE_BASE)
    stub = relocation_stub(len(payload))
    main = segs[3]
    staging_offset = main['offset'] + STAGING_BASE - main['load_address']
    file_start = main['offset'] + main['size']
    staged = bytes(staging_offset-file_start) + stub + payload
    file_end = file_start + len(staged)
    heap_start = CODE_BASE + len(payload)
    require(file_end <= PROTECTED_SECTOR, 'Append would change protected final partial erase sector')
    require(heap_start < HEAP_END, 'No heap remains')
    image, allowed, records = bytearray(original), bytearray(OS_SIZE), []
    def patch(offset, expected, replacement, description):
        require(0 <= offset < offset+len(expected) <= OS_SIZE and len(expected) == len(replacement), 'Invalid fixed-size patch')
        require(not any(allowed[offset:offset+len(expected)]), 'Overlapping modifications')
        require(original[offset:offset+len(expected)] == expected, 'Expected original bytes mismatch: '+description)
        image[offset:offset+len(expected)] = replacement
        allowed[offset:offset+len(expected)] = b'\1' * len(expected)
        records.append({'offset': offset, 'size': len(expected), 'expected_hex': expected.hex(),
                        'replacement_hex': replacement.hex(), 'description': description})
    for h in hooks.get('patches', []):
        number = lambda v: int(v, 0) if isinstance(v, str) else v
        if 'address' in h:
            addr = number(h['address'])
            owners = [s for s in segs if s['load_address'] <= addr < s['load_address']+s['size']]
            require(len(owners) == 1, 'Hook address is not in an original segment')
            offset = owners[0]['offset'] + addr - owners[0]['load_address']
            if 'offset' in h:
                require(number(h['offset']) == offset, 'Hook address/offset mismatch')
        else:
            offset = number(h['offset'])
        before, after = bytes.fromhex(h['expected_hex']), bytes.fromhex(h['replacement_hex'])
        require(any(s['offset'] <= offset < offset+len(before) <= s['offset']+s['size'] for s in segs), 'Hook leaves original segments')
        patch(offset, before, after, h.get('description', 'reviewed octave hook'))
    require(hooks.get('patches'), 'Missing integration hooks')
    heap_offset = main['offset'] + HEAP_ADDRESS - main['load_address']
    require(original[heap_offset-8:heap_offset+8] == struct.pack('<4I', 3, 0x4008ba24, HEAP_ORIGINAL, HEAP_END), 'Heap descriptor differs')
    patch(heap_offset, struct.pack('<I', HEAP_ORIGINAL), struct.pack('<I', heap_start), 'Reserve relocated payload above native external BSS before heap3')
    patch(main['offset'], jal(0x40000000, 0x40006428), jal(0x40000000, STAGING_BASE), 'Relocate custom payload before original native startup')
    patch(file_start, original[file_start:file_end], staged, 'Append reset shim and compact staged payload')
    new_size = file_end - main['offset']
    size_offset, size_length = locations[('/images/seg3', 'data-size')]
    require(size_length == 4, 'Unexpected size field')
    patch(size_offset, struct.pack('>I', main['size']), struct.pack('>I', new_size), 'Extend seg3 through compact staging payload')
    _, nodes = fit_nodes(original)
    for s in segs:
        length = new_size if s['name'] == 'seg3' else s['size']
        data = image[s['offset']:s['offset']+length]
        for path, values in nodes.items():
            if path.startswith('/images/'+s['name']+'/') and path.count('/') == 3 and 'algo' in values:
                algo = cstring(values['algo'])
                digest = struct.pack('>I', zlib.crc32(data)) if algo == 'crc32' else hashlib.new(algo, data).digest()
                off, size = locations[(path, 'value')]
                require(len(digest) == size, 'Hash size changed')
                patch(off, original[off:off+size], digest, 'Update '+s['name']+' '+algo)
    target = bytes(image)
    checked = extract_fit(target)
    require(checked['segments'][3]['size'] == new_size, 'New FIT extent mismatch')
    require(target[file_end:] == original[file_end:], 'Bytes beyond append changed')
    require(target[PROTECTED_SECTOR:] == original[PROTECTED_SECTOR:], 'Protected final sector changed')
    require(all(a == b or allowed[i] for i, (a,b) in enumerate(zip(original,target))), 'Unaccounted modification')
    return target, {'schema_version': 1, 'image_kind': 'raw-os-fit-relocated', 'firmware_version': '1.2',
        'source_kind': next(k for k,v in allowed_main.items() if v == hashes[3]),
        'input_sha256': sha(original), 'output_sha256': sha(target), 'elf_sha256': sha(elf), 'size': len(target),
        'code_base': hex(CODE_BASE), 'old_heap_start': hex(HEAP_ORIGINAL), 'new_heap_start': hex(heap_start),
        'heap_end': hex(HEAP_END), 'remaining_heap_span': HEAP_END-heap_start,
        'old_seg3_size': main['size'], 'new_seg3_size': new_size,
        'appended_file_range': [file_start,file_end], 'elf_sections': sections,
        'relocation': {'staging_address': hex(STAGING_BASE), 'stub_size': STUB_SIZE, 'payload_size': len(payload),
                       'destination': hex(CODE_BASE), 'native_entry': '0x40006428',
                       'native_bss_clear': ['0x400a1f80','0x400cb868']},
        'patches': records, 'changed_ranges': changed_ranges(original,target),
        'all_fit_hashes_verified': True, 'bytes_after_appended_region_preserved': True,
        'protected_final_sector_preserved': True, 'publisher_signed': False, 'device_tested': False,
        'limits': ['Experimental boot relocation requires physical validation',
                   'Offline emulation cannot establish hardware CPU headroom or peripheral/cache behavior']}
