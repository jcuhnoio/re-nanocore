// Bounded read-only telemetry for the local 1.12 octave experiment.
// NC71 opcode0x39 accepts only magic OCT? here; every normal request falls through.
#include <cstdint>
extern "C" volatile std::uint32_t nc_octave_stats[7];
extern "C" std::uint32_t nc_octave_state_bytes();
extern "C" volatile std::uint32_t nc_octave_fault,nc_octave_budget_ticks,nc_octave_previous_overruns;
#ifdef NC_OCTAVE_PROFILE_JOBS
extern "C" volatile std::uint32_t nc_octave_job_max[9],nc_octave_job_calls[9];
#endif
namespace {
#ifdef NC_OCTAVE_PROFILE_JOBS
std::uint32_t snapshot[54];
#else
std::uint32_t snapshot[36];
#endif
std::uint32_t word(std::uintptr_t a){return *reinterpret_cast<volatile std::uint32_t*>(a);}
struct Response {const void* data;std::uint32_t length;};
}
extern "C" int nc_octave_snapshot(std::uint32_t,const unsigned char*,std::uint32_t,Response* out,unsigned char* status){
 if(!status)return 0;
 if(!out){*status=1;return 1;}
 snapshot[0]=0x4f435431;snapshot[1]=2;
 snapshot[2]=reinterpret_cast<std::uint32_t(*)()>(0x4003fe7c)();
 snapshot[3]=word(0x3004f690);snapshot[4]=word(0x3004ac78);
 const std::uintptr_t audio[]={0x3004ab30,0x3004ab34,0x3004ab28,0x3004ab2c,0x3004ab3c,0x3004ab40,0x3004ab20,0x3004ab24};
 for(unsigned i=0;i<8;++i)snapshot[5+i]=word(audio[i]);
 snapshot[13]=word(0x3004c1fc);snapshot[14]=word(0x3004c200);
 snapshot[15]=word(0x3004c224);snapshot[16]=word(0x3004c228);snapshot[17]=word(0x3004c22c);
 for(unsigned i=0;i<7;++i)snapshot[18+i]=nc_octave_stats[i];
 const auto tick=reinterpret_cast<std::uint64_t(*)()>(0x40040028)();
 snapshot[25]=static_cast<std::uint32_t>(tick);snapshot[26]=static_cast<std::uint32_t>(tick>>32);
 snapshot[27]=nc_octave_state_bytes();snapshot[28]=word(0x3004f728);snapshot[29]=word(0x30051808);
 snapshot[30]=word(0x3004f72c);snapshot[31]=word(0x3005180c);
 snapshot[32]=nc_octave_fault;snapshot[33]=nc_octave_budget_ticks;
 snapshot[34]=nc_octave_previous_overruns;snapshot[35]=11;
#ifdef NC_OCTAVE_PROFILE_JOBS
 snapshot[1]=3;
 for(unsigned i=0;i<9;++i){snapshot[36+i]=nc_octave_job_max[i];snapshot[45+i]=nc_octave_job_calls[i];}
#endif
 out->data=snapshot;out->length=sizeof(snapshot);*status=0;return 1;
}
extern "C" __attribute__((naked)) void nc_octave_diagnostic(){
 __asm__ volatile(
 "li t0,4\n bne a2,t0,1f\n beqz a1,1f\n"
 "lbu t0,0(a1)\n li t1,79\n bne t0,t1,1f\n"
 "lbu t0,1(a1)\n li t1,67\n bne t0,t1,1f\n"
 "lbu t0,2(a1)\n li t1,84\n bne t0,t1,1f\n"
 "lbu t0,3(a1)\n li t1,63\n bne t0,t1,1f\n"
 "j nc_octave_snapshot\n"
 "1: addi sp,sp,-48\n sw ra,44(sp)\n li t0,0x4008f8b0\n jr t0\n");
}
