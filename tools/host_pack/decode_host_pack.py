"""Decode ToneCommand AHPK resources using the observed Dart loader formula.
Pure Python, no application execution; validates every ID, length and CRC.
"""
import argparse,hashlib,json,struct,zlib
from pathlib import Path
SECRET=bytes.fromhex('7a3f91c0e2b64d18a90f55c4d1e87b23c6a04f9e8d2751b0c3e6a8d4f1920b57')
p=argparse.ArgumentParser();p.add_argument('--pack',required=True);p.add_argument('--manifest',required=True);p.add_argument('--output',required=True);a=p.parse_args()
b=Path(a.pack).read_bytes();manifest=json.loads(Path(a.manifest).read_text());names=sorted(x for x in manifest if x!='assets/runtime/engine.dat' and 'CupertinoIcons.ttf' not in x)
magic,version,count=struct.unpack_from('<4sII',b);assert magic==b'AHPK' and version==1 and count==len(names)
out=Path(a.output);out.mkdir(exist_ok=False,parents=True);records=[]
for i,name in enumerate(names):
 rel=Path(name);assert not rel.is_absolute() and '..' not in rel.parts
 rec=12+i*48;opaque=b[rec:rec+32];off,n,length,crc=struct.unpack_from('<IIII',b,rec+32)
 key=hashlib.sha256(SECRET+b'\x01'+name.encode()).digest()
 compressed=bytes(x^key[j%32] for j,x in enumerate(b[off:off+n]));decoded=zlib.decompress(compressed)
 assert len(decoded)==length and zlib.crc32(decoded)==crc,(i,name)
 expected_id=hashlib.sha256(SECRET+name.encode()).digest();assert opaque==expected_id,(i,'ID mismatch')
 path=out/rel;path.parent.mkdir(parents=True,exist_ok=True);path.write_bytes(decoded)
 records.append({'entry':i,'name':name,'offset':off,'stored_length':n,'length':length,'crc32':crc,'sha256':hashlib.sha256(decoded).hexdigest(),'id_verified':opaque==expected_id})
report={'pack_sha256':hashlib.sha256(b).hexdigest(),'version':version,'decoded_count':len(records),'all_lengths_crcs_verified':True,'all_ids_verified':all(x['id_verified'] for x in records),'total_decoded_bytes':sum(x['length'] for x in records),'id_formula':'SHA256(secret || UTF8(path))','mask_formula':'SHA256(secret || 0x01 || UTF8(path))','decode':'zlib_decompress(ciphertext XOR repeating32 mask)','entries':records}
(out/'decode-manifest.json').write_text(json.dumps(report,indent=2)+'\n');print(json.dumps({k:v for k,v in report.items() if k!='entries'},indent=2))
