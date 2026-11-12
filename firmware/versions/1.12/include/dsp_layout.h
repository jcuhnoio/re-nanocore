/* Analyst reconstruction from 1.12 native dispatch, not a vendor SDK.
 * Offsets are byte-layout observations. Names and callback types are inferred.
 * This header describes the 32-bit target; it does not enable a flashable plugin.
 */
#ifndef NANOCORE_DSP_LAYOUT_H
#define NANOCORE_DSP_LAYOUT_H
#include <stddef.h>
#include <stdint.h>

/* Bank base + 0x0c + slot * 0x4c. Parameters use 4-byte slots despite
 * Ghidra's spurious undefined8/ulonglong types for some floating accesses. */
typedef struct {
    uint32_t processor_kind;
    uint8_t subtype;
    uint8_t enabled;
    uint8_t unknown_06[2];
    float parameters[12];
    uint8_t extra_38[12]; /* Metadata including synchronization flags; unresolved. */
    uint32_t state_address;
    uint32_t revision;
} nc_dsp_node_layout;

typedef struct {
    uint8_t order[10];
    uint8_t unknown_0a[2];
    nc_dsp_node_layout nodes[10];
    uint16_t skip_mask;
    uint8_t unknown_306[2];
} nc_dsp_bank_layout;

_Static_assert(sizeof(float)==4, "Requires binary32 storage");
_Static_assert(sizeof(nc_dsp_node_layout)==0x4c, "Node stride");
_Static_assert(offsetof(nc_dsp_node_layout,parameters)==8, "Parameter offset");
_Static_assert(offsetof(nc_dsp_node_layout,state_address)==0x44, "State offset");
_Static_assert(offsetof(nc_dsp_node_layout,revision)==0x48, "Revision offset");
_Static_assert(offsetof(nc_dsp_bank_layout,nodes)==0xc, "Node array offset");
_Static_assert(offsetof(nc_dsp_bank_layout,skip_mask)==0x304, "Skip mask offset");
_Static_assert(sizeof(nc_dsp_bank_layout)==0x308, "Bank stride");

/* Working callback contract from the indirect call at 0x4005e29c.
 * a0..a7: state, inL, inR, outL, outR, frames, parameters, subtype.
 * Stack +0: input channel mode; stack +4: output channel-mode byte pointer.
 * Source/destination may alias; right pointers can be null. Do not assume
 * that mode values above 1 are impossible. Registers and memory widths need
 * checking at each chosen processor before using this as an injection ABI.
 */
typedef void (*nc_dsp_callback_candidate)(
    void *state, const float *in_l, const float *in_r,
    float *out_l, float *out_r, uint32_t frames,
    const float *parameters, uint32_t subtype,
    uint32_t input_channel_mode, uint8_t *output_channel_mode);
#endif
