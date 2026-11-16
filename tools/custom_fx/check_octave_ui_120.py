#!/usr/bin/env python3
"""Execute1.2 Octave UI hooks and real native callers offline; no device I/O."""
import sys,json,struct,textwrap,hashlib
from pathlib import Path
from unicorn import Uc,UC_ARCH_RISCV,UC_MODE_RISCV32,UC_HOOK_CODE
from unicorn import riscv_const as r
from check_octave_target import elf
from patch_image import extract_fit
from octave_ui_120 import patches
ROOT=Path(__file__).resolve().parents[2]
import os
os.chdir(ROOT)
build=Path(sys.argv[1]);output=Path(sys.argv[2]) if len(sys.argv)>2 else build/'ui-tests.json'
raw=Path('analysis/decoder-capture/validated-releases/nanocore-1.2/firmware.bin').read_bytes()
fit=extract_fit(raw);segment=next(x for x in fit['segments'] if x['load_address']==0x40000000)
baseline=Path(sys.argv[4]).read_bytes() if len(sys.argv)>4 else raw
bs=next(x for x in extract_fit(baseline)['segments'] if x['load_address']==0x40000000)
original=baseline[bs['offset']:bs['offset']+bs['size']]
blob,segs,symbols=elf(build/'device.elf')
packaged=Path(sys.argv[3]).read_bytes() if len(sys.argv)>3 else None
package_segment=next(x for x in extract_fit(packaged)['segments'] if x['load_address']==0x40000000) if packaged else None
loaded=packaged[package_segment['offset']:package_segment['offset']+package_segment['size']] if packaged else original
new=bytearray(loaded)+bytearray(0x100000-len(loaded))
shoff=struct.unpack_from('<I',blob,32)[0];shent,shnum=struct.unpack_from('<HH',blob,46)
for i in range(shnum):
 sh=struct.unpack_from('<10I',blob,shoff+i*shent)
 if sh[2]&2:
  data=bytes(sh[5]) if sh[1]==8 else blob[sh[4]:sh[4]+sh[5]]
  off=sh[3]-0x40000000
  assert 0<=off and off+len(data)<=len(new)
  new[off:off+len(data)]=data
for p in patches(raw,symbols):
 off=p['offset']-segment['offset'];b=bytes.fromhex(p['replacement_hex'])
 if packaged:assert new[off:off+len(b)]==b,('package differs from validated hooks',p)
 else:new[off:off+len(b)]=b
c={'memset':0x4000ce76,'strcmp':0x4000d046,'native_snprintf':0x4000d3de}
def mapped(k,old):return c.get(k,old)
# Reuse the established vendor-instruction emulator, not firmware address maps.
base=Path('tools/custom_fx/check_octave_ui.py').read_text()
exec(base[base.index("s=Path('tools/custom_fx/check_vibe_ui_target.py')"):base.index('exec(textwrap.dedent(s))')])
remap={0x40004f92:0x4000ce76,0x400031bc:0x4000ce76,0x400086ec:0x4000faa0,0x40007bb6:0x4000f284,0x4000303c:0x30046900,0x40002fdc:0x4000b86c}
for a,b in remap.items():s=s.replace(hex(a),hex(b))
s=s.replace('u.mem_map(0x30000000,0x100000)','u.mem_map(0x30000000,0x200000)')
s=s.replace('stack=0x300f0000;',"""for seg in fit['segments']:
   if seg['load_address']!=0x40000000:u.mem_write(seg['load_address'],raw[seg['offset']:seg['offset']+seg['size']])
  stack=0x300f0000;""")
s=s.replace('assert u.reg_read(r.UC_RISCV_REG_PC)==stop','assert u.reg_read(r.UC_RISCV_REG_PC)==stop,hex(u.reg_read(r.UC_RISCV_REG_PC))')
s=s.replace('u.emu_start(entry,stop,count=50000)','u.emu_start(entry,stop,count=100000)')
s=s.replace('elif op==0x4000400b:', "elif op==0x400b:value=int.from_bytes(uc.mem_read(address,1),'little',signed=True)&0xffffffff\n   elif op==0x4000400b:")
exec(textwrap.dedent(s))
counts={}
def compare(entry,args,memory=None):
 a,ar,ast=run(original,entry,args,memory=memory)
 b,br,bst=run(new,entry,args,memory=memory)
 assert a.reg_read(r.UC_RISCV_REG_A0)==b.reg_read(r.UC_RISCV_REG_A0),(hex(entry),args)
 return a,b
for subtype in range(22):
 a,_,_=run(original,0x4006adba,[subtype]);b,_,_=run(new,0x4006adba,[subtype])
 assert b.reg_read(r.UC_RISCV_REG_A0)==(11 if subtype==8 else a.reg_read(r.UC_RISCV_REG_A0))
counts['native_count']=22
for family in range(11):
 for subtype in range(22):
  for mode in range(4):
   a,_,_=run(original,0x4002b93a,[family,subtype,mode]);b,_,_=run(new,0x4002b93a,[family,subtype,mode])
   assert b.reg_read(r.UC_RISCV_REG_A0)==(11 if (family,subtype)==(1,8) else a.reg_read(r.UC_RISCV_REG_A0)),(family,subtype,mode)
counts['metadata_count']=11*22*4
print('PASS native and UI counts',flush=True)
labels=['DRY','-2 OCT','-1 OCT','+1 OCT','+2 OCT','ATTACK','LOWPASS','DETUNE','DRY FX','RESON','LEVEL']
for style in range(3):
 for idx,want in enumerate(labels+['']):
  u,_,st=run(new,0x4002a8bc,[1,8,idx,style]);assert st(u.reg_read(r.UC_RISCV_REG_A0))==want
 u,_,st=run(new,0x4002a55e,[1,8,style]);assert st(u.reg_read(r.UC_RISCV_REG_A0))=='OCTAVE'
counts['labels']=36;counts['names']=3
for subtype in range(22):
 for size in range(14):
  mem={0x30010000:b'\xa5'*64}
  u,_,_=run(new,0x4006ae0c,[0x30010000,size,subtype],memory=mem)
  assert bytes(u.mem_read(0x30010000+size*4,64-size*4))==b'\xa5'*(64-size*4)
  if subtype==8:
   got=struct.unpack('<'+str(size)+'f',u.mem_read(0x30010000,size*4)) if size else ()
   defaults=[.65,.05,.3,.65,.35,0,6350/17850,0,0,0,.5]
   assert all(abs(x-(defaults[i] if i<11 else 0))<1e-6 for i,x in enumerate(got))
  else:
   a,_,_=run(original,0x4006ae0c,[0x30010000,size,subtype],memory=mem)
   assert u.mem_read(0x30010000,64)==a.mem_read(0x30010000,64)
counts['defaults']=22*14
print('PASS names labels defaults',flush=True)
for idx in range(11):
 for val in (0,.35,.5,1):
  u,_,st=run(new,0x4002bc20,[1,8,idx,0x30020000,64,0],val)
  want=f'{int(val*100+.5)}%'
  if idx==5:want=f'{int(val*2000+.5)}ms'
  if idx==6:want=f'{int(150+val*17850+.5)}Hz'
  if idx==7:want=f'{int(val*30+.5)}ct'
  if idx==8:want=['SMOOTH','SMOOTH','FILTER','DETUNE'][int(val*3+.5)]
  if idx==9:want=['LOW','MEDIUM','HIGH','PEAK'][int(val*3+.5)]
  if idx==10:want=f'{int(val*200+.5)}%'
  assert st(0x30020000)==want,(idx,val,st(0x30020000))
  assert u.reg_read(r.UC_RISCV_REG_A0)==0
for size in range(9):
 u,_,_=run(new,0x4002bc20,[1,8,6,0x30020000,size,0],1.,memory={0x30020000:b'X'*32})
 assert bytes(u.mem_read(0x30020000+size,32-size))==b'X'*(32-size)
counts['format']=44;counts['buffer_bounds']=9
for slot in range(11):
 for subtype in range(22):
  for idx in range(12):
   mem={0x400b0ec0+slot:bytes([subtype])}
   u,_,_=run(new,0x40021576,[slot,idx,0x30010000],memory=mem)
   if slot==1 and subtype==8:
    assert u.reg_read(r.UC_RISCV_REG_A0)==int(idx in (8,9)),(slot,subtype,idx)
    if idx in (8,9):assert bytes(u.mem_read(0x30010000,20))==struct.pack('<IffII',1,0,3,0,0)
   else:
    a,_,_=run(original,0x40021576,[slot,idx,0x30010000],memory=mem)
    assert a.reg_read(r.UC_RISCV_REG_A0)==u.reg_read(r.UC_RISCV_REG_A0),(slot,subtype,idx)
    assert a.mem_read(0x30010000,20)==u.mem_read(0x30010000,20),(slot,subtype,idx)
counts['enum']=11*22*12
print('PASS formatting enum descriptors',flush=True)
# Native setter includes the real bank selection, copy, update and publication.
for subtype in range(22):
 for idx in range(14):
  bank=bytearray(0x864+4);struct.pack_into('<I',bank,316,8);bank[320]=subtype;bank[-4:]=b'GUAR'
  mem={0x301038b8:bytes(bank),0x301041c8:bytes([subtype]),0x301041c4:struct.pack('<I',0x30010000)}
  u,_,_=run(new,0x40011f56,[idx],.375,memory=mem)
  native,_,_=run(new,0x4006adba,[subtype]);accepted=idx<native.reg_read(r.UC_RISCV_REG_A0)
  assert u.reg_read(r.UC_RISCV_REG_A0)==(0 if accepted else 0xffffffff),(subtype,idx)
  assert bytes(u.mem_read(0x301038b8+0x860,1))==bytes([int(accepted)]),(subtype,idx,'publication')
  assert bytes(u.mem_read(0x301038b8+0x864,4))==b'GUAR'
  if accepted:assert bytes(u.mem_read(0x301038b8+776+324+idx*4,4))==struct.pack('<f',.375)
counts['native_setter']=22*14
print('PASS native bank setter and publication',flush=True)
# Compare complete non-target label/name/format functions, including save helpers.
label_fallbacks=format_fallbacks=name_fallbacks=0
for family in range(11):
 for subtype in range(22):
  if (family,subtype)==(1,8):continue
  for style in range(3):
   a,_,ast=run(original,0x4002a55e,[family,subtype,style]);b,_,bst=run(new,0x4002a55e,[family,subtype,style])
   assert ast(a.reg_read(r.UC_RISCV_REG_A0))==bst(b.reg_read(r.UC_RISCV_REG_A0)),('name',family,subtype,style)
   name_fallbacks+=1
   for idx in range(12):
    a,_,ast=run(original,0x4002a8bc,[family,subtype,idx,style]);b,_,bst=run(new,0x4002a8bc,[family,subtype,idx,style])
    assert ast(a.reg_read(r.UC_RISCV_REG_A0))==bst(b.reg_read(r.UC_RISCV_REG_A0)),('label',family,subtype,idx,style)
    label_fallbacks+=1
  for idx in range(3):
   a,ar,_=run(original,0x4002bc20,[family,subtype,idx,0x30020000,64,0],.5)
   b,br,_=run(new,0x4002bc20,[family,subtype,idx,0x30020000,64,0],.5)
   assert ar==br and a.reg_read(r.UC_RISCV_REG_A0)==b.reg_read(r.UC_RISCV_REG_A0),(family,subtype,idx,ar,br)
   format_fallbacks+=1
counts.update(label_fallbacks=label_fallbacks,format_fallbacks=format_fallbacks,name_fallbacks=name_fallbacks)
print('PASS untouched native UI paths',flush=True)
# Stub localization string lookup only; native caller handles family lookup,
# formatter result and fallback. Guard its exact24-byte output capacity.
s=s.replace('if pc in (0x4000ce76,0x4000ce76):', """if pc==0x40031e04:
    uc.reg_write(r.UC_RISCV_REG_A0,0);uc.reg_write(r.UC_RISCV_REG_PC,uc.reg_read(r.UC_RISCV_REG_RA));return
   if pc in (0x4000ce76,0x4000ce76):""")
exec(textwrap.dedent(s))
for idx,val,want in [(0,.65,'65%'),(1,.05,'5%'),(2,.3,'30%'),(3,0.,'0%'),(4,1.,'100%'),(5,.5,'1000ms'),(6,.5,'9075Hz'),(7,.5,'15ct'),(8,1.,'DETUNE'),(9,1.,'PEAK'),(10,.5,'100%')]:
 u,fallback,st=run(new,0x40020836,[0x4008965c,8,idx,0x30020000],val,memory={0x30020000:b'X'*32})
 assert st(0x30020000)==want,('native caller',idx,st(0x30020000))
 assert not fallback and bytes(u.mem_read(0x30020018,8))==b'X'*8
for idx in range(11):
 bank=bytearray(0x868);struct.pack_into('<I',bank,316,8);bank[320]=8;bank[-4:]=b'GUAR'
 mem={0x301038b8:bytes(bank),0x301041c8:b'\x08',0x301041c4:struct.pack('<I',0x30010000),0x30111b4d:b'\x08'}
 u,_,_=run(new,0x40027afe,[1,idx],.375,memory=mem)
 assert u.reg_read(r.UC_RISCV_REG_A0)==0,('native parameter service',idx)
 assert bytes(u.mem_read(0x301118b8+(12+idx)*4,4))==struct.pack('<f',.375)
 assert bytes(u.mem_read(0x301038b8+776+324+idx*4,4))==struct.pack('<f',.375)
 assert bytes(u.mem_read(0x301038b8+0x864,4))==b'GUAR'
counts['native_formatter_caller']=11;counts['native_parameter_service']=11
print('PASS native formatter caller and parameter service',flush=True)
# Both private effects remain independently reachable in a combined package.
if baseline!=raw:
 for idx,want in enumerate(['SPEED','DEPTH','LEVEL','MODE']):
  u,_,st=run(new,0x4002a8bc,[5,10,idx,2]);assert st(u.reg_read(r.UC_RISCV_REG_A0))==want
 u,_,_=run(new,0x4002b93a,[5,10,0]);assert u.reg_read(r.UC_RISCV_REG_A0)==4
 u,_,_=run(new,0x40021576,[5,3,0x30010000],memory={0x400b0ec5:b'\x0a'})
 assert bytes(u.mem_read(0x30010000,20))==struct.pack('<IffII',1,0,1,0,0)
 for val,want in [(0,'CHORUS'),(1,'VIBRATO')]:
  u,rendered,_=run(new,0x4002bc20,[5,10,3,0x30020000,64,0],val);assert rendered==[want]
 counts['univibe_coexistence']=8
for fault in (1,2):
 for idx in range(11):
  u,fallback,st=run(new,0x40020836,[0x4008965c,8,idx,0x30020000],.5,memory={symbols['nc_octave_fault']:struct.pack('<I',fault)})
  assert st(0x30020000)==('CHAIN LIMIT' if fault==2 else 'CPU LIMIT') and not fallback
counts['native_fault_display']=22
for idx,value in enumerate([0,333,667,1000]):
 mem={0x30010000:struct.pack('<IffII',1,0,3,0,0)}
 u,_,_=run(new,0x4001f1e2,[0x30010000,idx],memory=mem);assert u.reg_read(r.UC_RISCV_REG_A0)==value
 u,_,_=run(new,0x4001f12a,[0x30010000,value],memory=mem);assert u.reg_read(r.UC_RISCV_REG_A0)==idx
counts['enum_conversions']=8
if 'nc_octave_diagnostic' in symbols:
 s=s.replace('if pc in (0x4000ce76,0x4000ce76):', """if pc in (0x40043790,0x4004393c):
    uc.reg_write(r.UC_RISCV_REG_A0,4000000 if pc==0x40043790 else 0x12345678)
    if pc==0x4004393c:uc.reg_write(r.UC_RISCV_REG_A1,9)
    uc.reg_write(r.UC_RISCV_REG_PC,uc.reg_read(r.UC_RISCV_REG_RA));return
   if pc==0x4007fa4e:
    # Native storage read boundary; preserve caller args and report a sentinel.
    rendered.append(tuple(uc.reg_read(getattr(r,'UC_RISCV_REG_A'+str(i))) for i in range(4)))
    uc.reg_write(r.UC_RISCV_REG_A0,123);uc.reg_write(r.UC_RISCV_REG_PC,uc.reg_read(r.UC_RISCV_REG_RA));return
   if pc in (0x4000ce76,0x4000ce76):""")
 exec(textwrap.dedent(s))
 # Execute the actual patched opcode entry in packaged images; directly call
 # the linked trampoline when checking an unpackaged development ELF.
 entry=0x4007fb52 if packaged else symbols['nc_octave_diagnostic']
 mem={0x30010000:b'OCT?',0x30011000:bytes(8),0x30012000:b'\xa5'}
 u,_,_=run(new,entry,[0x39,0x30010000,4,0x30011000,0x30012000],memory=mem)
 ptr,size=struct.unpack('<II',u.mem_read(0x30011000,8));data=struct.unpack('<'+str(size//4)+'I',u.mem_read(ptr,size))
 assert data[0]==0x4f435431 and data[1] in (4,5) and size==(264 if data[1]==5 else 192)
 assert data[2]==4000000 and data[15:18]==(0,0,0) and data[25:27]==(0x12345678,9) and data[35]==11
 assert bytes(u.mem_read(0x30012000,1))==b'\0'
 for payload,length,pointer,out,status in [(b'OCT!',4,0x30010000,0x30011000,0x30012000),(b'OCT?',3,0x30010000,0x30011000,0x30012000),(b'OCT?x',5,0x30010000,0x30011000,0x30012000),(b'ABCD',4,0,0x30011000,0x30012000),(b'ABCD',4,0x30010000,0x30011000,0),(b'OCT?',4,0x30010000,0,0x30012000),(b'OCT?',4,0x30010000,0x30011000,0)]:
  mem={0x30010000:payload,0x30011000:bytes(8),0x30012000:b'\xa5'}
  args=[0x39,pointer,length,out,status]
  u,trace,_=run(new,entry,args,memory=mem)
  if payload==b'OCT?' and length==4:
   assert u.reg_read(r.UC_RISCV_REG_A0)==(1 if status else 0)
   if status:assert bytes(u.mem_read(status,1))==b'\x01'
  else:
   old,oldtrace,_=run(original,0x4007fb52,args,memory=mem)
   assert oldtrace==trace and old.reg_read(r.UC_RISCV_REG_A0)==u.reg_read(r.UC_RISCV_REG_A0)
   assert old.mem_read(0x30011000,8)==u.mem_read(0x30011000,8) and old.mem_read(0x30012000,1)==u.mem_read(0x30012000,1)
 counts['diagnostic']=8
 print('PASS bounded diagnostics and native fallbacks',flush=True)
output.parent.mkdir(parents=True,exist_ok=True)
output.write_text(json.dumps(dict(firmware='1.2',baseline_sha256=hashlib.sha256(baseline).hexdigest(),package_sha256=hashlib.sha256(packaged).hexdigest() if packaged else None,source_sha256=hashlib.sha256(raw).hexdigest(),elf_sha256=hashlib.sha256(blob).hexdigest(),cases=counts,stack_and_callee_saved_preserved=True,physical_operations=False,limits='Native code execution; libc and mutex boundaries emulated. Physical UI, audio and CPU timing untested.'),indent=2)+'\n')
