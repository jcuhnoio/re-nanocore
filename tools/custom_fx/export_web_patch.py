#!/usr/bin/env python3
"""Export a bounded stock-to-UniVibe browser delta, never a complete vendor image.

Both inputs are parsed with the strict FIT reader (including MD5/CRC verification).
The normalized digest authenticates the entire FIT, except timestamp, code delta,
and authenticated FIT hash fields. OS bytes after the FIT remain device-owned.
"""
import argparse
import hashlib
import json
from pathlib import Path
from patch_image import extract_fit, property_offsets, verify_manifest

ROOT = Path(__file__).resolve().parents[2]

def digest(data):
    return hashlib.sha256(data).hexdigest()

def export(stock, installed, manifest):
    verify_manifest(stock, installed, manifest)
    before, after = extract_fit(stock), extract_fit(installed)
    timestamp, length = property_offsets(stock)[('', 'timestamp')]
    assert length == 4
    edits = [{'offset': p['offset'], 'beforeHex': p['expected_hex'],
              'afterHex': p['replacement_hex']} for p in manifest['patches']]
    hashes = [{'offset': h['offset'], 'beforeHex': h['before_hex'],
               'afterHex': h['after_hex'], 'segment': h['segment'],
               'algorithm': h['algorithm']} for h in manifest['fit_hash_updates']]
    ignored = [{'offset': timestamp, 'size': length}] + [
        {'offset': p['offset'], 'size': len(bytes.fromhex(p['beforeHex']))}
        for p in edits + hashes]
    def normalized(data):
        data = bytearray(data)
        for r in ignored:
            data[r['offset']:r['offset']+r['size']] = bytes(r['size'])
        return digest(data)
    assert normalized(stock) == normalized(installed)
    version = {'1.10': '1.10', '1.11b': '1.11', '1.12': '1.12'}.get(before['image_version'])
    if version is None or after['image_version'] != before['image_version']:
        raise ValueError('Unsupported or changed firmware version')
    return {'schemaVersion': 1, 'firmwareVersion': version,
            'imageVersion': before['image_version'],
            'effect': 'UNIVIBE', 'replaces': 'VELVET VIBRATO',
            'osSize': manifest['os_partition_size'], 'fitSize': len(stock),
            'stockFitSha256': digest(stock), 'installedFitSha256': digest(installed),
            'normalizedFitSha256': normalized(stock), 'timestamp': ignored[0],
            'patches': edits, 'hashes': hashes,
            'segments': [{'name': a['name'], 'offset': a['offset'], 'size': a['size'],
                          'stockSha256': digest(a['data']),
                          'installedSha256': digest(b['data'])}
                         for a, b in zip(before['segments'], after['segments'])]}

def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--stock', type=Path, default=ROOT/'analysis/decoder-capture/validated-releases/nanocore-1.10/firmware.bin')
    parser.add_argument('--installed', type=Path, default=ROOT/'analysis/custom-fx/univibe-mxr-1.10/firmware.bin')
    parser.add_argument('--manifest', type=Path, default=ROOT/'analysis/custom-fx/univibe-mxr-1.10/manifest.json')
    parser.add_argument('--output', type=Path, default=ROOT/'web/patch.json')
    args = parser.parse_args()
    data = export(args.stock.read_bytes(), args.installed.read_bytes(), json.loads(args.manifest.read_text()))
    args.output.write_text(json.dumps(data, indent=2)+'\n')
    print(f'Exported {len(data["patches"])} deltas to {args.output}')

if __name__ == '__main__':
    main()
