// Offline size/execution probe only: these entry points are NOT NanoCore callback hooks.
#ifdef NC_OCTAVE_BASELINE
#include "../../firmware/custom-fx/octave/reference/experiments/SharedSwellCore.h"
namespace implementation = octave_shared;
#else
#include "../../firmware/custom-fx/octave/shared_core.h"
namespace implementation = octave_shared_optimized;
#endif
#if defined(NC_OCTAVE_SMALL_FFT) && !defined(NC_OCTAVE_BASELINE)
#ifdef NC_OCTAVE_SCHEDULED
using Core=implementation::Core<1024,512,false,true,128>;
#else
using Core=implementation::Core<1024,512,false,false,128>;
#endif
#elif defined(NC_OCTAVE_SCHEDULED)
using Core=implementation::Core<2048,1024,false,true>;
#else
using Core=implementation::Core<2048,1024>;
#endif
void* operator new(__SIZE_TYPE__,void* p) noexcept {return p;}
extern "C" unsigned core_size(){return sizeof(Core);}
extern "C" unsigned core_alignment(){return alignof(Core);}
extern "C" void core_init(void* p,float rate){Core* c=new(p)Core; c->prepare(rate);}
extern "C" void core_parameters(void* p,const implementation::Parameters* q){static_cast<Core*>(p)->setParameters(*q);}
extern "C" void core_reset(void* p){static_cast<Core*>(p)->reset();}
extern "C" void core_process(void* p,const float* in,float* out,unsigned n){static_cast<Core*>(p)->process(in,out,n);}

extern "C" unsigned core_window_bytes(){return 4*(Core::latencySamples
#ifdef NC_OCTAVE_SCHEDULED
-Core::hopSize
#endif
); }
