#!/usr/bin/env python3
"""Patch an exact raw OS FIT image offline; never signs packages or accesses USB."""
import argparse
import hashlib
import json
from pathlib import Path
import struct
import sys
import zlib

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'firmware_decode'))
from decode import extract_fit, fit_nodes, require, cstring

OS_SIZE = 0xd4000


def sha256(data):
    return hashlib.sha256(data).hexdigest()


def property_offsets(blob):
    """Locate property values after the shared strict FDT parser validates structure."""
    fit_nodes(blob)
    _, _, pos, strings, _, _, _, _, _, size = struct.unpack_from('>10I', blob)
    limit = pos + size
    stack, result = [], {}
    while pos < limit:
        token = struct.unpack_from('>I', blob, pos)[0]
        pos += 4
        if token == 1:
            end = blob.index(b'\0', pos, limit)
            stack.append(blob[pos:end].decode('ascii'))
            pos = (end + 4) & ~3
        elif token == 2:
            stack.pop()
        elif token == 3:
            length, nameoff = struct.unpack_from('>II', blob, pos)
            pos += 8
            start = strings + nameoff
            name = blob[start:blob.index(b'\0', start)].decode('ascii')
            result[('/'.join(stack), name)] = (pos, length)
            pos = (pos + length + 3) & ~3
        elif token == 9:
            break
    return result


def changed_ranges(before, after):
    ranges, start = [], None
    for i, (a, b) in enumerate(zip(before, after)):
        if a != b and start is None:
            start = i
        elif a == b and start is not None:
            ranges.append({'offset': start, 'size': i-start})
            start = None
    if start is not None:
        ranges.append({'offset': start, 'size': len(before)-start})
    return ranges


def patch_image(original, plan):
    require(plan.get('image_kind') == 'raw-os-fit', 'Expected image_kind raw-os-fit')
    require(0 < len(original) <= OS_SIZE, 'Image exceeds OS partition bounds')
    require(plan.get('input_sha256') == sha256(original), 'Exact input SHA256 mismatch')
    fit = extract_fit(original)
    require(plan.get('firmware_version') == fit['image_version'], 'Exact firmware version required')
    _, nodes = fit_nodes(original)
    locations = property_offsets(original)
    segments = fit['segments']
    for i, a in enumerate(segments):
        for b in segments[i+1:]:
            require(a['offset']+a['size'] <= b['offset'] or b['offset']+b['size'] <= a['offset'],
                    'Overlapping file segments')
    patches = plan.get('patches')
    require(isinstance(patches, list) and patches, 'Nonempty patches required')
    image, allowed, records = bytearray(original), bytearray(len(original)), []
    for patch in patches:
        offset = patch['offset']
        if isinstance(offset, str):
            offset = int(offset, 0)
        require(type(offset) is int and offset >= 0, 'Invalid patch offset')
        expected = bytes.fromhex(patch['expected_hex'])
        replacement = bytes.fromhex(patch['replacement_hex'])
        require(len(expected) == len(replacement) > 0, 'Patches must preserve size')
        end = offset + len(expected)
        require(any(s['offset'] <= offset < end <= s['offset']+s['size'] for s in segments),
                'Patch outside a firmware segment (header/padding/tail forbidden)')
        require(not any(allowed[offset:end]), 'Overlapping patches')
        require(original[offset:end] == expected, 'Expected original bytes mismatch')
        image[offset:end] = replacement
        allowed[offset:end] = b'\x01'*len(expected)
        records.append({'offset': offset, 'size': len(expected), 'expected_hex': expected.hex(),
                        'replacement_hex': replacement.hex(), 'description': patch.get('description', '')})
    hashes = []
    for segment in segments:
        data = image[segment['offset']:segment['offset']+segment['size']]
        path = '/images/' + segment['name']
        for child, values in nodes.items():
            if child.startswith(path+'/') and child.count('/') == 3 and 'algo' in values:
                algo = cstring(values['algo'])
                value = struct.pack('>I', zlib.crc32(data)) if algo == 'crc32' else hashlib.new(algo, data).digest()
                offset, size = locations[(child, 'value')]
                require(len(value) == size, 'Hash size mismatch')
                image[offset:offset+size] = value
                allowed[offset:offset+size] = b'\x01'*size
                hashes.append({'segment': segment['name'], 'algorithm': algo, 'offset': offset,
                               'size': size, 'before_hex': original[offset:offset+size].hex(),
                               'after_hex': value.hex()})
    result = bytes(image)
    require(len(result) == len(original), 'Image size changed')
    require(all(a == b or allowed[i] for i, (a, b) in enumerate(zip(original, result))), 'Unaccounted change')
    updated = extract_fit(result)
    require([{k:v for k,v in s.items() if k not in ('data', 'hashes_verified')} for s in segments] ==
            [{k:v for k,v in s.items() if k not in ('data', 'hashes_verified')} for s in updated['segments']], 'Layout changed')
    return result, {
        'schema_version': 1, 'image_kind': 'raw-os-fit', 'firmware_version': fit['image_version'],
        'input_sha256': sha256(original), 'output_sha256': sha256(result), 'size': len(result),
        'os_partition_size': OS_SIZE, 'offset_origin': 'OS partition start, not flash start',
        'patches': records, 'fit_hash_updates': hashes, 'changed_ranges': changed_ranges(original, result),
        'all_fit_hashes_verified': True, 'padding_and_tail_preserved': True,
        'publisher_signed': False, 'device_tested': False,
        'limitations': 'Offline integrity only; no proof of ABI, DSP behavior, bootability, or flash safety.',
    }


def verify_manifest(original, output, manifest):
    rebuilt, expected = patch_image(original, manifest)
    require(output == rebuilt and manifest == expected, 'Manifest or output verification failed')
    return True


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--input', type=Path, required=True)
    parser.add_argument('--plan', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    parser.add_argument('--manifest', type=Path, required=True)
    args = parser.parse_args()
    require(args.output.resolve() != args.manifest.resolve(), 'Output and manifest must differ')
    require(not args.output.exists() and not args.manifest.exists(), 'Outputs must be new files')
    require(args.input.stat().st_size <= OS_SIZE, 'Input exceeds OS partition')
    original = args.input.read_bytes()
    output, manifest = patch_image(original, json.loads(args.plan.read_text()))
    verify_manifest(original, output, manifest)
    # Exclusive creation prevents accidental replacement of firmware/backups.
    created = []
    try:
        for path, data in ((args.output, output), (args.manifest, (json.dumps(manifest, indent=2)+'\n').encode())):
            with path.open('xb') as stream:
                created.append(path)
                stream.write(data)
    except BaseException:
        for path in created:
            path.unlink()
        raise
    print(json.dumps({'output': str(args.output), 'sha256': sha256(output), 'device_tested': False}))


if __name__ == '__main__':
    main()
