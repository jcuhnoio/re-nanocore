// NanoCore 1.12 experimental FX2/PITCH adapter. No heap allocation in processing.
// Native addresses and hook bytes are guarded by tools/custom_fx/octave_hooks.py.
#include "controls.h"
#include "overload_guard.h"
#include <cstdint>
#include <cstddef>

#ifdef NC_OCTAVE_MULTIRATE_SUB
#include "multirate_core.h"
using Core = octave_shared_optimized::MultirateCore;
#elif defined(NC_OCTAVE_SMALL_FFT)
using Core = octave_shared_optimized::Core<1024,512,false,true,128>;
#else
using Core = octave_shared_optimized::Core<2048,1024,false,true>;
#endif
using Parameters = octave_shared_optimized::Parameters;
extern "C" {
struct OctaveStats {
    std::uint32_t calls,frames,maxTicks,sumLow,sumHigh,lastTicks,initCount;
};
volatile OctaveStats nc_octave_stats={};
// Latched until reboot: native resets/preset changes cannot repeatedly overload.
volatile std::uint32_t nc_octave_fault=0;
volatile std::uint32_t nc_octave_budget_ticks=0;
volatile std::uint32_t nc_octave_hard_budget_ticks=0;
volatile std::uint32_t nc_octave_previous_overruns=0xffffffffu;
nc_octave_guard::Policy nc_octave_guard_state{};
volatile std::uint32_t nc_octave_fault_self_ticks=0,nc_octave_fault_chain_ticks=0;
volatile std::uint32_t nc_octave_fault_audio_call=0,nc_octave_fault_overruns=0;
}
extern "C" void nc_octave_guard_snapshot(std::uint32_t* out) {
    const auto& g=nc_octave_guard_state;
    out[0]=g.selfExcursions;out[1]=g.chainExcursions;out[2]=g.ignoredOverruns;
    out[3]=nc_octave_hard_budget_ticks;
    out[4]=nc_octave_fault_self_ticks;out[5]=nc_octave_fault_chain_ticks;
    out[6]=nc_octave_fault_audio_call;out[7]=nc_octave_fault_overruns;
    out[8]=g.lastChainTicks;out[9]=g.self.count;out[10]=g.chain.count;out[11]=g.gaps;
}
#ifndef NC_OCTAVE_BUDGET_PERCENT
#define NC_OCTAVE_BUDGET_PERCENT 40
#endif
static_assert(NC_OCTAVE_BUDGET_PERCENT >= 40 && NC_OCTAVE_BUDGET_PERCENT <= 65, "invalid budget");
static std::uint64_t ticks() {
    // Same native 64-bit timer used by the stock audio timing path.
    return reinterpret_cast<std::uint64_t(*)()>(0x40040028u)();
}
#ifdef NC_OCTAVE_PROFILE_JOBS
extern "C" {
volatile std::uint32_t nc_octave_job_max[9]={};
volatile std::uint32_t nc_octave_job_calls[9]={};
std::uint64_t nc_octave_job_begin(){return ticks();}
void nc_octave_job_end(unsigned job, std::uint64_t start){
    const auto elapsed=std::uint32_t(ticks()-start);
    if(job>=9)return;
    if(elapsed>nc_octave_job_max[job])nc_octave_job_max[job]=elapsed;
    ++nc_octave_job_calls[job];
}
}
#endif
void* operator new(__SIZE_TYPE__,void* p) noexcept { return p; }
namespace {
constexpr std::uint32_t Magic=0x4f435431; // OCT1
constexpr std::size_t NativePitchBytes=0xd98;
constexpr std::size_t RingBytes=0x10000;
struct State {
    std::uint32_t magic;
    float sampleRate;
    float controls[nc_octave_controls::Count];
    float level;
    std::uint32_t validControls;
    std::uint32_t resets;
    Core core;
};
static_assert(offsetof(State,core)==64,"metadata offset changed");
static_assert(sizeof(State)<=RingBytes,"expanded ring too small");
static State* stateFor(void* nativePitch) {
    if(!nativePitch)return nullptr;
    auto* s=*static_cast<State**>(nativePitch);
    return s && s->magic==Magic ? s : nullptr;
}
static void controls(State* s,const float* p) {
    float next[nc_octave_controls::Count];bool changed=!s->validControls;
    for(unsigned i=0;i<nc_octave_controls::Count;++i) {
        next[i]=p?nc_octave_controls::bounded(p[i],i):nc_octave_controls::defaults[i];
        changed=changed || next[i]!=s->controls[i];
    }
    if(!changed)return;
    s->core.setParameters(nc_octave_controls::decode(next));
    for(unsigned i=0;i<nc_octave_controls::Count;++i)s->controls[i]=next[i];
    s->level=2*next[10];s->validControls=1;
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
    const auto overruns=*reinterpret_cast<volatile std::uint32_t*>(0x3004ab40u);
    const auto audioCalls=*reinterpret_cast<volatile std::uint32_t*>(0x3004ab30u);
    nc_octave_previous_overruns=overruns;
    if(!nc_octave_fault) {
        const auto sum=*reinterpret_cast<volatile std::uint32_t*>(0x3004ab20u);
        const auto deadline=*reinterpret_cast<volatile std::uint32_t*>(0x3004ab3cu);
        if(nc_octave_guard_state.observe(audioCalls,overruns,sum,deadline)) {
            nc_octave_fault=2;
            nc_octave_fault_self_ticks=nc_octave_stats.lastTicks;
            nc_octave_fault_chain_ticks=nc_octave_guard_state.lastChainTicks;
            nc_octave_fault_audio_call=audioCalls;
            nc_octave_fault_overruns=overruns;
        }
    }
    if(nc_octave_fault){bypass(left,right,outLeft,outRight,frames,stereo);return;}
    const std::uint64_t start=ticks();
    nc_octave_budget_ticks=std::uint32_t(4000000.f*float(frames)/s->sampleRate*(NC_OCTAVE_BUDGET_PERCENT*.01f));
    // A larger soft reservation must not increase the former 60% hard ceiling.
    const auto hardBase=std::uint32_t(4000000.f*float(frames)/s->sampleRate*((NC_OCTAVE_BUDGET_PERCENT>60?60:NC_OCTAVE_BUDGET_PERCENT)*.01f));
    nc_octave_hard_budget_ticks=nc_octave_guard::Policy::hardLimit(hardBase);
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
        // Check the hard ceiling every 32 samples. Small isolated reservation
        // excursions are counted at completion; three in 64 calls latch bypass.
        for(std::uint32_t j=0;j<n;j+=32) {
            const auto k=n-j<32?n-j:32;
            s->core.process(mono+j,mono+j,k);
            if(ticks()-start>nc_octave_hard_budget_ticks) {
                nc_octave_fault=1;break;
            }
        }
        if(nc_octave_fault) {
            bypass(left+offset,right?right+offset:nullptr,outLeft+offset,
                   outRight?outRight+offset:nullptr,frames-offset,stereo);
            break;
        }
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
    if(nc_octave_guard_state.finish(last,nc_octave_budget_ticks,nc_octave_hard_budget_ticks) || nc_octave_fault) {
        nc_octave_fault=1;
        nc_octave_fault_self_ticks=last;
        nc_octave_fault_chain_ticks=nc_octave_guard_state.lastChainTicks;
        nc_octave_fault_audio_call=audioCalls;
        nc_octave_fault_overruns=overruns;
    }
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
