#include <assert.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
void nc_fx_univibe(void*,const float*,const float*,float*,float*,uint32_t,const float*,uint32_t,uint8_t*);
/* Deliberately much shorter than native allocation: writes beyond owned prefix
 * hit an explicit canary or ASan redzone. */
typedef union { float align; unsigned char bytes[148]; } State;
static void init(State *s,float fs) {
 memset(s,0,sizeof(*s));memcpy(s,&fs,4);
 memset(s->bytes+116,0xa5,sizeof(*s)-116);
}
static void call(State *s,float *l,float *r,float *ol,float *orr,unsigned n,float *p,unsigned mode) {
 uint8_t out=255;nc_fx_univibe(s,l,r,ol,orr,n,p,mode,&out);assert(out==mode);
 for(unsigned i=116;i<sizeof(*s);i++)assert(s->bytes[i]==0xa5);
}

/* Independent double-precision, direct-form-I reference for depth=0.
 * Derive coefficients from analog DC/high-frequency gains and RC time constant,
 * rather than reproducing production DF2T state or its float coefficient code. */
typedef struct { double b[2], a, previous_x, previous_y; } RefStage;
static void reference_init(RefStage s[4],double fs) {
 const double cap[]={15e-9,220e-9,470e-9,4.7e-9};
 const double emitter[]={1.01,.98,.97,.95},collector[]={1.11,1.09,1.10,1.09};
 const double dark[]={2790000,2590000,3320000,4160000};
 const double bright[]={12700,6860,7690,6220};
 for(int j=0;j<4;j++) {
  double resistance=4700+bright[j]+(dark[j]-bright[j])/16;
  double effective_cap=cap[j]*1e-6/(cap[j]+1e-6);
  double g=1/(2*fs*resistance*effective_cap);
  double dc=(emitter[j]-collector[j]*cap[j]/1e-6)/(1+cap[j]/1e-6);
  double high=-collector[j];
  s[j]=(RefStage){{(g*dc+high)/(1+g),(g*dc-high)/(1+g)},(g-1)/(g+1),0,0};
  assert(fabs(s[j].a)<1);
  assert(fabs((s[j].b[0]+s[j].b[1])/(1+s[j].a)-dc)<1e-10);
  assert(fabs((s[j].b[0]-s[j].b[1])/(1-s[j].a)-high)<1e-10);
 }
}
static double reference(RefStage s[4],double x,int vibrato,double level) {
 double dry=1.01*x;
 for(int j=0;j<4;j++) {
  double y=s[j].b[0]*x+s[j].b[1]*s[j].previous_x-s[j].a*s[j].previous_y;
  s[j].previous_x=x;s[j].previous_y=y;x=y;
 }
 return 2*level*(vibrato?x:.5*(x+dry));
}

static void impulse_oracle(void) {
 const float rates[]={8000,44100,96000};
 for(unsigned rate=0;rate<3;rate++)for(int vibrato=0;vibrato<2;vibrato++) {
  State state;init(&state,rates[rate]);RefStage ref[4];reference_init(ref,rates[rate]);
  float p[4]={.35f,0,.5f,(float)vibrato},l[64],o[64];double maximum_error=0;
  for(int block=0;block<512;block++) {
   memset(l,0,sizeof(l));if(!block)l[0]=1;
   call(&state,l,0,o,0,64,p,0);
   for(int i=0;i<64;i++) {
    double expected=reference(ref,l[i],vibrato,.5);
    double error=fabs(o[i]-expected);if(error>maximum_error)maximum_error=error;
    assert(isfinite(o[i]));
   }
  }
  assert(maximum_error<1e-5);
 }
}

static void switch_and_level(void) {
 State states[5];float l[64],o[5][64],p[4]={.35f,.8f,.5f,0};
 const float modes[]={0,.49f,.5f,1};
 for(int j=0;j<5;j++)init(&states[j],44100);
 int difference=0;
 for(int block=0;block<64;block++) {
  for(int i=0;i<64;i++)l[i]=.2f*sinf((block*64+i)*.071f);
  for(int j=0;j<4;j++){p[3]=modes[j];call(&states[j],l,0,o[j],0,64,p,0);}
  assert(!memcmp(o[0],o[1],sizeof(o[0])));
  assert(!memcmp(o[2],o[3],sizeof(o[0])));
  if(memcmp(o[0],o[2],sizeof(o[0])))difference=1;
 }
 assert(difference); /* Boundary is exactly .5 and changes audible processing. */
 for(int j=0;j<3;j++)init(&states[j],44100);
 for(int block=0;block<64;block++) {
  for(int i=0;i<64;i++)l[i]=.2f*sinf((block*64+i)*.031f);
  for(int j=0;j<3;j++){p[2]=j*.5f;p[3]=1;call(&states[j],l,0,o[j],0,64,p,0);}
  for(int i=0;i<64;i++){assert(o[0][i]==0);assert(o[2][i]==2*o[1][i]);}
 }
}

static void sweep_and_partition(void) {
 State a,b;float l[64],r[64],o[64],q[64],p[4];
 for(int corner=0;corner<16;corner++) {
  for(int j=0;j<4;j++)p[j]=(corner>>j)&1;
  init(&a,44100);init(&b,44100);
  /* 1400*64 samples exceeds two seconds for every extreme combination. */
  for(int k=0;k<1400;k++) {
   for(int i=0;i<64;i++){l[i]=.2f*sinf((k*64+i)*.031f);r[i]=-.1f*cosf((k*64+i)*.057f);}
   call(&a,l,r,o,q,64,p,1);
   for(int i=0;i<64;i++)call(&b,l+i,r+i,l+i,r+i,1,p,1);
   for(int i=0;i<64;i++) {
    assert(o[i]==l[i]&&q[i]==r[i]);
    assert(isfinite(o[i])&&fabsf(o[i])<2);assert(isfinite(q[i])&&fabsf(q[i])<2);
   }
  }
  assert(!memcmp(&a,&b,sizeof(a)));
 }
}
int main(void) {
 impulse_oracle();switch_and_level();sweep_and_partition();
 puts("univibe: independent double DF1 impulse oracle, 16 control corners/2s each, mode threshold, level zero/2x, in-place/chunk and 116-byte bounds passed");
}
