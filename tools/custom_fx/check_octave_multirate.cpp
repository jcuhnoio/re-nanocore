#include "../../firmware/custom-fx/octave/multirate_core.h"
#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <vector>
using octave_shared_optimized::MultirateCore;
using octave_shared_optimized::Parameters;
int main(){
 unsigned rng=971;unsigned samples=0;
 for(float rate:{44100.f,48000.f})for(int mode=0;mode<4;++mode){
  MultirateCore a,b; a.prepare(rate);b.prepare(rate);
  std::vector<float>x(8192),y(x.size()),z(x.size());
  for(unsigned i=0;i<x.size();++i){rng=rng*1664525u+1013904223u;x[i]=.15f*std::sin(i*.01174f)+.06f*std::sin(i*.031f)+.01f*(int(rng>>8)-8388608)/8388608.f;}
  for(unsigned off=0;off<x.size();off+=256){
   Parameters p;p.dryFx=mode;p.attackMs=(off/256)%3?650:0;p.detuneCents=(off/256)%2?12:0;p.cutoffHz=3000;p.resonance=(off/256)%4;
   p.sub2=(off/256)%2?.7f:.05f;p.sub1=(off/256)%3?.4f:0;
   a.setParameters(p);b.setParameters(p);
   a.process(x.data()+off,y.data()+off,256);
   std::memcpy(z.data()+off,x.data()+off,256*sizeof(float));
   for(unsigned j=0;j<256;){rng=rng*1664525u+1013904223u;unsigned n=1+rng%67;if(n>256-j)n=256-j;b.process(z.data()+off+j,z.data()+off+j,n);j+=n;}
  }
  assert(std::memcmp(y.data(),z.data(),y.size()*sizeof(float))==0);
  for(float v:y)assert(std::isfinite(v));samples+=y.size();
 }
 // Sub-only processing cannot leak into an upper-only render.
 for(int voice=0;voice<3;++voice){
  MultirateCore a;octave_shared_optimized::Core<1024,512,false,true,128>b;
  a.prepare(44100);b.prepare(44100);Parameters p;p.dry=p.sub2=p.sub1=p.up1=p.up2=0;
  if(voice==0)p.dry=1;if(voice==1)p.up1=1;if(voice==2)p.up2=1;
  p.attackMs=650;p.dryFx=3;p.detuneCents=7;
  a.setParameters(p);b.setParameters(p);a.reset();b.reset();
  float x[64],y[64],z[64];
  for(int n=0;n<128;++n){for(int i=0;i<64;++i)x[i]=.2f*std::sin((n*64+i)*.01174f);a.process(x,y,64);b.process(x,z,64);assert(std::memcmp(y,z,sizeof(y))==0);}
 }
 for(int offset=0;offset<256;++offset){
  MultirateCore used,fresh;used.prepare(44100);fresh.prepare(44100);
  float x[512],a[512],b[512];for(int i=0;i<512;++i)x[i]=.2f*std::sin(i*.02f);
  used.process(x,a,offset);used.reset();fresh.reset();used.process(x,a,512);fresh.process(x,b,512);assert(std::memcmp(a,b,sizeof(a))==0);
 }
 std::printf("{\"state_bytes\":%zu,\"block_inplace_control_samples\":%u,\"upper_and_dry_bitwise_cases\":3,\"reset_offsets\":256}\n",sizeof(MultirateCore),samples);
}
