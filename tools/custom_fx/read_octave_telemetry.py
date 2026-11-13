"""Bounded read-only diagnostic; only use with the experimental octave image."""
import ctypes as c,json,pathlib,time,queue,struct,hashlib
from midi_frames import SysexStream

import argparse
p=argparse.ArgumentParser(description='Read bounded OCT? telemetry from the experimental octave firmware (macOS CoreMIDI). No writes or arbitrary memory reads.')
p.add_argument('--output',required=True,type=pathlib.Path);p.add_argument('--count',type=int,default=3);p.add_argument('--interval',type=float,default=1)
args=p.parse_args()

m=c.CDLL('/System/Library/Frameworks/CoreMIDI.framework/CoreMIDI');cf=c.CDLL('/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation')
cf.CFStringCreateWithCString.argtypes=[c.c_void_p,c.c_char_p,c.c_uint32];cf.CFStringCreateWithCString.restype=c.c_void_p;cf.CFStringGetCString.argtypes=[c.c_void_p,c.c_void_p,c.c_long,c.c_uint32];cf.CFRelease.argtypes=[c.c_void_p]
name=cf.CFStringCreateWithCString(None,b'NanoCore octave telemetry',0x08000100);key=cf.CFStringCreateWithCString(None,b'displayName',0x08000100)
m.MIDIClientCreate.argtypes=[c.c_void_p,c.c_void_p,c.c_void_p,c.POINTER(c.c_uint32)];m.MIDIOutputPortCreate.argtypes=[c.c_uint32,c.c_void_p,c.POINTER(c.c_uint32)];m.MIDIObjectGetStringProperty.argtypes=[c.c_uint32,c.c_void_p,c.POINTER(c.c_void_p)];m.MIDISend.argtypes=[c.c_uint32,c.c_uint32,c.c_void_p]
q=queue.Queue();stream=SysexStream();CB=c.CFUNCTYPE(None,c.c_void_p,c.c_void_p,c.c_void_p)
@CB
def callback(p,*args):
 addr=p+4
 for _ in range(c.c_uint32.from_address(p).value):
  n=c.c_uint16.from_address(addr+8).value
  for frame in stream.feed(c.string_at(addr+10,n)):q.put(frame)
  addr=(addr+10+n+3)&~3
m.MIDIInputPortCreate.argtypes=[c.c_uint32,c.c_void_p,CB,c.c_void_p,c.POINTER(c.c_uint32)]
client=c.c_uint32();inp=c.c_uint32();port=c.c_uint32();assert m.MIDIClientCreate(name,None,None,c.byref(client))==0
assert m.MIDIInputPortCreate(client,name,callback,None,c.byref(inp))==0;assert m.MIDIOutputPortCreate(client,name,c.byref(port))==0

def endpoint(get,count):
 matches=[]
 for i in range(count()):
  ep=get(i);s=c.c_void_p();m.MIDIObjectGetStringProperty(ep,key,c.byref(s));b=c.create_string_buffer(512)
  if s:cf.CFStringGetCString(s,b,512,0x08000100);cf.CFRelease(s)
  if b.value.decode().lower()=='nanocore':matches.append(ep)
 assert len(matches)==1,matches
 return matches[0]
src=endpoint(m.MIDIGetSource,m.MIDIGetNumberOfSources);dst=endpoint(m.MIDIGetDestination,m.MIDIGetNumberOfDestinations);assert m.MIDIPortConnectSource(inp,src,None)==0

def pack(data):
 out=bytearray()
 for i in range(0,len(data),7):
  g=data[i:i+7];out.append(sum(((b>>7)&1)<<j for j,b in enumerate(g)));out.extend(b&127 for b in g)
 return out

def unpack(data):
 out=bytearray()
 for i in range(0,len(data),8):
  g=data[i:i+8];out.extend(b|(((g[0]>>j)&1)<<7) for j,b in enumerate(g[1:]))
 return bytes(out)

seq=0
names=['magic','schema','timer_hz','sample_rate','audio_block_frames','audio_calls','audio_frames','audio_min_ticks','audio_max_ticks','audio_budget_ticks','audio_over_budget','audio_sum_low','audio_sum_high','heap_start','heap_end','heap_total','heap_free','heap_high_water','octave_calls','octave_frames','octave_max_ticks','octave_sum_low','octave_sum_high','octave_last_ticks','octave_init_count','now_low','now_high','octave_state_bytes','ring1','ring2','fx2_state1','fx2_state2','octave_fault','octave_budget_ticks','octave_previous_overruns','octave_control_count']
guard_names=['self_excursions','chain_excursions','ignored_overruns','hard_budget_ticks','fault_self_ticks','fault_chain_ticks','fault_audio_call','fault_overruns','last_chain_ticks','recent_self_misses','recent_chain_misses','observation_gaps']
job_names=['job_%d_max_ticks'%i for i in range(9)]+['job_%d_calls'%i for i in range(9)]
def request():
 global seq
 seq+=1;payload=b'OCT?';inner=struct.pack('<BHHH',2,seq,0x39,len(payload))+payload
 frame=bytes.fromhex('f07d4e4370')+pack(inner)+b'\xf7';packet=struct.pack('<IQH',1,0,len(frame))+frame;buf=c.create_string_buffer(packet)
 assert m.MIDISend(port,dst,buf)==0
 deadline=time.monotonic()+5
 while time.monotonic()<deadline:
  try:reply=q.get(timeout=max(.01,deadline-time.monotonic()))
  except queue.Empty:break
  if reply[:5]!=bytes.fromhex('f07d4e4371'):continue
  r=unpack(reply[5:-1])
  if len(r)<8:continue
  version,rseq,op,status,n=struct.unpack('<BHHBH',r[:8])
  if rseq!=seq or op!=0x39:continue
  if version!=2 or status!=0 or n not in (128,144,216,192,264) or len(r)!=8+n:raise ValueError('Octave telemetry unavailable: '+r.hex())
  words=struct.unpack('<%dI'%(n//4),r[8:]);assert words[0]==0x4f435431 and (words[1],n) in ((1,128),(2,144),(3,216),(4,192),(5,264))
  fields=names+(guard_names if words[1] in (4,5) else [])+(job_names if words[1] in (3,5) else [])
  report=dict(zip(fields,words));report['host_time']=time.time();report['midi_resyncs']=stream.resyncs;return report
 raise TimeoutError('No octave telemetry reply')
try:
 rows=[]
 with args.output.open('x') as f:
  for i in range(args.count):
   row=request();rows.append(row);f.write(json.dumps(row)+'\n');f.flush();print(json.dumps(row),flush=True)
   if i+1<args.count:time.sleep(args.interval)
finally:
 m.MIDIPortDispose(inp);m.MIDIPortDispose(port);m.MIDIClientDispose(client);cf.CFRelease(name);cf.CFRelease(key)
