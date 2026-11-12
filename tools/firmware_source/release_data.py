"""Extract reviewed release parameter tables and float constants from decoded segments."""
import argparse,json,struct
from pathlib import Path

TABLES={
 '1.11':{'spring':(0x40096768,5),'duck':(0x4009691c,4),'cab':(0x40096940,2)},
 '1.12':{'spring':(0x4009b324,5),'duck':(0x4009bbe4,8),'cab':(0x4009bc14,3)},
}
CONSTANTS={
 '1.11':{'pitch_coarse_scale':0x400952cc,'pitch_coarse_offset':0x4009527c,'pitch_fine_scale':0x40094618,'pitch_fine_offset':0x40094600},
 '1.12':{'pitch_coarse_scale':0x4009b138,'pitch_coarse_offset':0x4009a324,'pitch_fine_scale':0x40096740,'pitch_fine_offset':0x40096728},
}

def extract(root,version):
    root=root/('nanocore-'+version);manifest=json.loads((root/'manifest.json').read_text())
    segments=[(s['load_address'],(root/(s['name']+'.bin')).read_bytes()) for s in manifest['segments']]
    def read(address,size):
        for base,data in segments:
            if base<=address and address+size<=base+len(data):return data[address-base:address-base+size]
        raise ValueError('Unmapped read '+hex(address))
    def cstring(address):
        out=bytearray()
        while len(out)<256:
            b=read(address+len(out),1)
            if b==b'\0':return out.decode('ascii')
            out+=b
        raise ValueError('Unterminated string')
    result={'package_sha256':manifest['package_sha256'],'tables':{},'constants':{}}
    for name,(address,count) in TABLES[version].items():
        pointers=struct.unpack('<'+str(count)+'I',read(address,count*4))
        result['tables'][name]={'address':hex(address),'pointers':[hex(p) for p in pointers],'labels':[cstring(p) for p in pointers]}
    for name,address in CONSTANTS[version].items():
        result['constants'][name]={'address':hex(address),'float32':struct.unpack('<f',read(address,4))[0]}
    return result

if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--decoded',type=Path,default=Path('analysis/decoder-capture/validated-releases'));p.add_argument('--output',required=True,type=Path);a=p.parse_args()
    a.output.write_text(json.dumps({v:extract(a.decoded,v) for v in TABLES},indent=2)+'\n')
