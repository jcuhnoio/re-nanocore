#!/usr/bin/env python3
"""Offline low-note characterization of supplied core-probe libraries; no device I/O.
Requires numpy. Metrics are signal measurements, not perceptual acceptance.
"""
import argparse,ctypes as c,json,math,struct,wave
from pathlib import Path
import numpy as np
p=argparse.ArgumentParser();p.add_argument('--library',action='append',required=True,help='name=path');p.add_argument('--output',type=Path,required=True);p.add_argument('--harmonics',type=int,default=1);a=p.parse_args()
a.output.mkdir(parents=True,exist_ok=False)
sr=44100;n=sr*4;t=np.arange(n)/sr;rows=[]
for spec in a.library:
 name,path=spec.split('=',1);lib=c.CDLL(str(Path(path).resolve()))
 lib.core_size.restype=c.c_uint;lib.core_init.argtypes=[c.c_void_p,c.c_float];lib.core_parameters.argtypes=[c.c_void_p,c.c_void_p];lib.core_reset.argtypes=[c.c_void_p];lib.core_process.argtypes=[c.c_void_p,c.c_void_p,c.c_void_p,c.c_uint]
 for hz in [55.,65.4064,73.4162,82.4069,98.,110.,146.8324,220.]:
  for voice,ratio in [(0,.25),(1,.5),(2,2.),(3,4.)]:
   state=c.create_string_buffer(lib.core_size());lib.core_init(state,sr)
   gains=[0.]*5;gains[voice+1]=1.
   params=c.create_string_buffer(struct.pack('<9f2i4f',*gains,0.,18000.,0.,0.,0,0,50.,-60.,120.,75.))
   lib.core_parameters(state,params);lib.core_reset(state)
   x=sum(.2/k*np.sin(2*np.pi*hz*k*t+.37*(k-1)) for k in range(1,a.harmonics+1)).astype('float32');y=np.zeros_like(x)
   lib.core_process(state,x.ctypes.data,y.ctypes.data,n)
   assert np.isfinite(y).all()
   z=y[sr:3*sr].astype('float64');tt=t[sr:3*sr];expected=hz*ratio
   basis=np.column_stack([v for k in range(1,a.harmonics+1) for v in (np.cos(2*np.pi*expected*k*tt),np.sin(2*np.pi*expected*k*tt))]+[np.ones_like(tt)])
   fit=np.linalg.lstsq(basis,z,rcond=None)[0];res=z-basis@fit
   rms=float(np.sqrt(np.mean(z*z)));resrms=float(np.sqrt(np.mean(res*res)));amp=float(np.hypot(*fit[:2]))
   specz=np.fft.rfft(z*np.hanning(len(z)));power=np.abs(specz);peak=int(np.argmax(power[1:])+1)
   frac=0.
   if 0<peak<len(power)-1:
    l,m,r=np.log(np.maximum(power[peak-1:peak+2],1e-30));frac=float(.5*(l-r)/(l-2*m+r))
   peak_hz=(peak+frac)*sr/len(z)
   row={'library':name,'input_hz':hz,'ratio':ratio,'expected_hz':expected,'peak_hz':peak_hz,'rms':rms,'fundamental_amplitude':amp,'residual_db':20*math.log10(max(resrms,1e-20)/max(rms,1e-20)),'dc':float(fit[-1]),'harmonics':a.harmonics,'max_abs':float(np.max(np.abs(y))),'output_sha256':__import__('hashlib').sha256(y.tobytes()).hexdigest()}
   rows.append(row)
   if hz==82.4069:
    with wave.open(str(a.output/f'{name}-E2-{ratio:g}.wav'),'wb') as w:
     w.setnchannels(1);w.setsampwidth(2);w.setframerate(sr);w.writeframes((np.clip(y,-1,1)*32767).astype('<i2').tobytes())
 (a.output/'measurements.json').write_text(json.dumps(rows,indent=2)+'\n')
print(json.dumps([r for r in rows if r['input_hz']==82.4069],indent=2))
