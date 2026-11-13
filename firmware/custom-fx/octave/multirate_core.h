// Experimental sub-octave path: 512/256/H64 at one quarter of device rate.
// Upper voices and processed dry retain the existing full-rate core.
#pragma once
#include "shared_core.h"
namespace octave_shared_optimized {
struct Halfband {
    // 31-tap Kaiser-windowed halfband, beta7.5; exact halfband zero taps.
    static float tap(unsigned i) {
        static const float c[]={-7.912674293e-05f,0.0008266569914f,-0.003211399227f,
            0.008866732728f,-0.02037420504f,0.04274295522f,-0.09214848619f,0.3133768723f};
        return c[i];
    }
};
struct Down2 {
    float ring[32]{};unsigned position=0,phase=0;
    bool push(float x,float& out) {
        ring[position]=x;const unsigned p=position;position=(position+1)&31;
        phase^=1;if(phase)return false;
        float y=.5f*ring[(p-15)&31];
        #pragma GCC unroll 8
        for(unsigned i=0;i<8;++i)y+=Halfband::tap(i)*(ring[(p-2*i)&31]+ring[(p-30+2*i)&31]);
        out=y;return true;
    }
};
struct Up2 {
    float ring[16]{};unsigned position=0;
    void push(float x){position=(position+1)&15;ring[position]=x;}
    float even()const {
        float y=0;
        #pragma GCC unroll 8
        for(unsigned i=0;i<8;++i)y+=2*Halfband::tap(i)*(ring[(position-i)&15]+ring[(position-15+i)&15]);
        return y;
    }
    float odd()const{return ring[(position-7)&15];}
};
class MultirateCore {
    Core<1024,512,false,true,128> upper;
    Core<512,256,false,true,64> lower;
    Down2 downHigh,downLow;Up2 upLow,upHigh;
public:
    static constexpr int fftSize=1024,hopSize=128,latencySamples=640;
    // latencySamples describes dry/upper only; sub-octave latency is longer.
    void prepare(float rate){upper.prepare(rate);lower.prepare(rate*.25f);setParameters({});reset();}
    void setParameters(Parameters p){
        auto high=p;high.sub1=high.sub2=0;upper.setParameters(high);
        auto low=p;low.dry=low.up1=low.up2=0;low.dryFx=0;lower.setParameters(low);
    }
    void reset(){upper.reset();lower.reset();downHigh={};downLow={};upLow={};upHigh={};}
    void process(const float* in,float* out,std::size_t count){
        while(count){
            const auto n=count<32?count:32;float source[32];
            for(unsigned i=0;i<n;++i)source[i]=in[i];
            upper.process(source,out,n);
            // Batch the quarter-rate callback without moving its sample clock.
            // Event masks preserve interpolation phases for arbitrary block sizes.
            float quarter[8];unsigned countLow=0,halfEvents=0,lowEvents=0;
            for(unsigned i=0;i<n;++i){
                float half,low;
                if(downHigh.push(source[i],half)){
                    halfEvents|=1u<<i;
                    if(downLow.push(half,low)){lowEvents|=1u<<i;quarter[countLow++]=low;}
                }
            }
            lower.process(quarter,quarter,countLow);
            unsigned nextLow=0;
            for(unsigned i=0;i<n;++i){
                float sub;
                if(halfEvents&(1u<<i)){
                    if(lowEvents&(1u<<i)){
                        upLow.push(quarter[nextLow++]);sub=upLow.even();
                    }else sub=upLow.odd();
                    upHigh.push(sub);sub=upHigh.even();
                }else sub=upHigh.odd();
                out[i]+=sub;
            }
            in+=n;out+=n;count-=n;
        }
    }
};
}
