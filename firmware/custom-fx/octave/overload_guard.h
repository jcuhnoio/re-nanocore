// Bounded timing policy. No allocation or automatic retry of a latched fault.
#pragma once
#include <cstdint>
namespace nc_octave_guard {
struct RecentMisses {
    std::uint64_t bits=0;
    unsigned count=0;
    unsigned push(bool miss) {
        count-=unsigned(bits>>63);
        bits=(bits<<1)|unsigned(miss);
        count+=unsigned(miss);
        return count;
    }
    void clear(){bits=0;count=0;}
};
struct Policy {
    RecentMisses chain, self;
    std::uint32_t calls=0, overruns=0, sum=0, lastChainTicks=0;
    std::uint32_t chainExcursions=0, selfExcursions=0, ignoredOverruns=0, gaps=0;
    bool initialized=false;
    // Observe the immediately preceding audio callback only. A counter change
    // across disabled intervals or preset changes cannot identify our work.
    unsigned observe(std::uint32_t nowCalls,std::uint32_t nowOverruns,
                     std::uint32_t nowSum,std::uint32_t deadline) {
        unsigned fault=0;
        if(initialized && std::uint32_t(nowCalls-calls)==1) {
            lastChainTicks=nowSum-sum; // unsigned wrap is intentional
            const bool late=nowOverruns!=overruns;
            if(late)++chainExcursions;
            const unsigned recent=chain.push(late);
            if((late && deadline && lastChainTicks>deadline+deadline/4) || recent>=3)
                fault=2;
        } else if(!initialized || nowCalls!=calls) {
            if(initialized){ignoredOverruns+=nowOverruns-overruns;++gaps;}
            chain.clear();self.clear();lastChainTicks=0;
        }
        calls=nowCalls;overruns=nowOverruns;sum=nowSum;initialized=true;
        return fault;
    }
    static std::uint32_t hardLimit(std::uint32_t soft){return soft+soft/8;}
    unsigned finish(std::uint32_t elapsed,std::uint32_t soft,std::uint32_t hard=0) {
        const bool late=elapsed>soft;
        if(late)++selfExcursions;
        const auto recent=self.push(late);
        return elapsed>(hard?hard:hardLimit(soft)) || recent>=3 ? 1 : 0;
    }
};
static_assert(sizeof(Policy)==72,"guard test snapshot layout changed");
}
