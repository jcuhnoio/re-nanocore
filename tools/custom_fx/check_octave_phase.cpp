// Phase approximation error and exceptional-input semantics; no hardware access.
#include "../../firmware/custom-fx/octave/phase_math.h"
#include <cassert>
#include <cstdio>
#include <cstring>
#include <limits>
#include <cstdint>
using octave_shared_optimized::phaseAngle;
int main() {
    unsigned seed=391721; double maxError=0, sum=0; unsigned count=0;
    auto check=[&](float y,float x) {
        float got=phaseAngle(y,x), ref=std::atan2(y,x);
        if(std::isnan(ref)) {assert(std::isnan(got));return;}
        if(x==0 || y==0 || !std::isfinite(x) || !std::isfinite(y)) {
            assert(got==ref && std::signbit(got)==std::signbit(ref));return;
        }
        double error=std::abs(double(got)-double(std::atan2((long double)y,(long double)x)));
        assert(std::isfinite(got) && error<5e-7);
        if(error>maxError)maxError=error;sum+=error*error;++count;
    };
    const float inf=std::numeric_limits<float>::infinity(), nan=std::numeric_limits<float>::quiet_NaN();
    const float edge[]={0.f,-0.f,1.f,-1.f,inf,-inf,nan,1e-40f,-1e-40f,3e38f,-3e38f,.41421356237f};
    for(float y:edge)for(float x:edge)check(y,x);
    for(int i=0;i<2000000;++i) {
        seed=seed*1664525u+1013904223u;float y;std::memcpy(&y,&seed,4);
        seed=seed*1664525u+1013904223u;float x;std::memcpy(&x,&seed,4);check(y,x);
        float theta=float(i)*(6.28318530718f/2000000)-3.14159265359f;
        check(std::sin(theta),std::cos(theta));
    }
    std::printf("{\"finite_cases\":%u,\"max_radian_error\":%.12g,\"rms_radian_error\":%.12g,\"exceptional_semantics\":true}\n",count,maxError,std::sqrt(sum/count));
}
