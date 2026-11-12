/* Custom Uni-Vibe DSP with MXR-style SPEED/DEPTH/LEVEL/MODE controls.
 * Phase network: Darabundit/Wedelich/Bischoff, DAFx2019 paper31 equations9,11.
 * Cp3=470nF from original schematic (paper table's470pF is inconsistent).
 * Stage gains/ranges below are measurements of one vintage unit, NOT MXR data.
 * LFO/lamp/R mapping is an explicit approximation, not measured optical data.
 * Dedicated Velvet nine-argument ABI; Fs+0 preserved, native reset clears+4.
 */
#include <stdint.h>
#include <stddef.h>
typedef struct {
    float sample_rate;
    uint32_t magic;
    float phase, lamp;
    float z[2][4], b0[4], b1[4], a1[4];
    float controls[4];
    uint32_t tick;
} Vibe;
_Static_assert(sizeof(Vibe)==116, "bounded Velvet substate");
_Static_assert(offsetof(Vibe,magic)==4, "native reset marker");
static float unit(float x) { return !(x>=0) ? 0 : x>1 ? 1 : x; }

void nc_fx_univibe(void *state, const float *inL, const float *inR,
    float *outL, float *outR, uint32_t frames, const float *params,
    uint32_t input_mode, uint8_t *output_mode)
{
    if (!state || !inL || !outL) return;
    Vibe *s=state;
    if (output_mode) *output_mode=input_mode!=0;
    float fs=s->sample_rate;
    if (!(fs>=8000 && fs<=96000)) fs=44100;
    static const float defaults[4]={0.35f,0.8f,0.5f,0};
    float p[4];
    for (unsigned j=0;j<4;j++) p[j]=params?unit(params[j]):defaults[j];
    /* Only two steady-state modes. Smoothing crossfades a switch transition. */
    p[3]=p[3]>=0.5f?1.0f:0.5f;
    if (s->magic!=0x56494232u) {
        s->phase=0; s->lamp=0.5f; s->tick=0;
        for (unsigned c=0;c<2;c++) for (unsigned j=0;j<4;j++) s->z[c][j]=0;
        for (unsigned j=0;j<4;j++) s->controls[j]=p[j];
        s->magic=0x56494232u;
    }
    for (uint32_t i=0;i<frames;i++) {
        if (s->tick==0) {
            for (unsigned j=0;j<4;j++) s->controls[j]+=(p[j]-s->controls[j])*0.015f;
            float *c=s->controls;
            s->phase+=(0.2f+5.8f*c[0]*c[0])*16/fs;
            if (s->phase>=1) s->phase-=1;
            float wave=s->phase<0.5f ? 2*s->phase : 2*(1-s->phase);
            wave=wave*wave*(3-2*wave);
            s->lamp+=(wave-s->lamp)*(16/(fs*(wave>s->lamp?0.02f:0.06f)));
            float dark=0.5f+c[1]*(0.5f-s->lamp);
            dark*=dark; dark*=dark;
            /* Cp, emitter gain alpha, collector magnitude beta, Rmin, Rmax. */
            static const float stage[4][5]={
                {15e-9f,1.01f,1.11f,12700,2790000},
                {220e-9f,0.98f,1.09f,6860,2590000},
                {470e-9f,0.97f,1.10f,7690,3320000},
                {4.7e-9f,0.95f,1.09f,6220,4160000}};
            for (unsigned j=0;j<4;j++) {
                const float *t=stage[j];
                float resistance=4700+t[3]+(t[4]-t[3])*dark;
                float w=(t[0]+1e-6f)/(resistance*t[0]*1e-6f);
                float a=(t[1]*1e-6f-t[2]*t[0])/(t[0]+1e-6f);
                float denominator=2*fs+w;
                s->b0[j]=(a*w-t[2]*2*fs)/denominator;
                s->b1[j]=(a*w+t[2]*2*fs)/denominator;
                s->a1[j]=(w-2*fs)/denominator;
            }
        }
        s->tick=(s->tick+1)&15u;
        float inputs[2]={inL[i],input_mode&&inR?inR[i]:0};
        for (unsigned c=0;c<(input_mode?2u:1u);c++) {
            float x=inputs[c];
            for (unsigned j=0;j<4;j++) {
                float y=s->b0[j]*x+s->z[c][j];
                s->z[c][j]=s->b1[j]*x-s->a1[j]*y;
                x=y;
            }
            /* Dry tap approximates first-stage emitter, before its RC network. */
            float dry=1.01f*inputs[c];
            float y=2*s->controls[2]*(dry+s->controls[3]*(x-dry));
            if (c==0) outL[i]=y; else if (outR) outR[i]=y;
        }
    }
}
