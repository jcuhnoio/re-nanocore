/* Host invariants and an independent fixed-delay impulse oracle. These tests
 * do not compare with firmware execution or establish firmware equivalence.
 * cc -std=c11 -O2 -ffp-contract=off -Wall -Wextra -Werror -Iinclude \
 *    src/chorus.c tests/test_chorus.c -lm -o /tmp/nc-test-chorus
 */
#include "nc_fx.h"
#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

enum { N = 4096 };
static nc_mod_storage a, b;
static float left[N], right[N], al[N], ar[N], bl[N], br[N];

static void init(nc_mod_storage *s)
{
    memset(s, 0xa5, sizeof(*s));
    assert(nc_fx_chorus_init(s, 44100.0f));
    for (size_t i = 0x2045; i < sizeof(*s); ++i) assert(s->bytes[i] == 0xa5);
}

static void process(nc_mod_storage *s, const float *l, const float *r,
                    float *ol, float *or_, uint32_t n, const float *p,
                    uint32_t stereo)
{
    uint8_t mode = 99;
    nc_fx_chorus(s, l, r, ol, or_, n, p, 0, stereo, &mode);
    assert(mode == (stereo != 0));
}

static void test_impulse(void)
{
    init(&a);
    memset(left, 0, sizeof(left));
    left[0] = 1.0f;
    const float params[2] = {0.5f, 0.0f};
    process(&a, left, 0, al, 0, N, params, 0);
    /* Independent double-precision model of fixed fractional delay plus
     * one-pole impulse response; no reuse of implementation tap routine.
     */
    const double delay = a.chorus.base_delay;
    const unsigned first = (unsigned)floor(delay);
    double wet = 0.0;
    for (unsigned i = 0; i < N; ++i) {
        double delayed = i == first ? 1.0 - (delay - first) : 0.0;
        if (i == first + 1) delayed = delay - first;
        wet = a.chorus.wet_alpha * delayed + (1.0 - a.chorus.wet_alpha) * wet;
        const double expected = a.chorus.dry_gain * left[i] + a.chorus.wet_gain * wet;
        /* Firmware-style float wrapping near index 1024 rounds the fractional
         * coordinate more coarsely than this double-precision oracle. */
        assert(fabs(al[i] - expected) < 1e-5);
    }
    assert(al[0] == a.chorus.dry_gain);
    for (unsigned i = 1; i < first; ++i) assert(al[i] == 0.0f);
    assert(al[first] > 0.0f);
    assert(a.chorus.write_index == 0);
}

static void test_block_and_alias(void)
{
    init(&a); init(&b);
    for (unsigned i = 0; i < N; ++i) {
        left[i] = 0.25f * sinf((float)i * 0.137f);
        right[i] = 0.4f * cosf((float)i * 0.071f);
    }
    process(&a, left, right, al, ar, N, 0, 1);
    const unsigned blocks[] = {1, 7, 257, 1024, 11, 512, 2284};
    unsigned offset = 0;
    for (unsigned i = 0; i < sizeof(blocks)/sizeof(blocks[0]); ++i) {
        process(&b, left + offset, right + offset, bl + offset, br + offset,
                blocks[i], 0, 1);
        offset += blocks[i];
    }
    assert(offset == N);
    assert(memcmp(al, bl, sizeof(al)) == 0);
    assert(memcmp(ar, br, sizeof(ar)) == 0);
    assert(memcmp(&a, &b, sizeof(a)) == 0);
    init(&b);
    memcpy(bl, left, sizeof(bl)); memcpy(br, right, sizeof(br));
    process(&b, bl, br, bl, br, N, 0, 1);
    assert(memcmp(al, bl, sizeof(al)) == 0);
    assert(memcmp(ar, br, sizeof(ar)) == 0);
    assert(memcmp(&a, &b, sizeof(a)) == 0);
}

static void test_stereo_and_edges(void)
{
    init(&a);
    memset(left, 0, sizeof(left));
    for (unsigned i = 0; i < N; ++i) ar[i] = 123.0f;
    process(&a, left, 0, al, ar, N, 0, 0);
    for (unsigned i = 0; i < N; ++i) {
        assert(al[i] == 0.0f && ar[i] == 123.0f);
    }
    assert(a.chorus.wet_right == 0.0f);
    assert(a.chorus.lfo_b != 0.3826834261417389f);
    process(&a, left, 0, al, ar, N, 0, 1);
    for (unsigned i = 0; i < N; ++i) assert(ar[i] == 0.0f);
    b = a;
    process(&a, left, 0, al, ar, 0, 0, 1);
    assert(memcmp(&a, &b, sizeof(a)) == 0);
    nc_fx_chorus(&a, left, 0, al, ar, N, 0, 17, 1, 0);
    assert(memcmp(&a, &b, sizeof(a)) == 0);
    assert(memcmp(left, al, sizeof(left)) == 0);
    assert(!nc_fx_chorus_init(&a, NAN));
    assert(!nc_fx_chorus_init(&a, 192000.0f));
    assert(!nc_fx_chorus_init(0, 44100.0f));
    assert(memcmp(&a, &b, sizeof(a)) == 0);
    nc_fx_chorus(0, left, 0, al, ar, N, 0, 0, 1, 0);
    for (unsigned i = 0; i < N; ++i) assert(al[i] == 0 && ar[i] == 0);
    /* Native subtype transition must reset classic history. Other MOD tail
     * fields stay untouched; their complete lifecycle is the native owner's.
     */
    init(&a); init(&b);
    a.chorus.current_subtype = 2;
    a.chorus.delay_left[0] = 100.0f;
    a.chorus.wet_right = 100.0f;
    process(&a, left, 0, al, ar, N, 0, 1);
    process(&b, left, 0, bl, br, N, 0, 1);
    assert(memcmp(&a, &b, sizeof(a)) == 0);
}

static void test_ranges(void)
{
    const float sample_rates[] = {8000, 44100, 48000, 96000};
    const float controls[][2] = {{0, 0}, {1, 1}, {-100, 100}, {NAN, NAN}};
    for (unsigned f = 0; f < 4; ++f) {
        for (unsigned c = 0; c < 4; ++c) {
            init(&a);
            assert(nc_fx_chorus_init(&a, sample_rates[f]));
            for (unsigned i = 0; i < N; ++i) left[i] = right[i] = 1.0f;
            for (unsigned block = 0; block < 32; ++block) {
                process(&a, left, right, al, ar, N, controls[c], 1);
                for (unsigned i = 0; i < N; ++i) {
                    assert(isfinite(al[i]) && isfinite(ar[i]));
                    assert(al[i] >= 0 && al[i] < 1.609f);
                    assert(ar[i] >= 0 && ar[i] < 1.609f);
                }
            }
            const float norm = a.chorus.lfo_a*a.chorus.lfo_a + a.chorus.lfo_b*a.chorus.lfo_b;
            assert(norm > 0.98f && norm < 1.02f);
        }
    }
}

int main(void)
{
    test_impulse();
    test_block_and_alias();
    test_stereo_and_edges();
    test_ranges();
    puts("chorus: layout, impulse oracle, block partition, in-place, stereo, lifecycle and ranges passed");
    return 0;
}
