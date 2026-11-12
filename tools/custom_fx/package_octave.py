#!/usr/bin/env python3
"""Offline exact1.12 OS packager for an appended octave payload plus reviewed hooks.

Unlike the bounded effect patcher this deliberately extends seg1 and reserves its
mapped RAM by moving heap1's initialized start pointer. No device operations.
Requires a complete physical OS backup; all bytes beyond the new seg1 are kept.
"""
import argparse
import hashlib
import json
from pathlib import Path
import struct
import zlib
from patch_image import OS_SIZE, extract_fit, property_offsets, fit_nodes, cstring, require, changed_ranges

CODE_BASE = 0x400A4540
HEAP_START_ADDRESS = 0x3004C1FC
HEAP_END = 0x40400000
PROTECTED_SECTOR = 0xD0000
SEG0_SHA = '4a3da7ca9b7fa1b1f92b4da59461dc2950ae5e1680f6c5d297eb3f6de19387f6'
SEG1_SHA = {'stock':'baf59b393f845beede0af7c6c7887d7a4e03a00a23caaa27eab6c0e9c39ef4d6',
            'univibe':'a29dbbf9c1a03ab97b753a64f8f332400d63c153ffdb78bf3584b948e1351cce'}
HEADER_SHA = 'f389e88a9bd70594f35993425942d5c1c32076c4926605e9b9d3182d39766a29'
def sha(data):return hashlib.sha256(data).hexdigest()
def number(value):return int(value,0) if isinstance(value,str) else value

def elf_payload(blob):
    require(blob[:7]==b'\x7fELF\x01\x01\x01','Expected ELF32 little-endian')
    require(struct.unpack_from('<HH',blob,16)==(2,243),'Expected executable RISC-V ELF')
    offset=struct.unpack_from('<I',blob,32)[0]
    size,count,strings_index=struct.unpack_from('<HHH',blob,46)
    require(size==40 and 0<count<4096 and offset+size*count<=len(blob),'Invalid ELF sections')
    sections=[struct.unpack_from('<10I',blob,offset+i*size) for i in range(count)]
    require(strings_index<count,'Invalid ELF names')
    strings=sections[strings_index]
    names=blob[strings[4]:strings[4]+strings[5]]
    allocated=[]
    for s in sections:
        if not(s[2]&2) or not s[5]:continue
        name=names[s[0]:names.index(b'\0',s[0])].decode()
        require(name not in ('.init_array','.fini_array','.ctors','.dtors'), 'Runtime constructor/destructor unsupported')
        require(s[3]>=CODE_BASE and s[3]+s[5]<0x40100000,'ELF section outside reviewed append region')
        require(s[1]==8 or s[4]+s[5]<=len(blob),'Truncated ELF section')
        data=bytes(s[5]) if s[1]==8 else blob[s[4]:s[4]+s[5]]
        allocated.append({'name':name,'address':s[3],'size':s[5],'type':s[1],'flags':s[2],'data':data})
    require(allocated and min(s['address'] for s in allocated)==CODE_BASE,'Wrong ELF link address')
    allocated.sort(key=lambda s:s['address'])
    for a,b in zip(allocated,allocated[1:]):require(a['address']+a['size']<=b['address'],'Overlapping ELF sections')
    end=(max(s['address']+s['size'] for s in allocated)+63)&~63
    result=bytearray(end-CODE_BASE)
    for s in allocated:result[s['address']-CODE_BASE:s['address']-CODE_BASE+s['size']]=s['data']
    return bytes(result),[{k:v for k,v in s.items() if k!='data'} for s in allocated]

def package(original, elf, hooks):
    require(len(original)==OS_SIZE,'Complete physical OS backup required')
    fit=extract_fit(original);locations=property_offsets(original)
    require(fit['image_version']=='1.12' and fit['dtb_size']==2048,'Exact1.12 FIT required')
    segs=fit['segments'];require(len(segs)==2,'Unexpected segment count')
    s0,s1=segs
    identity=lambda s:(s['name'],s['offset'],s['size'],s['load_address'],s['entry_address'])
    require(identity(s0)==('seg0',0x800,0xc604,0x30040000,0x40000000) and identity(s1)==('seg1',0xd000,0xa4540,0x40000000,0x40000000),'Unexpected1.12 memory layout')
    require(sha(s0['data'])==SEG0_SHA and sha(s1['data']) in SEG1_SHA.values(),'Unknown firmware segments')
    header=bytearray(original[:2048]);start,length=locations[('', 'timestamp')];header[start:start+length]=bytes(length)
    for (path,name),(start,length) in locations.items():
        if path.startswith('/images/') and name=='value':header[start:start+length]=bytes(length)
    require(sha(header)==HEADER_SHA,'Unknown FIT header/layout')
    require(hooks.get('schema_version')==1 and hooks.get('firmware_version')=='1.12','Expected reviewed1.12 hook plan')
    require(hooks.get('elf_sha256')==sha(elf),'Hook plan must bind exact ELF SHA256')
    payload,sections=elf_payload(elf)
    heap_start=CODE_BASE+len(payload)
    file_start=s1['offset']+s1['size'];file_end=file_start+len(payload)
    require(file_end<=PROTECTED_SECTOR,'Append would change protected final partial erase sector')
    require(heap_start<HEAP_END,'No heap remains')
    image=bytearray(original);allowed=bytearray(OS_SIZE);records=[]
    def patch(offset,expected,replacement,description):
        require(0<=offset<offset+len(expected)<=OS_SIZE and len(expected)==len(replacement),'Invalid fixed-size patch')
        require(not any(allowed[offset:offset+len(expected)]),'Overlapping modifications')
        require(original[offset:offset+len(expected)]==expected,'Expected original bytes mismatch: '+description)
        image[offset:offset+len(expected)]=replacement;allowed[offset:offset+len(expected)]=b'\1'*len(expected)
        records.append({'offset':offset,'size':len(expected),'expected_hex':expected.hex(),'replacement_hex':replacement.hex(),'description':description})
    for h in hooks.get('patches',[]):
        if 'address' in h:
            address=number(h['address']);owners=[s for s in segs if s['load_address']<=address<s['load_address']+s['size']]
            require(len(owners)==1,'Hook address is not in an original segment')
            offset=owners[0]['offset']+address-owners[0]['load_address']
            if 'offset' in h:require(number(h['offset'])==offset,'Hook address/offset mismatch')
        else:offset=number(h['offset'])
        expected=bytes.fromhex(h['expected_hex']);replacement=bytes.fromhex(h['replacement_hex'])
        require(any(s['offset']<=offset<offset+len(expected)<=s['offset']+s['size'] for s in segs),'Hook leaves original segments')
        patch(offset,expected,replacement,h.get('description','reviewed octave hook'))
    require(hooks.get('patches'),'Missing integration hooks')
    heap_offset=s0['offset']+HEAP_START_ADDRESS-s0['load_address']
    require(struct.unpack_from('<4I',original,heap_offset-8)==(1,0x4009c074,CODE_BASE,HEAP_END),'Heap descriptor differs')
    patch(heap_offset,struct.pack('<I',CODE_BASE),struct.pack('<I',heap_start),'Reserve appended mapped code/data/BSS before heap1')
    patch(file_start,original[file_start:file_end],payload,'Append linked octave code/data and initialized zero BSS to seg1')
    size_offset,size_length=locations[('/images/seg1','data-size')];require(size_length==4,'Unexpected size field')
    patch(size_offset,struct.pack('>I',s1['size']),struct.pack('>I',heap_start-s1['load_address']),'Extend seg1 load extent through reserved payload')
    _,nodes=fit_nodes(original)
    for s in segs:
        length=heap_start-s1['load_address'] if s['name']=='seg1' else s['size']
        data=image[s['offset']:s['offset']+length];parent='/images/'+s['name']
        for path,values in nodes.items():
            if path.startswith(parent+'/') and path.count('/')==3 and 'algo' in values:
                algorithm=cstring(values['algo']);digest=struct.pack('>I',zlib.crc32(data)) if algorithm=='crc32' else hashlib.new(algorithm,data).digest()
                offset,length=locations[(path,'value')];require(len(digest)==length,'Hash field changed size')
                patch(offset,original[offset:offset+length],digest,'Update '+s['name']+' '+algorithm)
    target=bytes(image);new_fit=extract_fit(target)
    require(target[file_end:]==original[file_end:],'Bytes beyond appended region changed')
    require(target[PROTECTED_SECTOR:]==original[PROTECTED_SECTOR:],'Protected final sector changed')
    require(all(a==b or allowed[i] for i,(a,b) in enumerate(zip(original,target))),'Unaccounted modification')
    require(new_fit['segments'][1]['size']==heap_start-0x40000000,'New FIT extent mismatch')
    report={'schema_version':1,'image_kind':'raw-os-fit-extended','firmware_version':'1.12','source_kind':next(k for k,v in SEG1_SHA.items() if sha(s1['data'])==v),'input_sha256':sha(original),'output_sha256':sha(target),'elf_sha256':sha(elf),'size':len(target),'code_base':hex(CODE_BASE),'old_heap_start':hex(CODE_BASE),'new_heap_start':hex(heap_start),'heap_end':hex(HEAP_END),'remaining_heap_span':HEAP_END-heap_start,'old_seg1_size':s1['size'],'new_seg1_size':new_fit['segments'][1]['size'],'appended_file_range':[file_start,file_end],'elf_sections':sections,'patches':records,'changed_ranges':changed_ranges(original,target),'all_fit_hashes_verified':True,'bytes_after_appended_region_preserved':True,'protected_final_sector_preserved':True,'publisher_signed':False,'device_tested':False,'limits':['Offline packaging/integrity only; integration hooks and runtime performance need independent validation','Heap descriptor reserve is static memory ownership, not live free-heap measurement']}
    return target,report

if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--input',required=True,type=Path);p.add_argument('--elf',required=True,type=Path);p.add_argument('--hooks',required=True,type=Path);p.add_argument('--output',required=True,type=Path);a=p.parse_args()
    target,report=package(a.input.read_bytes(),a.elf.read_bytes(),json.loads(a.hooks.read_text()))
    a.output.mkdir(parents=True,exist_ok=False)
    (a.output/'os-partition.bin').write_bytes(target);(a.output/'manifest.json').write_text(json.dumps(report,indent=2)+'\n')
    print(json.dumps({k:v for k,v in report.items() if k not in ('patches','changed_ranges')},indent=2))
