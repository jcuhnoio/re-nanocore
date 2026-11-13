#include "../../firmware/custom-fx/octave/overload_guard.h"
#include <cassert>
#include <cstdio>
using nc_octave_guard::Policy;
int main(){
 Policy g;unsigned calls=0,misses=0,sum=0;
 auto step=[&](unsigned elapsed){++calls;sum+=elapsed;misses+=elapsed>1000;return g.observe(calls,misses,sum,1000);};
 assert(!g.observe(calls,misses,sum,1000));
 assert(!step(1010));
 for(int i=0;i<10000;++i)assert(!step(900));
 assert(g.chain.count==0 && g.chainExcursions==1);
 assert(!step(1010));assert(!step(1010));assert(step(1010)==2);
 // Three sparse misses inside the window still trip; expired ones do not.
 g={};calls=misses=sum=0;g.observe(0,0,0,1000);
 assert(!step(1010));for(int i=0;i<63;++i)assert(!step(900));
 assert(!step(1010));assert(!step(1010));assert(step(1010)==2);
 // Gaps discard stale attribution, including counter wrap.
 g={};g.observe(100,5,90000,1000);
 assert(!g.observe(200,7,180000,1000));assert(g.ignoredOverruns==2 && g.gaps==1);
 assert(!g.observe(201,7,180900,1000));assert(g.lastChainTicks==900);
 g={};g.observe(0xffffffffu,0xffffffffu,0xffffff00u,1000);
 assert(!g.observe(0,0,0xffffff00u+1010u,1000));assert(g.chain.count==1 && g.lastChainTicks==1010);
 // Severe whole-chain lateness bypasses without waiting for more misses.
 g={};g.observe(1,0,900,1000);assert(g.observe(2,1,2151,1000)==2);
 // Reservation tolerance stays bounded; large self overruns still stop now.
 g={};assert(Policy::hardLimit(800)==900);
 assert(!g.finish(800,800));assert(!g.finish(801,800));
 for(int i=0;i<64;++i)assert(!g.finish(800,800));
 assert(!g.finish(900,800));assert(!g.finish(801,800));assert(g.finish(801,800)==1);
 g={};assert(g.finish(901,800)==1);
 // A raised reservation can retain a separate, unchanged hard ceiling.
 g={};assert(!g.finish(880,900,925));assert(g.finish(926,900,925)==1);
 std::puts("PASS isolated, clustered, expired, inactive-gap, wrapping and severe timing events");
}
