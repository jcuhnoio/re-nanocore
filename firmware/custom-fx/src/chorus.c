/* Clean C reconstruction of NanoCore 1.12 classic Chorus, not original source.
 * Evidence: docs/dsp-chorus.txt; 4006dc08 loop, 40071208 initialization;
 * ev_375fa617cf7ec4ea228a4d42d173940dd93767a02a6336256630d793c19a9146.
 * Native flw/fsw and integer index corroborate the prefix ABI. Explicit FMA
 * follows 4006ddd0/dddc/dde4/de8e/de92; compile with -ffp-contract=off so other
 * expressions retain their written rounding. Trig uses a small-angle polynomial
 * instead of the firmware math routines: this is NOT proven bit-identical.
 * Finite audio/control input and a valid initialized state are required.
 */
#include "nc_fx.h"

#define FMA(a,b,c) __builtin_fmaf((a),(b),(c))

static float clamp01(float x)
{
    /* NaN controls are treated as zero, an explicit defensive deviation. */
    if (!(x >= 0.0f)) return 0.0f;
    return x > 1.0f ? 1.0f : x;
}

static int valid_rate(float fs)
{
    return fs >= 8000.0f && fs <= 96000.0f;
}

static void reset_history(nc_chorus_prefix *s)
{
    s->write_index = 0;
    s->wet_left = s->wet_right = 0.0f;
    s->lfo_a = -0.9238795042037964f;
    s->lfo_b = 0.3826834261417389f;
    for (uint32_t i = 0; i < NC_CHORUS_RING_LENGTH; ++i) {
        s->delay_left[i] = 0.0f;
        s->delay_right[i] = 0.0f;
    }
    s->cached_rate = s->cached_depth = s->cached_mix = -1.0f;
    s->current_subtype = 0;
}

static void set_controls(nc_chorus_prefix *s, const float *params)
{
    const float rate = params ? clamp01(params[0]) : 0.6043956279754639f;
    const float depth = params ? clamp01(params[1]) : 1.0f;
    if (s->cached_rate != rate) {
        const float hz = 0.1f + 3.64f * rate;
        const float x = (6.2831854820251465f * hz) / s->sample_rate;
        const float x2 = x * x;
        /* |x| <= .002938: truncation below 4e-22 (sin), 9e-19 (cos),
         * before float32 evaluation rounding. No external math dependency on
         * targets with hardware single-precision fused multiply-add.
         */
        s->sin_step = x * (1.0f + x2 * (-1.0f/6.0f + x2/120.0f));
        s->cos_step = 1.0f + x2 * (-0.5f + x2/24.0f);
        s->cached_rate = rate;
    }
    if (s->cached_depth != depth) {
        const float d = (s->sample_rate * depth) / 1000.0f;
        s->depth_delay = d < s->base_delay ? d : s->base_delay;
        s->cached_depth = depth;
    }
    if (s->cached_mix != 0.8f) {
        s->fixed_mix = s->cached_mix = 0.8f;
        s->dry_gain = 0.9726893305778503f;
        s->wet_gain = 0.6353678107261658f;
    }
}

int nc_fx_chorus_init(void *state, float sample_rate)
{
    if (!state || !valid_rate(sample_rate)) return 0;
    nc_chorus_prefix *s = (nc_chorus_prefix *)state;
    s->sample_rate = sample_rate;
    s->base_delay = (sample_rate * 5.1f) / 1000.0f;
    const float dt = 1.0f / sample_rate;
    s->wet_alpha = dt / (dt + 6.36619733995758e-05f);
    reset_history(s);
    set_controls(s, 0);
    return 1;
}

static float tap(const float *ring, uint32_t write_index, float delay)
{
    if (delay < 0.0f) delay = 0.0f;
    float read = (float)write_index - delay;
    if (read < 0.0f) read += 1024.0f;
    else if (read >= 1024.0f) read -= 1024.0f;
    const uint32_t i = (uint32_t)read;
    const float fraction = read - (float)i;
    return FMA(1.0f - fraction, ring[i & 1023u],
               fraction * ring[(i + 1u) & 1023u]);
}

void nc_fx_chorus(void *state, const float *inL, const float *inR,
    float *outL, float *outR, uint32_t frames, const float *params,
    uint32_t subtype, uint32_t input_channel_mode, uint8_t *out_channel_mode)
{
    if (out_channel_mode) *out_channel_mode = input_channel_mode != 0;
    if (!outL || !frames) return;
    if (!state || !inL) {
        for (uint32_t i = 0; i < frames; ++i) {
            outL[i] = 0.0f;
            if (outR) outR[i] = 0.0f;
        }
        return;
    }
    nc_chorus_prefix *s = (nc_chorus_prefix *)state;
    if (subtype != 0 || !valid_rate(s->sample_rate)) {
        for (uint32_t i = 0; i < frames; ++i) {
            const float left = inL[i], right = inR ? inR[i] : 0.0f;
            outL[i] = left;
            if (input_channel_mode && outR) outR[i] = right;
        }
        return;
    }
    if (s->current_subtype != 0) reset_history(s);
    set_controls(s, params);
    const float alpha = clamp01(s->wet_alpha);
    uint32_t w = s->write_index & 1023u;
    for (uint32_t i = 0; i < frames; ++i) {
        const float left = inL[i];
        const float right = input_channel_mode && inR ? inR[i] : 0.0f;
        const float dl = FMA(s->lfo_a, s->depth_delay, s->base_delay);
        s->wet_left = FMA(alpha, tap(s->delay_left, w, dl),
                          (1.0f - alpha) * s->wet_left);
        outL[i] = FMA(s->dry_gain, left, s->wet_gain * s->wet_left);
        s->delay_left[w] = left;
        if (input_channel_mode) {
            const float dr = FMA(s->lfo_b, s->depth_delay, s->base_delay);
            s->wet_right = FMA(alpha, tap(s->delay_right, w, dr),
                               (1.0f - alpha) * s->wet_right);
            if (outR) outR[i] = FMA(s->dry_gain, right, s->wet_gain * s->wet_right);
            s->delay_right[w] = right;
        }
        const float a = s->lfo_a;
        s->lfo_a = FMA(a, s->cos_step, s->lfo_b * s->sin_step);
        s->lfo_b = FMA(s->lfo_b, s->cos_step, -(a * s->sin_step));
        w = (w + 1u) & 1023u;
    }
    s->write_index = w;
}
