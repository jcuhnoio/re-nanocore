// Offline regression: preserve every octave voice and dry-processing mode.
#include "../../firmware/custom-fx/octave/shared_core.h"
#include <vector>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#ifdef NC_OCTAVE_SMALL_FFT
using Direct=octave_shared_optimized::Core<1024,512,false,false,128>;
using Sliced=octave_shared_optimized::Core<1024,512,false,true,128>;
#else
using Direct=octave_shared_optimized::Core<2048,1024>;
using Sliced=octave_shared_optimized::Core<2048,1024,false,true>;
#endif
using P=octave_shared_optimized::Parameters;
int main() {
    constexpr int count=16384, delay=Sliced::latencySamples-Direct::latencySamples;
    unsigned rng=9273; size_t compared=0; int cases=0; float worst=0;
    for (float sr : {44100.f,48000.f}) for (int voice=0;voice<6;++voice)
    for (int mode=0;mode<4;++mode) for (float attack : {0.f,650.f}) {
        P p; p.dry=p.sub2=p.sub1=p.up1=p.up2=0;
        if (voice==0) p.dry=.6f;
        if (voice==1) p.sub2=.6f;
        if (voice==2) p.sub1=.6f;
        if (voice==3) p.up1=.6f;
        if (voice==4) p.up2=.6f;
        if (voice==5) { p.dry=.65f;p.sub2=.05f;p.sub1=.3f;p.up1=.65f;p.up2=.35f; }
        p.dryFx=mode;p.attackMs=attack;p.detuneCents=7;p.resonance=2;
        Direct a;Sliced b;a.prepare(sr);b.prepare(sr);a.setParameters(p);b.setParameters(p);a.reset();b.reset();
        std::vector<float>x(count+delay),ya(x.size()),yb(x.size());
        for (int i=0;i<count;++i) { rng=rng*1664525u+1013904223u; x[i]=.2f*std::sin(i*.031f)+.1f*std::sin(i*.083f)+.01f*(float(int(rng>>8)-8388608)/8388608); }
        for(size_t i=0;i<x.size();) {
            rng=rng*1664525u+1013904223u;
            size_t n=std::min<size_t>(1+rng%193,x.size()-i);
            a.process(x.data()+i,ya.data()+i,n);
            std::copy_n(x.data()+i,n,yb.data()+i);b.process(yb.data()+i,yb.data()+i,n);i+=n;
        }
        for(int i=0;i<count;++i) {
            float e=std::abs(ya[i]-yb[i+delay]);worst=std::max(worst,e);
            if (std::memcmp(&ya[i],&yb[i+delay],sizeof(float))) {
                std::printf("FAIL sr%g voice%d mode%d attack%g sample%d %.9g %.9g error%.9g\n",sr,voice,mode,attack,i,ya[i],yb[i+delay],e);return 1;
            }
        }
        for(int i=0;i<delay;++i) if(yb[i]!=0) return 2;
        compared+=count;++cases;
    }
    // Reset during each pending job must cancel it and clear delayed tails.
    for (int offset = 128; offset < 256; ++offset) {
        Sliced used,fresh;used.prepare(44100);fresh.prepare(44100);
        P p;p.attackMs=650;p.dryFx=3;p.detuneCents=7;
        used.setParameters(p);fresh.setParameters(p);used.reset();fresh.reset();
        std::vector<float> x(4096,.2f),a(x.size()),b(x.size());
        used.process(x.data(),a.data(),offset);used.reset();
        used.process(x.data(),a.data(),x.size());fresh.process(x.data(),b.data(),x.size());
        if(std::memcmp(a.data(),b.data(),a.size()*sizeof(float))) return 3;
    }
    // Identical control events produce identical output across host call sizes.
    Sliced whole,fragmented;whole.prepare(44100);fragmented.prepare(44100);
    std::vector<float>x(257),a(257),b(257);
    for(int event=0;event<128;++event) {
        P p;p.dryFx=event%4;p.attackMs=event%3?650:0;
        p.sub2=event%2?.7f:0;p.sub1=event%3?.4f:0;
        p.up1=event%5?.3f:0;p.up2=event%7?.6f:0;
        p.detuneCents=event%31;p.cutoffHz=300+event*40;p.resonance=event%4;
        whole.setParameters(p);fragmented.setParameters(p);
        for(int i=0;i<257;++i)x[i]=.2f*std::sin((event*257+i)*.07f);
        whole.process(x.data(),a.data(),257);
        for(int i=0;i<257;) {int n=std::min(17,257-i);fragmented.process(x.data()+i,b.data()+i,n);i+=n;}
        for(int i=0;i<257;++i)if(!std::isfinite(a[i])||!std::isfinite(b[i]))return 4;
        if(std::memcmp(a.data(),b.data(),a.size()*sizeof(float)))return 5;
    }
    std::printf("{\"pending_job_resets\":128,\"control_transition_events\":128,\"cases\":%d,\"bitwise_delayed_samples\":%zu,\"added_latency_samples\":%d,\"max_error\":%g,\"direct_bytes\":%zu,\"scheduled_bytes\":%zu}\n",cases,compared,delay,worst,sizeof(Direct),sizeof(Sliced));
}
