#ifndef NC_FX_H
#define NC_FX_H

#include <stddef.h>
#include <stdint.h>

/* Observed 1.12 audio callback ABI: first eight arguments in integer argument
 * registers, channel mode and result pointer on the stack (RV32 ilp32d).
 * Audio buffers are float32; channel mode is zero for mono, nonzero for stereo.
 */
typedef void (*nc_fx_callback)(void *, const float *, const float *, float *,
    float *, uint32_t, const float *, uint32_t, uint32_t, uint8_t *);

#define NC_MOD_STATE_BYTES 0x192ecu
#define NC_CHORUS_RING_LENGTH 1024u

/* Only the classic Chorus prefix of the much larger shared MOD allocation.
 * Do not use sizeof(nc_chorus_prefix) to allocate a native MOD instance.
 */
typedef struct {
    float sample_rate;
    uint32_t write_index;
    float wet_left, wet_right;
    float lfo_a, lfo_b;
    float sin_step, cos_step;
    float cached_rate, cached_depth, cached_mix;
    float base_delay, depth_delay, wet_alpha;
    float fixed_mix, dry_gain, wet_gain;
    float delay_left[NC_CHORUS_RING_LENGTH];
    float delay_right[NC_CHORUS_RING_LENGTH];
    uint8_t current_subtype;
} nc_chorus_prefix;

typedef union {
    nc_chorus_prefix chorus;
    uint8_t bytes[NC_MOD_STATE_BYTES];
} nc_mod_storage;

_Static_assert(sizeof(float) == 4, "float32 audio required");
_Static_assert(offsetof(nc_chorus_prefix, write_index) == 0x4, "MOD ABI");
_Static_assert(offsetof(nc_chorus_prefix, sin_step) == 0x18, "MOD ABI");
_Static_assert(offsetof(nc_chorus_prefix, cached_rate) == 0x20, "MOD ABI");
_Static_assert(offsetof(nc_chorus_prefix, wet_alpha) == 0x34, "MOD ABI");
_Static_assert(offsetof(nc_chorus_prefix, delay_left) == 0x44, "MOD ABI");
_Static_assert(offsetof(nc_chorus_prefix, delay_right) == 0x1044, "MOD ABI");
_Static_assert(offsetof(nc_chorus_prefix, current_subtype) == 0x2044, "MOD ABI");
_Static_assert(sizeof(nc_mod_storage) == NC_MOD_STATE_BYTES, "MOD allocation");

/* Initialize only the Chorus prefix. Returns 1 for Fs in [8000,96000], else
 * returns 0 without changing storage. This is not the native full MOD init.
 */
int nc_fx_chorus_init(void *state, float sample_rate);

/* Reconstructed subtype 0 only. Other subtypes pass through without changing
 * state; a native integration must dispatch them to the original processor.
 * inL/outL must exist to advance state. Missing stereo inR is silence. Mono
 * leaves outR and right delay history untouched, matching the recovered loop.
 * Same-channel in-place audio is supported; arbitrary overlapping buffers are
 * not. A state initialized by native 1.12 MOD init is layout-compatible.
 */
void nc_fx_chorus(void *state, const float *inL, const float *inR,
    float *outL, float *outR, uint32_t frames, const float *params,
    uint32_t subtype, uint32_t input_channel_mode, uint8_t *out_channel_mode);

/* Dedicated MOD10 replacement ABI: nine arguments, no subtype. */
void nc_fx_velvet_gain(void *state, const float *inL, const float *inR,
    float *outL, float *outR, uint32_t frames, const float *params,
    uint32_t input_mode, uint8_t *output_mode);

/* Uni-Vibe-inspired replacement, same nine-argument dedicated Velvet ABI. */
void nc_fx_univibe(void *state, const float *inL, const float *inR,
    float *outL, float *outR, uint32_t frames, const float *params,
    uint32_t input_mode, uint8_t *output_mode);

#endif
