// Numerical characterization of opt-in FFT experiments; no perceptual acceptance implied.
#include "../../firmware/custom-fx/octave/reference/experiments/SharedSwellCore.h"
#ifndef OPT_HEADER
#define OPT_HEADER "../../firmware/custom-fx/octave/shared_core.h"
#endif
#include OPT_HEADER
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <vector>
using Base = octave_shared::Core<2048, 1024>;
using Opt = octave_shared_optimized::Core<2048, 1024>;
using P = octave_shared::Parameters;
using Q = octave_shared_optimized::Parameters;
static_assert(sizeof(P) == sizeof(Q), "parameters layout");
Q convert(P p) {
    Q q;
    memcpy(&q, &p, sizeof(q));
    return q;
}
unsigned seed = 783127;
unsigned rnd() {
    seed = 1664525u * seed + 1013904223u;
    return seed;
}
std::vector<float> signal(int n, float sr) {
    std::vector<float> s(n);
    for (int i = 0; i < n; i++)
        s[i] = .15f * std::sin(i * 6.28318530718f * 110 / sr) +
               .11f * std::sin(i * 6.28318530718f * 146.8f / sr) +
               .07f * std::sin(i * 6.28318530718f * 196 / sr) +
               .02f * (float(int(rnd() >> 8) - 8388608) / 8388608);
    return s;
}
int main() {
    size_t compared = 0;
    float error = 0;
    double squaredError = 0, squaredSignal = 0;
    size_t changed = 0;
    for (float sr : {8000.f, 44100.f, 48000.f, 96000.f})
        for (int inplace : {0, 1}) {
            Base a;
            Opt b;
            a.prepare(sr);
            b.prepare(sr);
            auto x = signal(131072, sr);
            std::vector<float> ya(x.size()), yb(x.size());
            P p;
            p.detuneCents = 7;
            p.dryFx = 3;
            p.resonance = 2;
            size_t offset = 0;
            int block = 0;
            while (offset < x.size()) {
                if (block % 57 == 0) {
                    p.attackMs = ((block / 57) % 3 == 0) ? 0 : 650;
                    p.outputDb = -9 + float(block % 6);
                    p.cutoffHz = 1000 + float(block % 9000);
                    p.sub1 = (block / 57) % 2 ? .3f : 0;
                    p.up1 = (block / 57) % 3 ? .65f : 0;
                    p.sub2 = (block / 57) % 4 ? .05f : 0;
                    p.up2 = (block / 57) % 5 ? .35f : 0;
                    p.dryFx = (block / 57) % 4;
                    p.resonance = (block / 57) % 4;
                    p.sensitivity = block % 101;
                    p.thresholdDb = -60 + float(block % 20);
                }
                a.setParameters(p);
                b.setParameters(convert(p));
                if (block == 320) {
                    a.reset();
                    b.reset();
                }
                auto n = std::min<size_t>(rnd() % 258, x.size() - offset);
                if (inplace) {
                    std::copy_n(x.data() + offset, n, ya.data() + offset);
                    std::copy_n(x.data() + offset, n, yb.data() + offset);
                    a.process(ya.data() + offset, ya.data() + offset, n);
                    b.process(yb.data() + offset, yb.data() + offset, n);
                } else {
                    a.process(x.data() + offset, ya.data() + offset, n);
                    b.process(x.data() + offset, yb.data() + offset, n);
                }
                offset += n;
                ++block;
            }
            for (size_t i = 0; i < x.size(); i++) {
                if (!std::isfinite(ya[i]) || !std::isfinite(yb[i]))
                    return 1;
                const double d = double(ya[i]) - yb[i];
                error = std::max(error, float(std::abs(d)));
                squaredError += d * d;
                squaredSignal += double(ya[i]) * ya[i];
                changed += std::memcmp(&ya[i], &yb[i], sizeof(float)) != 0;
            }
            compared += x.size();
        }
    printf("{\"samples\":%zu,\"changed_samples\":%zu,\"max_absolute_error\":%.9g,\"rms_error\":%.9g,"
           "\"relative_error_db\":%.9g,\"cases\":8}\n",
           compared, changed, error, std::sqrt(squaredError / compared),
           10 * std::log10(std::max(squaredError, 1e-300) / squaredSignal));
}
