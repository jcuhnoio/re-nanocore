// NanoCore 1.12 experimental FX2/PITCH adapter. No heap allocation in processing.
// Native addresses and hook bytes are guarded by tools/custom_fx/octave_hooks.py.
#include "shared_core.h"
#include <cstdint>
#include <cstddef>

using Core = octave_shared_optimized::Core<2048,1024>;
using Parameters = octave_shared_optimized::Parameters;
extern "C" {
struct OctaveStats {
    std::uint32_t calls,frames,maxTicks,sumLow,sumHigh,lastTicks,initCount;
};
volatile OctaveStats nc_octave_stats={};
}
static std::uint64_t ticks() {
    // Same native 64-bit timer used by the stock audio timing path.
    return reinterpret_cast<std::uint64_t(*)()>(0x40040028u)();
}
void* operator new(__SIZE_TYPE__,void* p) noexcept { return p; }
namespace {
constexpr std::uint32_t Magic=0x4f435431; // OCT1
constexpr std::size_t NativePitchBytes=0xd98;
constexpr std::size_t RingBytes=0xe000;
struct State {
    std::uint32_t magic;
    float sampleRate;
    float controls[3];
    float level;
    std::uint32_t validControls;
    std::uint32_t resets;
    Core core;
};
static_assert(offsetof(State,core)==32,"metadata offset changed");
static_assert(sizeof(State)<=RingBytes,"expanded ring too small");
static float bounded(float x,float fallback) {
    return std::isfinite(x) ? (x<0?0:(x>1?1:x)) : fallback;
}
static State* stateFor(void* nativePitch) {
    if(!nativePitch)return nullptr;
    auto* s=*static_cast<State**>(nativePitch);
    return s && s->magic==Magic ? s : nullptr;
}
static void controls(State* s,const float* p) {
    const float dry=p?bounded(p[0],.65f):.65f;
    const float swell=p?bounded(p[1],0):0;
    const float level=p?bounded(p[2],.5f):.5f;
    if(s->validControls && s->controls[0]==dry && s->controls[1]==swell && s->controls[2]==level)return;
    Parameters q;
    q.dry=dry; q.attackMs=swell*2000;
    q.sub2=.05f; q.sub1=.3f; q.up1=.65f; q.up2=.35f;
    q.cutoffHz=6500; q.outputDb=-9; q.detuneCents=0; q.dryFx=0;
    s->core.setParameters(q);
    s->controls[0]=dry;s->controls[1]=swell;s->controls[2]=level;
    s->level=2*level;s->validControls=1;
}
static void bypass(const float* left,const float* right,float* outLeft,float* outRight,
                   std::uint32_t frames,std::uint32_t stereo) {
    for(std::uint32_t i=0;i<frames;++i){
        float l=left[i],r=right?right[i]:l;
        outLeft[i]=l;if(stereo && outRight)outRight[i]=r;
    }
}
}
extern "C" std::uint32_t nc_octave_state_bytes(){return sizeof(State);}
extern "C" int nc_octave_pitch_init(float rate,void* nativePitch,void* ring,std::uint32_t count) {
    // The hook plan expands both allocations to RingBytes but preserves the
    // native 2048-count call contract. No other caller may use this hook.
    if(!nativePitch || !ring || count!=2048 || (reinterpret_cast<std::uintptr_t>(ring)&3))return -1;
    if(rate!=44100.f && rate!=48000.f)return -1;
    auto* bytes=static_cast<unsigned char*>(nativePitch);
    for(std::size_t i=0;i<NativePitchBytes;++i)bytes[i]=0;
    auto* s=new(ring)State{};
    s->sampleRate=rate;
    s->core.prepare(rate);
    controls(s,nullptr);
    s->core.reset();
    s->magic=Magic; // Publish validity only after all initialization succeeds.
    ++nc_octave_stats.initCount;
    *static_cast<State**>(nativePitch)=s;
    return 0;
}
extern "C" void nc_octave_pitch_reset(void* nativePitch) {
    if(auto* s=stateFor(nativePitch)){s->core.reset();++s->resets;}
}
extern "C" void nc_octave_pitch_set_shift(float,float,float,void*) {
    // Native initializer's neutral pitch setup is superseded by core controls.
}
extern "C" void nc_octave_process(void* family,const float* left,const float* right,
                                   float* outLeft,float* outRight,std::uint32_t frames,
                                   const float* p,std::uint32_t subtype,
                                   std::uint32_t stereo,std::uint8_t* outputMode) {
    if(!left || !outLeft || !frames)return;
    if(outputMode)*outputMode=stereo!=0;
    auto* bytes=static_cast<unsigned char*>(family);
    auto* enabled=family?*reinterpret_cast<std::uint8_t**>(bytes+4):nullptr;
    State* s=family?stateFor(bytes+8):nullptr;
    if(subtype!=8 || !enabled || !*enabled || !s){bypass(left,right,outLeft,outRight,frames,stereo);return;}
    const std::uint64_t start=ticks();
    if(bytes[0xe40]!=8){s->core.reset();++s->resets;}
    bytes[0xe40]=8;
    controls(s,p);
    float mono[64];
    for(std::uint32_t offset=0;offset<frames;offset+=64){
        const std::uint32_t n=frames-offset<64?frames-offset:64;
        for(std::uint32_t i=0;i<n;++i){
            const float l=left[offset+i];
            mono[i]=stereo && right ? .5f*(l+right[offset+i]) : l;
        }
        s->core.process(mono,mono,n);
        for(std::uint32_t i=0;i<n;++i){
            const float y=mono[i]*s->level;
            outLeft[offset+i]=y;
            if(stereo && outRight)outRight[offset+i]=y;
        }
    }
    const std::uint64_t elapsed=ticks()-start;
    const std::uint32_t last=elapsed>0xffffffffULL?0xffffffffu:std::uint32_t(elapsed);
    const std::uint64_t total=(std::uint64_t(nc_octave_stats.sumHigh)<<32)+nc_octave_stats.sumLow+elapsed;
    nc_octave_stats.sumLow=std::uint32_t(total);nc_octave_stats.sumHigh=std::uint32_t(total>>32);
    nc_octave_stats.lastTicks=last;
    if(last>nc_octave_stats.maxTicks)nc_octave_stats.maxTicks=last;
    nc_octave_stats.frames+=frames;++nc_octave_stats.calls;
}
extern "C" __attribute__((naked)) void nc_octave_dispatch() {
    // No stack use before dispatch: arguments9/10 stay at incoming sp+0/+4.
    // Non-PITCH exactly replays the two overwritten native prologue instructions.
    __asm__ volatile(
        "li t0,8\n"
        "bne a7,t0,1f\n"
        "j nc_octave_process\n"
        "1: addi sp,sp,-688\n"
        "sw s1,676(sp)\n"
        "li t0,0x4006b1cc\n"
        "jr t0\n");
}
