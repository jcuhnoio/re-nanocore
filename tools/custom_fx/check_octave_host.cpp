#include "../../firmware/custom-fx/octave/reference/experiments/SharedSwellCore.h"
#ifndef OPT_HEADER
#define OPT_HEADER "../../firmware/custom-fx/octave/shared_core.h"
#endif
#include OPT_HEADER
#include <cstdio>
#include <cstring>
#include <vector>
#include <chrono>
#include <algorithm>
#include <limits>
using Base=octave_shared::Core<2048,1024>;
using Opt=octave_shared_optimized::Core<2048,1024>;
using P=octave_shared::Parameters;
using Q=octave_shared_optimized::Parameters;
static_assert(sizeof(P)==sizeof(Q),"parameters layout");
Q convert(P p){Q q;memcpy(&q,&p,sizeof(q));return q;}
unsigned seed=783127;
unsigned rnd(){seed=1664525u*seed+1013904223u;return seed;}
std::vector<float> signal(int n,float sr){std::vector<float> s(n);for(int i=0;i<n;i++)s[i]=.15f*std::sin(i*6.28318530718f*110/sr)+.11f*std::sin(i*6.28318530718f*146.8f/sr)+.07f*std::sin(i*6.28318530718f*196/sr)+.02f*(float(int(rnd()>>8)-8388608)/8388608);return s;}
int main(){
 size_t compared=0;float error=0;
 for(float sr:{8000.f,44100.f,48000.f,96000.f})for(int inplace:{0,1}){
  Base a;Opt b;a.prepare(sr);b.prepare(sr);auto x=signal(131072,sr);std::vector<float> ya(x.size()),yb(x.size());
  P p;p.detuneCents=7;p.dryFx=3;p.resonance=2;
  size_t offset=0;int block=0;
  while(offset<x.size()){
   if(block%57==0){p.attackMs=((block/57)%3==0)?0:650;p.outputDb=-9+float(block%6);p.cutoffHz=1000+float(block%9000);p.sub1=(block/57)%2?.3f:0;p.up1=(block/57)%3?.65f:0;p.sub2=(block/57)%4?.05f:0;p.up2=(block/57)%5?.35f:0;p.dryFx=(block/57)%4;p.resonance=(block/57)%4;p.sensitivity=block%101;p.thresholdDb=-60+float(block%20);}
   a.setParameters(p);b.setParameters(convert(p));
   if(block==320){a.reset();b.reset();}
   auto n=std::min<size_t>(rnd()%258,x.size()-offset);
   if(inplace){std::copy_n(x.data()+offset,n,ya.data()+offset);std::copy_n(x.data()+offset,n,yb.data()+offset);a.process(ya.data()+offset,ya.data()+offset,n);b.process(yb.data()+offset,yb.data()+offset,n);}
   else{a.process(x.data()+offset,ya.data()+offset,n);b.process(x.data()+offset,yb.data()+offset,n);}
   offset+=n;++block;
  }
  for(size_t i=0;i<x.size();i++){error=std::max(error,std::abs(ya[i]-yb[i]));if(memcmp(&ya[i],&yb[i],4)){printf("FAIL sr%g inplace%d at%zu: %.9g %.9g\n",sr,inplace,i,ya[i],yb[i]);return 1;}}
  compared+=x.size();
 }
 printf("{\"bitwise_samples\":%zu,\"max_error\":%g,\"baseline_bytes\":%zu,\"optimized_bytes\":%zu,\"cases\":8}\n",compared,error,sizeof(Base),sizeof(Opt));
 auto x=signal(262144,48000);std::vector<float> y(x.size());
 for(float attack:{0.f,650.f}){
  std::vector<double> base,opt;
  for(int repeat=0;repeat<7;repeat++){
   Base a;Opt b;a.prepare(48000);b.prepare(48000);P p;p.attackMs=attack;p.detuneCents=7;p.dryFx=3;p.resonance=2;
   auto run=[&](auto &core,auto params){auto begin=std::chrono::steady_clock::now();for(size_t i=0;i<x.size();i+=64){core.setParameters(params);core.process(x.data()+i,y.data()+i,64);}volatile float sink=y.back();(void)sink;return std::chrono::duration<double,std::nano>(std::chrono::steady_clock::now()-begin).count()/x.size();};
   if(repeat%2){opt.push_back(run(b,convert(p)));base.push_back(run(a,p));}else{base.push_back(run(a,p));opt.push_back(run(b,convert(p)));}
  }
  std::sort(base.begin(),base.end());std::sort(opt.begin(),opt.end());printf("{\"attack_ms\":%g,\"baseline_ns_per_sample_median\":%.3f,\"optimized_ns_per_sample_median\":%.3f,\"ratio\":%.5f}\n",attack,base[3],opt[3],opt[3]/base[3]);
 }
}
