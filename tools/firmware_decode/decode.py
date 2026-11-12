#!/usr/bin/env python3
"""Authenticate and decode NanoCore LUM0 packages offline. Never accesses USB."""
import argparse
import hashlib
import json
from pathlib import Path
import re
import struct
import zlib

# Recovered from the physical 1.10 updater at VA 0x40313f58.
STREAM_KEY = bytes.fromhex('125a6c3e9bc107a4d2ff348955aae119c7425d2b800f6397182c4e713bd5e8f0')
PUBLISHER_KEY = bytes.fromhex('e672050bbb537ca3f6992ddea28b3d61b7445809790c4c270292294375216763')
MAX_PACKAGE = 16 * 1024 * 1024


def require(ok, message):
    if not ok:
        raise ValueError(message)


def transform(data, nonce, offset=0):
    """Symmetric SHA256 XOR stream; offset is relative to the payload."""
    require(len(nonce) == 16 and offset >= 0, 'Invalid stream nonce/offset')
    result = bytearray()
    while len(result) < len(data):
        position = offset + len(result)
        block, skip = divmod(position, 32)
        stream = hashlib.sha256(STREAM_KEY + nonce + struct.pack('<Q', block)).digest()
        n = min(32 - skip, len(data) - len(result))
        start = len(result)
        result.extend(data[start+i] ^ stream[skip+i] for i in range(n))
    return bytes(result)


def verify_signature(key, message, signature):
    from cryptography.exceptions import InvalidSignature
    from cryptography.hazmat.primitives.asymmetric.ed25519 import Ed25519PublicKey
    try:
        Ed25519PublicKey.from_public_bytes(key).verify(signature, message)
    except InvalidSignature as exc:
        raise ValueError('Invalid publisher signature') from exc


def decode_package(package, publisher_key=PUBLISHER_KEY):
    require(105 <= len(package) <= MAX_PACKAGE, 'Invalid package size')
    require(package[:5] == b'LUM0\x02', 'Expected LUM0 version 2')
    flags, product = package[5], int.from_bytes(package[6:8], 'little')
    require(product in (0, 0x1301), 'Not a NanoCore package')
    require(flags & 1, 'Payload is not marked encrypted')
    if flags & 0x80:
        require((flags >> 1) & 63 == 1, 'Not the NanoCore route')
    start_address, size, fw_version = struct.unpack_from('<III', package, 8)
    require(start_address == 0, 'Unsupported nonzero start address')
    name_len = package[36]
    require(0 < name_len <= 32, 'Invalid display-version length')
    start = 37 + name_len
    end = start + size
    core_end = end + 68
    require(size > 0 and core_end <= len(package), 'Truncated payload/core')
    version = package[37:start].decode('utf-8')
    verify_signature(publisher_key, package[:end+4], package[end+4:core_end])
    footer = package[core_end:]
    footer_verified = False
    if footer:
        require(len(footer) >= 121 and footer[:6] == b'FMUC\x01\x01', 'Invalid FMUC footer')
        target_len = footer[24]
        require(len(footer) == 121 + target_len == int.from_bytes(footer[6:8], 'little'), 'Invalid FMUC length')
        require(struct.unpack_from('<IHHHHI', footer, 8) == (1, 0x33c3, 0x1301, 0x33c3, 0x6678, core_end), 'FMUC target mismatch')
        require(footer[25:25+target_len] == b'NanoCore', 'FMUC target name mismatch')
        require(footer[25+target_len:57+target_len] == hashlib.sha256(package[:core_end]).digest(), 'FMUC digest mismatch')
        verify_signature(publisher_key, b'LIVTRA-FMU-CONTRACT-V1\0'+footer[:-64], footer[-64:])
        footer_verified = True
    plaintext = transform(package[start:end], package[20:36])
    expected_crc = int.from_bytes(package[end:end+4], 'little')
    require(zlib.crc32(plaintext) == expected_crc, 'Decoded payload CRC32 mismatch')
    return plaintext, {
        'display_version': version, 'fw_version': fw_version, 'product_id': product,
        'package_sha256': hashlib.sha256(package).hexdigest(), 'core_signature_verified': True,
        'footer_present': bool(footer), 'footer_signature_verified': footer_verified,
        'nonce_hex': package[20:36].hex(), 'payload_size': size,
        'payload_sha256': hashlib.sha256(plaintext).hexdigest(),
        'payload_crc32': f'{expected_crc:08x}', 'payload_crc32_verified': True,
    }


def fit_nodes(blob):
    require(len(blob) >= 40, 'Truncated FIT header')
    magic, total, structure, strings, reservations, version, compatible, cpu, string_size, struct_size = struct.unpack_from('>10I', blob)
    require(magic == 0xd00dfeed and version == 17 and compatible <= 17, 'Unsupported FIT/FDT header')
    require(40 <= total <= len(blob), 'Invalid FIT size')
    require(40 <= structure <= total and structure+struct_size <= total, 'Invalid structure bounds')
    require(40 <= strings <= total and strings+string_size <= total, 'Invalid string bounds')
    names = blob[strings:strings+string_size]
    pos, limit, stack, nodes, ended = structure, structure+struct_size, [], {}, False
    while pos+4 <= limit:
        token = struct.unpack_from('>I', blob, pos)[0]; pos += 4
        if token == 1:
            end = blob.find(b'\0', pos, limit)
            require(end >= pos, 'Unterminated node name')
            name = blob[pos:end].decode('ascii')
            require('/' not in name and (stack or name == ''), 'Invalid node name/root')
            stack.append(name); path = '/'.join(stack)
            require(path not in nodes, 'Duplicate node')
            nodes[path] = {}; pos = (end+4) & ~3
        elif token == 2:
            require(bool(stack), 'Unbalanced end-node'); stack.pop()
        elif token == 3:
            require(bool(stack) and pos+8 <= limit, 'Invalid property')
            length, nameoff = struct.unpack_from('>II', blob, pos); pos += 8
            require(nameoff < len(names) and pos+length <= limit, 'Property out of bounds')
            end = names.find(b'\0', nameoff)
            require(end >= nameoff, 'Unterminated property name')
            name = names[nameoff:end].decode('ascii'); props = nodes['/'.join(stack)]
            require(name not in props, 'Duplicate property')
            props[name] = blob[pos:pos+length]; pos = (pos+length+3) & ~3
        elif token == 4:
            pass
        elif token == 9:
            require(not stack, 'Unclosed nodes'); ended = True; break
        else:
            raise ValueError('Unknown FDT token')
    require(ended, 'Missing FDT end')
    return total, nodes


def u32(value):
    require(len(value) == 4, 'Expected a 32-bit FIT value')
    return int.from_bytes(value, 'big')


def cstring(value):
    require(value.endswith(b'\0') and b'\0' not in value[:-1], 'Invalid FIT string')
    return value[:-1].decode('utf-8')


def extract_fit(blob):
    total, nodes = fit_nodes(blob)
    config_name = cstring(nodes['/configurations']['default'])
    config = nodes['/configurations/'+config_name]
    firmware = config['firmware']
    require(firmware.endswith(b'\0'), 'Invalid configuration firmware list')
    selected = [s.decode('ascii') for s in firmware[:-1].split(b'\0')]
    require(len(selected) == len(set(selected)) and bool(selected), 'Invalid segment list')
    segments = []
    for name in selected:
        require(re.fullmatch(r'[A-Za-z0-9_-]+', name), 'Unsafe segment name')
        path = '/images/'+name; props = nodes[path]
        require(cstring(props['arch']) == 'riscv', 'Expected RISC-V segment')
        require(cstring(props['type']) == 'firmware', 'Expected firmware segment')
        size = u32(props['data-size'])
        if 'data-position' in props:
            offset = u32(props['data-position'])
        else:
            offset = total+u32(props['data-offset'])
        require(size > 0 and offset >= total and offset+size <= len(blob), 'Segment out of bounds')
        data = blob[offset:offset+size]; checks = {}
        for child, values in nodes.items():
            if child.startswith(path+'/') and child.count('/') == 3 and 'algo' in values:
                algo = cstring(values['algo'])
                require(algo in ('md5', 'sha1', 'sha256', 'crc32'), 'Unsupported FIT hash')
                actual = struct.pack('>I', zlib.crc32(data)) if algo == 'crc32' else hashlib.new(algo, data).digest()
                require(actual == values['value'], f'{name}: {algo} mismatch')
                checks[algo] = actual.hex()
        require(bool(checks), 'Segment has no integrity hashes')
        load = u32(props['load']); entry = u32(props['entry'])
        require(load+size <= 2**32, 'Segment address overflow')
        segments.append({'name': name, 'offset': offset, 'size': size, 'load_address': load,
                         'entry_address': entry, 'hashes_verified': checks, 'data': data})
    for i, a in enumerate(segments):
        for b in segments[i+1:]:
            require(a['load_address']+a['size'] <= b['load_address'] or b['load_address']+b['size'] <= a['load_address'], 'Overlapping load segments')
    entries = {s['entry_address'] for s in segments}
    require(len(entries) == 1, 'Inconsistent entry addresses')
    entry = entries.pop()
    require(any(s['load_address'] <= entry < s['load_address']+s['size'] for s in segments), 'Entry outside segments')
    return {'dtb_size': total, 'description': cstring(nodes['']['description']),
            'image_version': cstring(nodes['/images']['version']),
            'timestamp': u32(nodes['']['timestamp']) if 'timestamp' in nodes[''] else None,
            'entry_address': entry, 'segments': segments}


def mapped_elf(segments, entry):
    """Analysis-only ELF32 mapping. Flags don't assert original memory permissions."""
    phnum = len(segments); result = bytearray(52+32*phnum); records = []
    for i, seg in enumerate(segments):
        offset = (len(result)+4095) & ~4095
        result.extend(bytes(offset-len(result))); result.extend(seg['data'])
        struct.pack_into('<8I', result, 52+i*32, 1, offset, seg['load_address'], seg['load_address'], seg['size'], seg['size'], 7, 4096)
        records.append((offset, seg))
    names = b'\0'; indexes = []
    for seg in segments:
        indexes.append(len(names)); names += ('.'+seg['name']).encode()+b'\0'
    strname = len(names); names += b'.shstrtab\0'; stroff = len(result); result.extend(names)
    shoff = (len(result)+3) & ~3; result.extend(bytes(shoff-len(result))); result.extend(bytes(40))
    for index, (off, seg) in zip(indexes, records):
        result.extend(struct.pack('<10I', index, 1, 7, seg['load_address'], off, seg['size'], 0, 0, 4, 0))
    result.extend(struct.pack('<10I', strname, 3, 0, 0, stroff, len(names), 0, 0, 1, 0))
    ident = b'\x7fELF\x01\x01\x01'+bytes(9)
    struct.pack_into('<16sHHIIIIIHHHHHH', result, 0, ident, 2, 243, 1, entry, 52, shoff, 0, 52, 32, phnum, 40, phnum+2, phnum+1)
    return bytes(result)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('package', type=Path)
    parser.add_argument('--output', required=True, type=Path, help='New output directory')
    parser.add_argument('--compare-readback', type=Path)
    args = parser.parse_args()
    require(not args.output.exists(), 'Output directory already exists')
    require(args.package.stat().st_size <= MAX_PACKAGE, 'Package too large')
    plaintext, report = decode_package(args.package.read_bytes())
    fit = extract_fit(plaintext)
    report['container_fit_version_match'] = fit['image_version'] == report['display_version']
    report['fit'] = {k:v for k,v in fit.items() if k != 'segments'}
    report['segments'] = [{k:v for k,v in s.items() if k != 'data'} for s in fit['segments']]
    if args.compare_readback:
        readback = args.compare_readback.read_bytes(); other = extract_fit(readback)
        report['readback_comparison'] = {
            'exact_payload_match': plaintext == readback,
            'equal_size': len(plaintext) == len(readback),
            'differing_byte_offsets': [i for i,(a,b) in enumerate(zip(plaintext,readback)) if a != b],
            'segment_bytes_match': [(s['name'], s['load_address'], s['data']) for s in fit['segments']] == [(s['name'],s['load_address'],s['data']) for s in other['segments']],
            'decoded_timestamp': fit['timestamp'], 'readback_timestamp': other['timestamp'],
        }
    elf = mapped_elf(fit['segments'], fit['entry_address'])
    args.output.mkdir(parents=True)
    (args.output/'firmware.bin').write_bytes(plaintext)
    (args.output/'header.dtb').write_bytes(plaintext[:fit['dtb_size']])
    (args.output/'firmware.elf').write_bytes(elf)
    for seg in fit['segments']:
        (args.output/(seg['name']+'.bin')).write_bytes(seg['data'])
    (args.output/'manifest.json').write_text(json.dumps(report,indent=2)+'\n')
    print(json.dumps(report,indent=2))


if __name__ == '__main__':
    try:
        main()
    except (ValueError, KeyError, UnicodeError, struct.error, OSError) as exc:
        raise SystemExit(f'Decode failed: {exc}')
    except ImportError:
        raise SystemExit('Install the cryptography dependency: pip install cryptography')
