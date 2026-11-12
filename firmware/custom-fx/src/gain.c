/* Custom integration probe, NOT a reconstruction of Velvet Vibrato.
 * Dedicated Velvet entry has nine args: input mode in a7, result at sp+0.
 * RATE UI control becomes attenuation 0..1. No state or external dependencies.
 */
#include <stdint.h>
void nc_fx_velvet_gain(void *state, const float *inL, const float *inR,
    float *outL, float *outR, uint32_t frames, const float *params,
    uint32_t input_mode, uint8_t *output_mode)
{
    (void)state;
    float gain = params ? params[0] : 1.0f;
    if (!(gain >= 0.0f)) gain = 0.0f;
    if (gain > 1.0f) gain = 1.0f;
    if (output_mode) *output_mode = input_mode != 0;
    for (uint32_t i = 0; i < frames; ++i) {
        float l = inL ? inL[i] : 0.0f;
        float r = inR ? inR[i] : 0.0f;
        if (outL) outL[i] = l * gain;
        if (input_mode && outR) outR[i] = r * gain;
    }
}
