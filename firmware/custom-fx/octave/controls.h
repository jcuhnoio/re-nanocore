// Shared normalized control contract for DSP, defaults, and UI.
#pragma once
#include "shared_core.h"
namespace nc_octave_controls {
constexpr unsigned Count=11;
constexpr float defaults[Count]={.65f,.05f,.3f,.65f,.35f,0.f,6350.f/17850.f,0.f,0.f,0.f,.5f};
inline float bounded(float value,unsigned i) {
    return std::isfinite(value)?(value<0?0:(value>1?1:value)):defaults[i];
}
inline unsigned choice(float value) {return unsigned(value*3.f+.5f);}
inline octave_shared_optimized::Parameters decode(const float* p) {
    octave_shared_optimized::Parameters q;
    q.dry=p[0];q.sub2=p[1];q.sub1=p[2];q.up1=p[3];q.up2=p[4];
    q.attackMs=p[5]*2000.f;q.cutoffHz=150.f+p[6]*17850.f;
    q.detuneCents=p[7]*30.f;q.dryFx=choice(p[8]);q.resonance=choice(p[9]);q.outputDb=-9;
    return q;
}
}
