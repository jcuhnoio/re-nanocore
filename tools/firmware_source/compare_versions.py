"""Compare observed native function bodies and conservative pseudocode fingerprints.

Exact byte matches are not proof of equivalent runtime behavior: referenced data
and callees can differ. Pseudocode matches are candidates, never identity proof.
"""
import argparse,collections,hashlib,json,re
from pathlib import Path
from export_source import evidence


def digest(b):return hashlib.sha256(b).hexdigest()

def fingerprint(code):
    code=re.sub(r'"(?:\\.|[^"\\])*"|/\*.*?\*/|//[^\n]*',lambda m: m[0] if m[0].startswith(chr(34)) else '',code,flags=re.S)
    # Keep strings and scalar constants; mask only address-bearing identifiers.
    pattern=r'"(?:\\.|[^"\\])*"|\b[A-Za-z_]\w*\b|0x[34][0-9a-fA-F]{7}\b'
    def replace(m):
        s=m[0]
        if s.startswith('"'):return s
        if re.fullmatch(r'0x[34][0-9a-fA-F]{7}',s):return 'ADDRESS'
        if re.search(r'(?:FUN_ram_|DAT_ram_|UNK_ram_|PTR_.*_|LAB_ram_|switchD_ram_)[0-9a-f]{8}',s):return re.sub('[0-9a-f]{8}','ADDRESS',s)
        return s
    return re.sub(r'\s+',' ',re.sub(pattern,replace,code)).strip()


def inventory(root,decoded):
    manifest=json.loads((decoded/'manifest.json').read_text())
    segments=[(s['load_address'],(decoded/(s['name']+'.bin')).read_bytes()) for s in manifest['segments']]
    def read(start,end):
        for base,data in segments:
            if base<=start<=end<base+len(data):return data[start-base:end-base+1]
        raise ValueError(f'Range outside load segments: {start:x}-{end:x}')
    rows=[]
    exports={p.stem.split('-export-')[1]:p for p in (root/'results').glob('*-export-*.json')}
    for path in sorted((root/'results').glob('*-info-*.json')):
        info=evidence(path)['normalized_result'];body=info['body'];addr=info['entrypoint']
        code=evidence(exports[addr])['normalized_result']
        if not body['available']:raise ValueError('Missing native body: '+addr)
        ranges=body['ranges'];native=b''.join(read(int(r['start'],16),int(r['end'],16)) for r in ranges)
        # Preserve range shape so discontiguous functions cannot collide silently.
        shape=[(int(r['start'],16)-int(addr,16),int(r['end'],16)-int(r['start'],16)+1) for r in ranges]
        rows.append({'address':addr,'name':info['name'],'native_sha256':digest(native),'range_shape':shape,'bytes':len(native),'ranges':ranges,'pseudo_sha256':digest(fingerprint(code).encode()),'info_evidence_id':evidence(path)['evidence_id']})
    return rows


def compare(left,right):
    result={'exact_native':[],'pseudo_candidates':[],'unmatched_left':[],'unmatched_right':[],'ambiguous_native_groups':[]}
    used_l=set();used_r=set()
    for field,out in [('native_sha256','exact_native'),('pseudo_sha256','pseudo_candidates')]:
        a=collections.defaultdict(list);b=collections.defaultdict(list)
        for row in left:
            if row['address'] not in used_l:a[(row[field],str(row['range_shape']) if field=='native_sha256' else '')].append(row)
        for row in right:
            if row['address'] not in used_r:b[(row[field],str(row['range_shape']) if field=='native_sha256' else '')].append(row)
        for key in sorted(a.keys()&b.keys()):
            if len(a[key])==len(b[key])==1:
                x,y=a[key][0],b[key][0];result[out].append({'left':x['address'],'right':y['address'],'bytes_left':x['bytes'],'bytes_right':y['bytes'],'fingerprint':key[0]});used_l.add(x['address']);used_r.add(y['address'])
            elif field=='native_sha256':result['ambiguous_native_groups'].append({'left':[r['address'] for r in a[key]],'right':[r['address'] for r in b[key]]})
    result['unmatched_left']=[x['address'] for x in left if x['address'] not in used_l]
    result['unmatched_right']=[x['address'] for x in right if x['address'] not in used_r]
    return result


def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--output',required=True,type=Path);a=p.parse_args()
    data={v:inventory(Path('analysis/rea-'+v+('-comparison' if v=='1.10' else '')),Path('analysis/decoder-capture/validated-releases/nanocore-'+v)) for v in ['1.10','1.11','1.12']}
    report={'limitations':__doc__,'inventories':data,'comparisons':{x+'..'+y:compare(data[x],data[y]) for x,y in [('1.10','1.11'),('1.11','1.12'),('1.10','1.12')]}}
    a.output.write_text(json.dumps(report,indent=2)+'\n')
    for k,v in report['comparisons'].items():print(k,{s:len(r) for s,r in v.items()})

if __name__=='__main__':main()
